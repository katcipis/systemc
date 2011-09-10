#include <systemc.h>

SC_MODULE(display)
{
public:
// Ports
	sc_in<int> in1;
// Funcionality
	void display_process();
// Constructor
	SC_CTOR(display)
	{
		SC_METHOD(display_process);
		sensitive << in1;
	}
};
