#include "adder.h"

void adder::adder_process() {
  int  tmp1;
  int  tmp2;    
  while ( true )  {
    tmp1 = in1.read();
    tmp2 = in2.read();
    result = tmp1 + tmp2;
    cout << "adder: (" << tmp1 << "+" << tmp2 << "=" << result << ")\n";
    cout << "adder_process: notify inc_process\n";
    sync_event.notify();
    wait();
  }
}

void adder::inc_process() {
  while ( true )  {
    cout << "inc: waiting adder ()\n";
    wait(sync_event);
    cout << "inc: (" << result << " + 1 = " << result + 1 << ")\n";
    result++;
    out1.write( result );
  }
}
