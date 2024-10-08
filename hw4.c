#include <stdio.h>

int main(void)
{
   int num, k;

   printf("Please enter a number: ");
   scanf_s("%d", &num);

   for (k = 2; k <= num; k++) {
      if (num % k == 0) {
         if (k == num) {
            num = 1;
            break;
         }
         else {
            num = 0;
         }
      }
   }

   if (num == 1) {
      printf("It is a prime number.");
   }
   else {
      printf("It is not a prime number.");
   }

   return 0;
}
