#include "systemc.h"
#include "adder.h"
#include "display.h"
#include "stimuli.h"

int sc_main( int argc, char *argv[] )  {
  // Signals
  sc_signal<int> arg1;
  sc_signal<int> arg2;
  sc_signal<int> sum;
  
  // Clock
  sc_clock clk( "clock", 10, 0.5 );
  
  // Module
  stimuli *S;
  adder *A;
  display *D;
  
  // Module instantiations and Mapping
  S = new stimuli("stimuli");
  //(*S) (arg1, arg2, clk);
  A = new adder("adder");
  //(*A) (arg1, arg2, sum);
  D = new display ("display");
  //(*D) (sum);
  
  S->clk(clk);
  S->out1(arg1);
  S->out2(arg2);

  A->clk(clk);  
  A->in1(arg1);
  A->in2(arg2);
  A->out1(sum);
  
  D->clk(clk);
  D->in1(sum);
  
  // Start of the Simulation
  sc_start(200);
  return 0; 
};                                                                     
