#include <stdio.h>
#include <iostream>
using namespace std;

/*

*/

#include <stdio.h>	// Ԥ��������
int main() {		// ������
	float sheep[10] = {0};	// ���ڴ�10ֻ��ÿһֻ������
	float  bigsheep = 0.0;	// �������ͱ������������������
	int  i = 0, bigsheepNo = 0;	// ���ͱ�����i  ���ڼ���ѭ����
	// bigsheepNo���ڼ�¼�����ĺ�
	for ( i = 0; i < 10; i = i + 1 ) {
		printf("�������������sheep[%d]=", i);; // ��ʾ��
		scanf("%f", &sheep[i]);		// �����iֻ�������
		if ( bigsheep < sheep[i] ) {	// �����iֻ��ȵ�ǰ������
			bigsheep = sheep[i];	// �õ�iֻ��Ϊ��ǰ�����
			bigsheepNo = i;	// ��¼��iֻ��ı��
		}
	}				            // ѭ������

	printf("����������Ϊ%f\n", bigsheep);
	printf("�����ı��Ϊ%d\n", bigsheepNo);
	return 0;
}


