int Bin(int n)
{
	if (n == 0) {
		printf("%d", n);
	}
	else if (n == 1) {
		printf("%d", n);
	}
	else {
		Bin(n / 2);
		printf("%d", n % 2);
	}
}

int main(void)
{
	int num;
	printf("Please enter a number: ");
	scanf_s("%d", &num);
	Bin(num);
}
