#include "stimuli.h"

void stimuli::stimuli_process()
{
	while(true)
	{
		out1 = out1 + 2;
		out2 = out2 + 1;
		wait();
	}
}
