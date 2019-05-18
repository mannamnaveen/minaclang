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

int BinarySearch(Array arr, int num){
  BubbleSort(arr);
  int min = 0;
  int max = arr.length;
  int mid;
  while (min <= max)
  {
    mid = (min + max) / 2;
    if(arr.A[mid] == num){
      return 1;
    }else if (arr.A[mid] < num){
      min = mid + 1;
    }else{
      max = mid - 1;
    }
  }
  return 0;
}

int main(){
  printf("Bubble Sort in C Lang.\n");
  Array arr;
  arr = DefineArray();
  int res = BinarySearch(arr, 2);
  DisplayArray(arr);
  if(res == 1){
    printf("%s \n", "Found");
  }else{
    printf("%s \n", "Not Found");
  }
}