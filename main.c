#include"func.h"
#include<stdio.h>


int main() {
 int A[3][3] = { {1,1,3},{1,5,6},{7,3,4} };
 int B[3][3] = { {1,5,7},{6,3,2},{3,1,5} };
 printf("======================Add==================\n");
 int* C1;
 C1 = Add((int*)A, (int*)B);
 int i1, j1;
 for (i1 = 0; i1 < SIZE; i1++) {
  for (j1 = 0; j1 < SIZE; j1++) {
   // 使用展平索引來存取 C1 中的元素
   printf("%d ", C1[i1 * SIZE + j1]);
  }
  printf("\n");
 }
 return 0;
}