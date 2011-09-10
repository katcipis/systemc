#include <systemc.h>
SC_MODULE(adder)
{
// Ports
public:
	sc_in<int> in1;
	sc_in<int> in2;
	sc_out<int> out1;
	sc_in_clk clock;

// Funcionality
	void adder_process();
	
// Constructor
	SC_CTOR(adder)
	{
		SC_CTHREAD(adder_process, clock.pos());
		sensitive << in1 << in2;
	}
};
