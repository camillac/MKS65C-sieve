#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "sieve.h"

int sieve(int n){

  if (n < 1000) {
    size = n * log(n) * 1.3 + 10;
  }
  else {
    size = n* log(n) * 1.5;
  }

  array = calloc(size, sizeof(char));

  int x = 2;
  int num = 1;
  //printf("x= %d\n", x);
  // printf("num= %d\n", num);
  for (x = x+2 ;x < size; x += 2){
    // printf("cur =%d\n", x);
    array[x]++;
  }
  x=3;
  while (x < size && num < n) {
    if (!array[x]){
      // printf("x= %d\n", x);
      num++;
      // printf("num= %d\n", num);
      if (x < (1.15 * sqrt(n * log(n)))) {
        for (int cur = x * x; cur < size; cur += (x * 2)) {
          // printf("cur =%d\n", cur);
          array[cur]++;
        }
      }
    }
    x += 2;
  }
  // for (int n = 0; n < size; n++) {
  //   printf("%d - |%d|\n", n, array[n]);
  // }

  return x-2;

}
