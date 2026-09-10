// This function returns the smallest non-negative integral root of a polynomial (as specified by a list of coefficients and degree) that is no larger than xmax. Return -1 if there is no roots within the range.
//To be specific: for each integer 0 <=i <= degree, listCoeffs[d] = the coefficient of the degree d term. For example, 
#include <cstddef>
int ECFindRoot(int *listCoeffs, int degree, int xmax)
{
  // listCoeffs: pointer to the array of integers as the coefficients of a polynomial; listCoeffs[0] is the constant term and so on
  // degree: highest degree term. That is, the number of coefficients in the array = degree+1
  // xmax: the largest value of root to search
  // your code here
  if (listCoeffs == NULL || degree < 0) {
    return -1;
  }
  for (int x = 0; x <= xmax; x++) {
    long long val = listCoeffs[degree]; //a0 + x(a1 + x(a2 + x(a3...))
    for (int i = degree -1; i >= 0; i--) {
      val = val * x + listCoeffs[i];
    }
    if (val == 0)
      return x;
  }
  return -1;
}
