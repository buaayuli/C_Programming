# include <stdio.h>
# include <iostream>
using namespace std;

int main() {
	int line_num = 10;

	scanf("%d", &line_num);


	while (line_num != 0) {


		for (int row = 0; row < line_num; row ++) {
			//print the spaces in the left
			for (int i = 0; i < line_num - row - 1; i ++)
				printf(" ");
			// print the letters in the middle
			for (int i = 0; i < row + 1; i ++)
				printf("%c", 'A' + i);
			for (int i = row - 1; i >= 0; i --)
				printf("%c", 'A' + i);
			printf("\n");
		}

		scanf("%d", &line_num);

	}
	return 0;
}