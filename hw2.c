#include <stdio.h>

int main(void)
{
#if 0 //연습문제 5장 문제1
	int x1, y1, x2, y2;
	int area;
	printf("좌 상단의 x, y 좌표: ");
	scanf_s("%d %d", &x1, &y1);
	printf("우 하단의 x, y 좌표: ");
	scanf_s("%d %d", &x2, &y2);
	area = (x2 - x1) * (y2 - 1);
	printf("두 점이 이루는 직사각형의 넓이는 %d입니다.", area);
	return 0;
#endif

#if 0 //연습문제 5장 문제2
	double num1, num2;
	printf("두 개의 실수 입력: ");
	scanf_s("%lf %lf", &num1, &num2);
	printf("덧셈 결과: %f \n", num1 + num2);
	printf("뺄셈 결과: %f \n", num1 - num2);
	printf("곱셈 결과: %f \n", num1 * num2);
	printf("나눗셈 결과: %f \n", num1 / num2);
	return 0;
#endif

#if 0 //연습문제 5장 문제4
	int num;
	printf("문자로로 변환할 정수를 입력: ");
	scanf_s("%d", &num);
	printf("%c \n", num);
	return 0;
#endif

#if 0 //연습문제 5장 문제5
	char ch;
	printf("정수로 변환할 알파벳을 입력: ");
	scanf_s("%c", &ch);
	printf("%d", ch);
	return 0;
#endif

	//개념확인과제
	double km, miles;
	printf("Please enter kilometers: ");
	scanf_s("%lf", &km);
	miles = km * ((double)1000 / 1609);
	printf("%.1f km is equal to %.1f miles.", km, miles);
	return 0;
}
