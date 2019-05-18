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

void Swap(int *a, int *b){
  int temp = *a;
  *a = *b;
  *b = temp;
}

void BubbleSort(Array arr){
  int flag;
  for(int i = 0; i < arr.length - 1; i++){
    flag = 0;
    for(int j = 0; j < arr.length - i - 1; j++){
      if(arr.A[j] > arr.A[j+1]){
        Swap(&arr.A[j], &arr.A[j+1]);
      }
      flag = 1;
    }
    if(flag == 0){
      break;
    }
  }
}

int LinearSearch(Array arr, int num){
  BubbleSort(arr);
  for(int i = 0; i < arr.length; i++){
    if(arr.A[i] == num){
      return 1;
    }
  }
  return 0;
}

int main(){
  printf("Bubble Sort in C Lang.\n");
  Array arr;
  arr = DefineArray();
  int res = LinearSearch(arr, 2);
  DisplayArray(arr);
  if(res == 1){
    printf("%s \n", "Found");
  }else{
    printf("%s \n", "Not Found");
  }
}