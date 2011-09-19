#include "stimuli.h"
                                                                                            
void stimuli::stimuli_process()  {
    int tmp1 = 1;
    int tmp2 = 1; 
    while (true) {
      cout << "\n<<<<< new clock >>>>>\n\n";
      cout << "stimuli: (" << tmp1 << "," << tmp2 << ")\n";
      out1.write(tmp1);
      out2.write(tmp2);
      tmp1 *= 2;
      tmp2 += 1;
      wait();
    }
  } 
