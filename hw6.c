#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
  int arr[5], i, arrOdd[5], arrEven[5];
  int Oddlen = 0, Evenlen = 0;

  printf("Please input five integers: ");
  scanf("%d %d %d %d %d", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4]);

  for (i=0;i<5;i++)
	  if (arr[i] % 2 == 0) {
		  arrEven[Evenlen] = arr[i];
		  Evenlen += 1;
	  }
	  else {
		  arrOdd[Oddlen] = arr[i];
		  Oddlen += 1;
	  }

  printf("\nOdd numbers: ");
  for (i = 0; i < Oddlen; i++) {
	  printf("%d ", arrOdd[i]);
  }

  printf("\nEven numbers: ");
  for (i = 0; i < Evenlen; i++) {
  	printf("%d ", arrEven[i]);
  }
  printf("\n");
  return 0;
}
