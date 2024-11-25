int convCase(char c)
{
	int diff = 'a' - 'A';
	if (c >= 'A' && c <= 'Z')
		return c + diff;
	else if (c >= 'a' && c <= 'z')
		return c - diff;
	else
		return c;
}

int main(void)
{
	char str[50];
	int len, i, ch;

	printf("Input> ");
	fgets(str, sizeof(str), stdin);
	len = strlen(str);
	printf("Output> ");
	for (i = 0; i < len; i++) {
		ch = convCase(str[i]);
		putchar(ch);
	}
	return 0;
}
