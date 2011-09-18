#ifndef DISPLAY_H
#define DISPLAY_H
#include <systemc.h>

SC_MODULE( display )  {
  // Ports
  sc_in<int> in1;
  sc_in_clk  clk;
  
  // Functionality
  void display_process();
  
  // Constructor
  SC_CTOR( display )  {
    SC_CTHREAD( display_process, clk.pos() );
  } 
};                                                                                                  

#endif
