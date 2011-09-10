#include <systemc.h>

SC_MODULE(display)
{
public:
// Ports
	sc_in<int> in1;
	sc_in_clk clock;
// Funcionality
	void display_process();
// Constructor
	SC_CTOR(display)
	{
		SC_CTHREAD(display_process, clock.neg());
		sensitive << in1;
	}
};
