#include "display.h"

void display::display_process() { 

  while (true) {
    cout << "\tdisplay: (" << in1.read() << ")" << endl;
    wait();
  }
}
