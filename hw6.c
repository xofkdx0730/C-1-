#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
  int arr[5], arrOdd[5], arrEven[5];
  int Oddlen=0, Evenlen=0, i;

  printf("Please input five integers: ");
  scanf("%d %d %d %d %d", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4]);
  
  for (i = 0; i < 5; i++) {
      if (arr[i] % 2 == 1) {
          arrOdd[Oddlen] = arr[i];
          Oddlen += 1;
 
