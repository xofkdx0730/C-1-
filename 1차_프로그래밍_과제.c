#include <stdio.h>

int main(void)
{
	int trans = -1, pay = -1, etc = -1, TotalCost;
	double SHpassPer, KMpassPer;
	int SHpassCost, KMpassCost;
	int SHpassTrans, SHpassPay, KMpassTrans, KMpassPay;
	printf("*** 신한/국민 K-패스 체크카드 시뮬레이션 프로그램 *** \n\n");
	while (trans < 0)
	{
		printf("월 평균 대중교통 요금: ");
		scanf_s("%d", &trans);
		if (trans < 0)
		{
			printf("0원 이상의 값으로 다시 입력하세요. \n");
		}
	}

	while (pay < 0)
	{
		printf("월 평균 생활서비스 결제액: ");
		scanf_s("%d", &pay);
		if (pay < 0)
		{
			printf("0월 이상의 값으로 다시 입력하세요. \n");
		}
	}

	while (etc < 0)
	{
		printf("월 평균 기타 결제액: ");
		scanf_s("%d", &etc);
		if (etc < 0)
		{
			printf("0원 이상의 값으로 다시 입력하세요. \n");
		}
	}

	SHpassTrans = trans / 10;
	SHpassPay = pay / 50;
	KMpassTrans = trans / 10;
	KMpassPay = pay / 50;
	TotalCost = trans + pay + etc;

	if (TotalCost > 0)	{
		if (TotalCost > 200000) {
			if (TotalCost > 500000) {
				if (SHpassTrans > 5000) {
					SHpassTrans = 5000;
				}
				if (SHpassPay > 5000) {
					SHpassPay = 5000;
				}
			}
			else {
				if (SHpassTrans > 2000) {
					SHpassTrans = 2000;
				}
				if (SHpassPay > 2000) {
					SHpassPay = 2000;
				}
			}
		}
		else {
			SHpassTrans = 0;
			SHpassPay = 0;
		}
	}
	SHpassCost = SHpassTrans + SHpassPay;
	SHpassPer = ((double)SHpassCost / TotalCost) * 100;

	if (TotalCost > 0) {
		if (TotalCost > 200000) {
			if (KMpassTrans > 2000) {
				KMpassTrans = 2000;
			}
			if (KMpassPay > 8000) {
				KMpassPay = 8000;
			}
		}
		else {
			KMpassTrans = 0;
			KMpassPay = 0;
		}
	}
	KMpassCost = KMpassTrans + KMpassPay;
	KMpassPer = ((double)KMpassCost / TotalCost) * 100;

	printf(" \n");
	printf("신한 K-패스 체크카드의 예상 할인 금액은 %d원이며, 할인률은 %.2f%%입니다. \n", SHpassCost, SHpassPer);
	printf("국민 K-패스 체크카드의 예상 할인 금액은 %d원이며, 할인률은 %.2f%%입니다. \n", KMpassCost, KMpassPer);
	
	if (SHpassPer > KMpassPer) {
		printf("따라서 신한 K-패스 체크카드가 더 나은 선택입니다.\n");
	}
	else if (SHpassPer < KMpassPer) {
		printf("따라서 국민 K-패스 체크카드가 더 나은 선택입니다.\n");
	}
	else {
		printf("따라서 어느 것을 선택하셔도 혜택이 동일합니다.\n");
	}

	return 0;
}
