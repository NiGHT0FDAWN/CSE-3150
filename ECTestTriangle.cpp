/* test whether three integers can form a triangle where the given integers are the lengths of the three edges of the triangle */
/* return 0 if yes, and -1 if not */
/* note: triangle edge length must be positive (larger than 0) and sum of two sides is strictly larger than the third side */
int ECTestTriangle(int a, int b, int c)
{
  if(a<1 || b<1 || c<1) {
    return -1;
  }
  if (a<b+c && b<a+c && c<a+b) {
    return 0;
  }
  return -1;
}

