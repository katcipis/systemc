#ifndef ADDER_H
#define ADDER_H
#include <systemc.h>

SC_MODULE( adder )  {
  // Ports
  sc_in<int> in1;
  sc_in<int> in2;
  sc_out<int> out1;
  sc_in_clk   clk; 
  sc_event sync_event;
  int result;
 
  // Functionality
  void adder_process();
  void inc_process(); 
 

  // Constructor
  SC_CTOR( adder )  {
    SC_CTHREAD( adder_process, clk.pos());
    SC_THREAD (inc_process);
  } 
};

#endif
  
