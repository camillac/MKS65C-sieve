#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "sieve.h"

int sieve(int n){

  int size;
  if (n < 1000) {
    size = n * log(n) * 1.3 + 10;
    array = calloc(size, sizeof(int));
  }
  else {
    size = n* log(n) * 1.5;
    array = calloc(size, sizeof(int));
  }

  array[0] = 1;
  array[1] = 1;

  int x = 0;
  int num = 0;
  while (x < size && num < n) {
    if (array[x] == 0){
      num++;
      for (int cur = num * 2; cur < size; cur += num) {
        array[cur] = 1;
      }
    }
    x++;
  }

}
