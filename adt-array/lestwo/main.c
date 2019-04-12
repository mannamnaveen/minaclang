#include<stdio.h>
#include<stdlib.h>

// Defining array structure

struct Array{
  int A[10];
  int size;
  int length;
};

void DisplayArray(struct Array arr){
  // Display
  printf("Display Function.\n");
  for(int i = 0; i < arr.length; i++){
    printf("%d ", arr.A[i]);
  }
  printf("\n");
}

void AppendArray(struct Array arr, int number){
  arr.A[arr.length] = number;
  arr.length++;
  DisplayArray(arr);
}

void InsertAtIndex(struct Array arr, int index, int number){
  for(int i = arr.length; i > index; i--){
    arr.A[i] = arr.A[i-1];
  }
  arr.A[index] = number;
  arr.length++;
  DisplayArray(arr);
}

int main(){
  printf("Defining Array functions. Display, add and insert.\n");
  struct Array arr={{1, 2, 3, 4, 5}, 10, 5};

  DisplayArray(arr);
  AppendArray(arr, 6);
  DisplayArray(arr);
  InsertAtIndex(arr, 2, 2);
  return 0;
}