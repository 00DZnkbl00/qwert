#include <stdio.h>
#include <stdlib.h>

int main(){
  int *mytab = NULL;
  int n,x;
  scanf("%d",&n);
  mytab = (int*)malloc(n * sizeof(int));
  if (mytab == NULL){
    perror("Error in malloc");
    exit (1);
  }
  for(x=0; x<n; x++){
      mytab[x] = x;
  }

  for(x=0; x<n; x++){
      printf("%d ",mytab[x]);
  }

  putchar('\n');
  free(mytab);
  return EXIT_SUCCESS;
}

