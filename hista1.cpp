//
// Sponsored License - for use in support of a program or activity
// sponsored by MathWorks.  Not for government, commercial or other
// non-sponsored organizational use.
// File: hista1.cpp
//
// MATLAB Coder version            : 5.1
// C/C++ source code generated on  : 05-May-2021 19:10:07
//

// Include Files
#include "hista1.h"
#include "hista1_data.h"
#include "hista1_initialize.h"
#include "randn.h"

// Function Definitions
//
// Arguments    : void
// Return Type  : void
//
void hista1()
{
  static double unusedExpr[100000];
  if (!isInitialized_hista1) {
    hista1_initialize();
  }

  coder::randn(unusedExpr);
}

//
// File trailer for hista1.cpp
//
// [EOF]
//
