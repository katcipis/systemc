#include "adder.h"

// Funcionality
	void adder::adder_process()
	{
		while(true)
		{
			out1 = in1 + in2;
			cout << "adder: (" << in1.read() << "+" << in2.read() << ") =" << endl;
			wait();
		}
	}
