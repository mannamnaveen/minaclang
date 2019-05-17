#include<stdio.h>

int main(){
  printf("Count number og Vowels in a Given String.\n");
  char str[] = "How are you.";
  int vcount = 0;
  int ccount = 0;
  for(int i = 0; str[i] != '\0'; i++){
    if(
      str[i] == 'a' || str[i] == 'e' ||
      str[i] == 'i' || str[i] == 'o' ||
      str[i] == 'u' || str[i] == 'A' ||
      str[i] == 'E' || str[i] == 'I' ||
      str[i] == 'O' || str[i] == 'U'
    ){
      vcount++;
    }else if(
      str[i] >= 65 && str[i] <= 90 ||
      str[i] >= 97 && str[i] <= 122
    ){
      ccount++;
    }
  }
  printf("Vowels : %d , Cosonants : %d.\n", vcount, ccount);
}