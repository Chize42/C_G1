#include <stdio.h>
int main(void) {
	int score;
	printf("������ �Է��Ͻÿ� : ");
	scanf_s("%d", &score);
	if (score >= 90)
		printf("%d���� A�����Դϴ�.", score);
	else if (score >= 80)
		printf("%d���� B�����Դϴ�.", score);
	else if (score >= 70)
		printf("%d���� C�����Դϴ�.", score);
	else if (score >= 60)
		printf("%d���� D�����Դϴ�.", score);
	else
		printf("�����Դϴ�.", score);
	return 0;
}