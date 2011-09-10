#include <systemc.h>

SC_MODULE(stimuli)
{
public:
// Ports
	sc_out<int> out1;
	sc_out<int> out2;
	sc_in_clk clock;
// Funcionality
	void stimuli_process();
// Constructor
	SC_CTOR(stimuli)
	{
		SC_CTHREAD(stimuli_process, clock.pos());
	}
};                                                                                           
