#include<stdio.h>
#include<stdlib.h>

// Defining the array structure

struct Array{
  int *A;
  int size;
  int length;
};

void DisplayElements(struct Array arr){
  for(int i =0; i < arr.length; i++){
    printf("%d ", arr.A[i]);
  }
}

int main(){
  int element;
  printf("Defining an Array.\n");
  // Creating a array
  struct Array arr;

  // Get the array size.
  printf("Array initial size : ");
  scanf("%d", &arr.size);

  // Creating the array with array size from user input.
  arr.A = (int *)malloc(sizeof(int) * arr.size);

  // Setting initial array length = 0
  arr.length = 0;

  // Defining the array element size.
  printf("Enter the elements size : ");
  scanf("%d", &element);

  // Getting elements as user input.
  printf("Enter the elements.\n");
  for (int i =0; i < element; i++){
    scanf("%d", &arr.A[i]);
  }
  // Setting the length of arr
  arr.length = element;

  DisplayElements(arr);
  return 0;
}