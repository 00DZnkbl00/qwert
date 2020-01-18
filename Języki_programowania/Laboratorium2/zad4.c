#include <stdio.h>
int main() {
    char c;
   /** deklaracje zmiennych lokalnych */
   int nb = 0;  /* liczba znaków odstępu */
   int nt = 0;  /* liczba znaków tabulacji */
   int nl = 0;  /* liczba znaków nowego wiersza */
   while ((c=getchar()) != EOF) {
      if (c == ' ')
        {
            ++nb;
        }
        else if (c == '\t')
        {
            ++nt;
        }
        else if (c == '\n')
        {
            ++nl;
        }
   }
   printf("liczba znaków odstępu = %d, \
      tabulacji = %d, nowego wiersza = %d\n", nb,nt,nl );
   return 0;
}