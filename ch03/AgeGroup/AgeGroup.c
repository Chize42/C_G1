#include <stdio.h>
int main(void) {
	int age;
	printf("���̸� �Է��Ͻÿ� : ");
	scanf_s("%d", &age);
	if (age <= 13)
		printf("�Ƶ��Դϴ�.");
	else if (age <= 19)
		printf("û�ҳ��Դϴ�.");
	else if (age <= 65)
		printf("�����Դϴ�.");
	else 
		printf("�����Դϴ�.");
	return 0;
}