#include "stimuli.h"
                                                                                            
void stimuli::stimuli_process()  {
    int tmp1 = 1;
    int tmp2 = 1; 
    while (true) {
      cout << "\tstimuli: (" << tmp1 << "," << tmp2 << ")";
      out1.write(tmp1);
      out2.write(tmp2);
      tmp1 *= 2;
      tmp2 += 1;
      wait();
    }
  } 