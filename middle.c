#include <stdio.h>

float addReview(int reviewCount, float avgRating)
{
	int review;
	printf("별점을 1부터 5까지 입력하세요: ");
	scanf_s("%d", &review);
	if (review >= 1 && review <= 5) {
		avgRating = (float)review / reviewCount;
		return avgRating;
	}
	else {
		return -1;
	}
}

void showStatus(int reviewCount, float avgRating)
{
	if (reviewCount == 0) {
		printf("리뷰가 없습니다.")
	}
	else
		printf("총 리뷰 수: %d개, 평균 별점: %.2f", reviewCount, avgRating);
}

int main()
{
	int select, reviewCount = 0;
	float avgRating = 0.00;
	printf("원하는 작업을 선택하세요: \n");
	printf("1. 별점 추가, 2. 현재 상태 보기, 기타. 종료: ");
	scanf_s("%d", &select);
	printf("\n");
	if (select == 1)
		if (addReview(reviewCount, avgRating) != -1.00) {
			reviewCount += 1;
			avgRating = addReview(reviewCount, avgRating);
			printf("별점이 추가되었습니다!");
			printf("총 리뷰 수: %d, 평균 별점: %.2f", reviewCount, avgRating);
		}
		else {
			printf("잘못된 별점입니다. 1부터 5까지의 별점을 입력하세요.");
		}
	else if (select == 2) {
		showStatus(reviewCount, avgRating);
	}
	else {
		printf("프로그램을 종료합니다.");
		return 0;
	}
}
