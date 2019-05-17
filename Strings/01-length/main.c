#include<stdio.h>

int main(){
  printf("Length of string in C Lang.\n");
  char str[] = "Hello, how are you.";
  int len = 0;
  for(int i = 0; str[i] != '\0'; i++){
    len++;
  }
  printf("Length of given string is %d.\n", len);
}