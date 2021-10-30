#include <stdio.h>
#include <iostream>
using namespace std;

/*

*/

#include <stdio.h>	// 预编译命令
int main() {		// 主函数
	float sheep[10] = {0};	// 用于存10只羊每一只的重量
	float  bigsheep = 0.0;	// 浮点类型变量，存放最肥羊的重量
	int  i = 0, bigsheepNo = 0;	// 整型变量，i  用于计数循环，
	// bigsheepNo用于记录最肥羊的号
	for ( i = 0; i < 10; i = i + 1 ) {
		printf("请输入羊的重量sheep[%d]=", i);; // 提示用
		scanf("%f", &sheep[i]);		// 输入第i只羊的重量
		if ( bigsheep < sheep[i] ) {	// 如果第i只羊比当前最肥羊大
			bigsheep = sheep[i];	// 让第i只羊为当前最肥羊
			bigsheepNo = i;	// 纪录第i只羊的编号
		}
	}				            // 循环结束

	printf("最肥羊的重量为%f\n", bigsheep);
	printf("最肥羊的编号为%d\n", bigsheepNo);
	return 0;
}


