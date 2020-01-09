#include "jbernoulli.h"

void print_jbernoulli_table(int nrow);

int main(int argc, char const *argv[])
{
  print_jbernoulli_table(9);
}

void print_jbernoulli_table(int nrow)
{
  for (int i = 0; i < nrow; i++)
  {
    print_results(i, calculate_sum(i, 1000), 1000);
  }
}