#include <stdio.h>
int main(void) {
	//�� ���� ������ ����(num1,num2)�� ����
	int num1, num2;
	//ȭ�鿡 "ù ��° ���� �Է��ϼ���: " �� ���
	printf("ù ��° ���� �Է��ϼ���: ");
	//Ű����κ��� ù ��° ���� �Է¹޾� num1�� ����
	scanf_s("%d", &num1);
	printf("�� ��° ���� �Է��ϼ���: ");
	scanf_s("%d", &num2);
	if (num1 > num2)
		printf("�� ���� ���� %d �Դϴ�", num1 - num2);
	else
		printf("�� ���� ���� %d �Դϴ�", num2 - num1);
	
	return 0;
}