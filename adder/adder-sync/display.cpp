#include "display.h"

void display::display_process()
{
	while(true)
	{
		cout << "display: (" << in1.read() << ")" << endl;
		wait();
	}
}
