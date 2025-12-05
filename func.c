#include"func.h"
#include<stdlib.h>
#include<math.h>

int* Add(int* A, int* B) {
 int* C = malloc(sizeof(int) * SIZE * SIZE);
 int i, j;
 for (i = 0; i < SIZE; i++) {
  for (j = 0; j < SIZE; j++) {
   // 使用展平的索引 [i * SIZE + j] 來存取正確的記憶體位置
   C[i * SIZE + j] = A[i * SIZE + j] + B[i * SIZE + j];
  }
 }
 return C;
}