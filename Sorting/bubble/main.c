#include<stdio.h>
#include<stdlib.h>


typedef struct Array
{
  int *A;
  int size, length;
}Array;

Array DefineArray(){
  Array arr;
  arr.size = 10;
  arr.length = 10;
  arr.A = (int *)malloc(sizeof(int) * arr.size);
  printf("Enter the array elements.\n");
  for(int i = 0; i < arr.length; i++){
    printf("> ");
    scanf("%d", &arr.A[i]);
  }
  return arr;
}

void DisplayArray(Array arr){
  for(int i = 0; i < arr.length; i++){
    printf("%d ", arr.A[i]);
  }
  printf("\n");
}

int main(){
  printf("Bubble Sort in C Lang.\n");
  Array arr;
  arr = DefineArray();
  DisplayArray(arr);
}