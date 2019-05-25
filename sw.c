#include<stdio.h>
#include<stdlib.h>

void swap(int *a, int *b){
  *a = *a ^ *b;
  *b = *a ^ *b;
  *a = *a ^ *b;
}

int main(){
  int x = 10;
  int y = 33;

  swap(&x, &y);
  printf("x=%d, y=%d\n", x, y);
  return 0;
}
