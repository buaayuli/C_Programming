#include <stdio.h>
#include <iostream>

using namespace std;

int main() {
	int option1, option2;
	printf("Please enter the number of service you want:\n");
	printf("1 话费、套餐使用情况、归属地及积分查询（自动播报话费余额）\n");
	printf("2 最新优惠活动\n");
	printf("3 停复机、手机上网及密码服务\n");
	printf("4 增值业务查询与退订\n");
	printf("5 无限宽带、家庭业务\n");
	printf("6 集团业务\n");
	printf("0 人工服务\n");

	scanf("%d", &option1);
	switch (option1) {
		case 1:
			printf("话费、套餐使用情况、归属地及积分查询（自动播报话费余额）\n");
			printf("Please enter the number of service you want:\n");
			printf("1 话费查询\n");
			printf("2 套餐及流量上网查询\n");
			printf("3 归属地查询\n");
			printf("4 账单查询\n");
			printf("5 积分查询\n");
			printf("6 查询其他手机信息\n");
			scanf("%d", &option2);
			switch (option2) {
				case 1:
					printf("话费查询\n");
					break;
				case 2:
					printf("套餐及流量上网查询\n");
					break;
				case 3:
					printf("归属地查询\n");
					break;
				case 4:
					printf("账单查询\n");
					break;
				case 5:
					printf("积分查询\n");
					break;
				case 6:
					printf("查询其他手机信息\n");
					break;
			}
			break;
		case 2:
			printf("最新优惠活动\n");
			break;
		case 3:
			printf("停复机、手机上网及密码服务\n");
			printf("Please enter the number of service you want:\n");
			printf("1 停复机\n");
			printf("2 手机上网流量查询\n");
			printf("3 手机上网套餐办理\n");
			printf("4 密码修改\n");
			printf("5 密码重置\n");
			printf("6 他机办理\n");
			scanf("%d", &option2);
			switch (option2) {
				case 1:
					printf("停复机\n");
					break;
				case 2:
					printf("手机上网流量查询\n");
					break;
				case 3:
					printf("手机上网套餐办理\n");
					break;
				case 4:
					printf("密码修改\n");
					break;
				case 5:
					printf("密码重置\n");
					break;
				case 6:
					printf("他机办理\n");
					break;
			}
			break;
		case 4:
			printf("增值业务查询与退订\n");
			break;
		case 5:
			printf("无限宽带、家庭业务\n");
			printf("Please enter the number of service you want:\n");
			printf("1 无限宽带\n");
			printf("2 家庭业务\n");
			scanf("%d", &option2);
			switch (option2) {
				case 1:
					printf("无限宽带\n");
					break;
				case 2:
					printf("家庭业务\n");
					break;
			}
			break;
		case 6:
			printf("集团业务\n");
			printf("Please enter the number of service you want:\n");
			printf("1 话费、套餐等信息查询\n");
			printf("2 故障申告\n");
			printf("3 业务咨询和办理\n");
			scanf("%d", &option2);
			switch (option2) {
				case 1:
					printf("话费、套餐等信息查询\n");
					break;
				case 2:
					printf("故障申告\n");
					break;
				case 3:
					printf("业务咨询和办理\n");
					break;
			}
			break;
		case 0:
			printf("人工服务\n");
			break;
		default:
			printf("No service.");
	}
	return 0;
}
