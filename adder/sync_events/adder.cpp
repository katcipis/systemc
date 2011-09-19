#include "adder.h"

void adder::adder_process() {
  int  tmp1;
  int  tmp2;    
  while ( true )  {
    tmp1 = in1.read();
    tmp2 = in2.read();
    result = tmp1 + tmp2;
    cout << "\tadder: (" << tmp1 << "+" << tmp2 << "=" << result << ")";
    sync_event.notify();
    cout << "\tadder_process: waiting inc_process";
    wait(sync_event);
    cout << "adder: final result: (" << result << ")";
    out1.write( result );
    wait(clk);
  }
}

void adder::inc_process() {
  while ( true )  {
    cout << "\n>>>inc: waiting adder\n";
    wait(sync_event);
    cout << "\n>>>inc: (" << result << " + 1 = " << result + 1 << ")\n";
    result++;
    sync_event.notify();
  }
}
