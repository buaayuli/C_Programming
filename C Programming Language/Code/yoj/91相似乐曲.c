#include <stdio.h>
#include <math.h>

typedef struct Music {
	int n;			//长度
	int ord;		//编号
	int fre[100];	//频率
	int vec[16];	//向量
	double sim;		//相似度
} Music;

void BubbleSort(Music[], int n);//气泡排序

int main()
{
	Music music[100] = {0}, n0 = {0};
	int n, k;
	int i, j;
	scanf("%d", &n0.n);			//输入查询乐曲长度
	for (i = 0; i < n0.n; i++) {//输入频率并计算向量
		scanf("%d", &n0.fre[i]);
		n0.vec[n0.fre[i] / 16]++;
	}
	scanf("%d %d", &n, &k);
	for (i = 0; i < n; i++) {	//输入n首乐曲的信息
		scanf("%d", &music[i].n);
		music[i].ord = i;
		for (j = 0; j < music[i].n; j++) {	//输入频率并计算向量
			scanf("%d", &music[i].fre[j]);
			music[i].vec[music[i].fre[j] / 16]++;
		}
		for (j = 0; j < 16; j++) {	//计算相似度
			music[i].sim += pow((music[i].vec[j] - n0.vec[j]), 2);
		}
		music[i].sim = sqrt(music[i].sim);
	}
	BubbleSort(music, n);		//按照相似度和乐曲编号排序

	for (i = 0; i < k; i++) {	//输出
		printf("%d ", music[i].ord);
	}

	return 0;
}

void BubbleSort(Music music[], int n)
{
	int i, j;
	for (i = 0; i < n-1; i++)
		for (j = 0; j < n - 1 - i; j++)
			if (music[j].sim > music[j + 1].sim ||
				music[j].sim == music[j + 1].sim &&
				music[j].ord > music[j + 1].ord) {
					Music temp = music[j];
					music[j] = music[j + 1];
					music[j + 1] = temp;
				}

}