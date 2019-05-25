#include<stdio.h>
#include<stdlib.h>

char *reverse(char *c){

  printf("%s\n", c);
  int cnt = 0;
  while(*(c+cnt) != '\0')cnt++;

  int length = cnt;


  printf("%d\n", cnt);

  char *r = NULL;
  r = (char*)malloc(sizeof(char) * (cnt+1));

  int i;
  for(i=0; i<length; i++){
    *(r+i) = *(c + cnt - i - 1);
  }
  *(r+length) = '\0';
  
  return r;
}

int main(){
  char a[] = "abc";
  char *r = NULL;
  r = reverse(a);
  printf("%s\n", r);

    
  return 0;
}
