#include <stdio.h>
const int MAX=9;

void printValues(int* valuelist){
  int i = 0;
  printf("[ ");
  for (i = 0; i < MAX; i++){
    printf("%d ", valuelist[i]);
  }
  printf("]  \n");
} // end of printValues

void sort(int* valuelist){
  int i = 0;
  int j = 0;
  for (i = 0; i < (MAX - 1); i++){
    for (j = 0; j < (MAX - 1); j++){
      if (valuelist[j] > valuelist[j+1]){
        swap(&valuelist[j], &valuelist[j+1]);
	printValues(valuelist);
      }
    }
  }
} // end of sort

void swap(int* pA, int* pB){
  int temp = *pA;
  *pA = *pB;
  *pB = temp;
} // end of swap

int main(){
  int values[] = {7, 3, 9, 4, 6, 1, 2, 8, 5};
  printf("Before: \n");
  printValues(values);

  // test swap
  int x = 3;
  int y = 5;
  printf("x: %d, y: %d \n", x, y);
  swap(&x, &y);
  printf("x: %d, y: %d \n", x, y);

  sort(values);
  printf("After: \n");
  printValues(values);

  return(0);
} // end main
