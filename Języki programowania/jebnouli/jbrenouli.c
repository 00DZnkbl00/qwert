
#include <stdio.h>
#include <math.h>

#include "jbernoulli.h"

static long long int powerll(long long int x, long long int y)
{
  return powl(x, y);
}

long long int calculate_sum(int y, int upper_limit)
{
  long long int result = 0;

  for (int i = 1; i <= upper_limit; i++)
  {
    result += powerll(i, y);
  }
  return result;
}

void print_results(int y, int s, int upper_limit)
{
  printf("1^%d + 2^%d + ... + %d^%d = %32d\n", y, y, upper_limit, y, s);
}

