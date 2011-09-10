#include "adder.h"
#include "stimuli.h"
#include "display.h"


int sc_main( int argc, char *argv[] )  {
  // Signals
  	sc_signal<int> arg1;
	sc_signal<int>	arg2;
	sc_signal<int> sum;
  // Clock

 	sc_clock clk("CLK", 20, 0.5, 5, true); 
  // Module
  	
	stimuli *estimulo = new stimuli("ESTIMULO");
 	adder *somador = new adder("ADDER");
	display *visor = new display("DISPLAY");
  
  // Module instantiations and Mapping
	estimulo->clock(clk);
	estimulo->out1(arg1);
	estimulo->out2(arg2);

	somador->in1(arg1);
	somador->in2(arg2);
	somador->out1(sum);

	visor->in1(sum); 
  
  // Start of the Simulation
	sc_start(200); 
  return 0; 
};                                                                     
