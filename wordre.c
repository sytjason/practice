#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MAX 100

char *wrev(char *str){
  int size = strlen(str);

  char *res = (char *)malloc(sizeof(char) * size + 1);
  int i;
  for(i=0; i<size; i++){
    *(res + i) = *(str + size - 1 - i);
  }
  *(res + size) = '\0';

  return res;
}

char *rev(char *str){ 
  char *res = (char *)malloc(sizeof(char)*strlen(str) + 1);

  char *rev_str = wrev(str);

  char *p = strtok(rev_str, " ");
  strcat(res, wrev(p));
  strcat(res, " ");

  // count words

  while(p != NULL){
    p = strtok(NULL, " ");

    if(p){
      strcat(res, wrev(p));
      strcat(res, " ");
    }
  }
  

  return res;

}


int main(){
  FILE *pfile;

  char sss[MAX];

  pfile = fopen("input.txt", "r");

  char t[MAX];
  fscanf(pfile, "%s", t);
  strcat(sss, t);
  strcat(sss, " ");

  /*while(fscanf(pfile, "%s", t) != EOF){*/
    /*strcat(sss,t);*/
    /*strcat(sss, " ");*/
  /*}*/

  fclose(pfile);
  printf("%s\n", sss);



  char *ans = NULL;


  ans = rev(sss);
  /*printf("%s\n", ans);*/
  

  return 0;
}
