#include <stdio.h>
#include <iostream>

using namespace std;

int main() {
	int option1, option2;
	printf("Please enter the number of service you want:\n");
	printf("1 ���ѡ��ײ�ʹ������������ؼ����ֲ�ѯ���Զ�����������\n");
	printf("2 �����Żݻ\n");
	printf("3 ͣ�������ֻ��������������\n");
	printf("4 ��ֵҵ���ѯ���˶�\n");
	printf("5 ���޿������ͥҵ��\n");
	printf("6 ����ҵ��\n");
	printf("0 �˹�����\n");

	scanf("%d", &option1);
	switch (option1) {
		case 1:
			printf("���ѡ��ײ�ʹ������������ؼ����ֲ�ѯ���Զ�����������\n");
			printf("Please enter the number of service you want:\n");
			printf("1 ���Ѳ�ѯ\n");
			printf("2 �ײͼ�����������ѯ\n");
			printf("3 �����ز�ѯ\n");
			printf("4 �˵���ѯ\n");
			printf("5 ���ֲ�ѯ\n");
			printf("6 ��ѯ�����ֻ���Ϣ\n");
			scanf("%d", &option2);
			switch (option2) {
				case 1:
					printf("���Ѳ�ѯ\n");
					break;
				case 2:
					printf("�ײͼ�����������ѯ\n");
					break;
				case 3:
					printf("�����ز�ѯ\n");
					break;
				case 4:
					printf("�˵���ѯ\n");
					break;
				case 5:
					printf("���ֲ�ѯ\n");
					break;
				case 6:
					printf("��ѯ�����ֻ���Ϣ\n");
					break;
			}
			break;
		case 2:
			printf("�����Żݻ\n");
			break;
		case 3:
			printf("ͣ�������ֻ��������������\n");
			printf("Please enter the number of service you want:\n");
			printf("1 ͣ����\n");
			printf("2 �ֻ�����������ѯ\n");
			printf("3 �ֻ������ײͰ���\n");
			printf("4 �����޸�\n");
			printf("5 ��������\n");
			printf("6 ��������\n");
			scanf("%d", &option2);
			switch (option2) {
				case 1:
					printf("ͣ����\n");
					break;
				case 2:
					printf("�ֻ�����������ѯ\n");
					break;
				case 3:
					printf("�ֻ������ײͰ���\n");
					break;
				case 4:
					printf("�����޸�\n");
					break;
				case 5:
					printf("��������\n");
					break;
				case 6:
					printf("��������\n");
					break;
			}
			break;
		case 4:
			printf("��ֵҵ���ѯ���˶�\n");
			break;
		case 5:
			printf("���޿������ͥҵ��\n");
			printf("Please enter the number of service you want:\n");
			printf("1 ���޿��\n");
			printf("2 ��ͥҵ��\n");
			scanf("%d", &option2);
			switch (option2) {
				case 1:
					printf("���޿��\n");
					break;
				case 2:
					printf("��ͥҵ��\n");
					break;
			}
			break;
		case 6:
			printf("����ҵ��\n");
			printf("Please enter the number of service you want:\n");
			printf("1 ���ѡ��ײ͵���Ϣ��ѯ\n");
			printf("2 �������\n");
			printf("3 ҵ����ѯ�Ͱ���\n");
			scanf("%d", &option2);
			switch (option2) {
				case 1:
					printf("���ѡ��ײ͵���Ϣ��ѯ\n");
					break;
				case 2:
					printf("�������\n");
					break;
				case 3:
					printf("ҵ����ѯ�Ͱ���\n");
					break;
			}
			break;
		case 0:
			printf("�˹�����\n");
			break;
		default:
			printf("No service.");
	}
	return 0;
}
