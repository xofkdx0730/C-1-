#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

double StdDev(int *arr)
{
  double sigma;
	double sum=0, aver, minus, sqr;
	int i;
	for (i = 0; i < 5; i++) {
		sum += arr[i];
	}
	aver = (double)sum / 5;
	sum = 0;
	for (i = 0; i < 5; i++) {
		minus = arr[i] - aver;
		sqr = pow(minus, 2.0);
		sum += sqr;
	}
	sum /= 5;
	sigma = sqrt(sum);
	return sigma;
}

int main()
{
  int arr[5];
  int i;
  printf("Enter 5 real numbers: ");
  scanf("%d %d %d %d %d", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4]);
  printf("Standard Deviation = %f", StdDev(arr));
  return 0;
}
