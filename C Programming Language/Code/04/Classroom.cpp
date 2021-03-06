#include <stdio.h>
#include <iostream>
using namespace std;

#if 1 ////////////// 简单暴力枚举 //////////////////////

int main () {
	int rooms[8];
	int classes[4];
	printf("Input capacities of the 8 rooms (separated by space): ");
	scanf("%d %d %d %d %d %d %d %d", &rooms[0], &rooms[1], &rooms[2], &rooms[3],
	      &rooms[4], &rooms[5], &rooms[6], &rooms[7]);
	printf("Input numbers of students in the 4 classes (separated by space): ");
	scanf("%d %d %d %d", &classes[0], &classes[1], &classes[2], &classes[3]);


	int solution = 0;
	for (int i = 0; i < 8; i ++)  // assignment of the 1st class
		for (int j = 0; j < 8; j ++)
			for (int k = 0; k < 8; k ++)
				for (int l = 0; l < 8; l ++)
					if (classes[0] <= rooms[i] && classes[1] <= rooms[j] && classes[2] <= rooms[k] && classes[3] <= rooms[l] && (i != j)
					        && k != i && k != j && l != i && l != j && l != k) {
						printf("Feasible assignment for the 4 classes: %d %d %d %d\n", i, j, k, l);
						solution++;
					}

	if (solution == 0)
		printf("No feasible assignment!\n");
	else
		printf("Number of solutions =%d\n", solution);

	return 0;
}

#endif


#if 0 //////////////////// 优化暴力枚举///////////////////////////////

int main () {
	int rooms[8];
	int classes[4];
	printf("Input capacities of the 8 rooms (separated by space): ");
	scanf("%d %d %d %d %d %d %d %d", &rooms[0], &rooms[1], &rooms[2], &rooms[3],
	      &rooms[4], &rooms[5], &rooms[6], &rooms[7]);
	printf("Input numbers of students in the 4 classes (separated by space): ");
	scanf("%d %d %d %d", &classes[0], &classes[1], &classes[2], &classes[3]);

	int solution = 0;
	for (int i = 0; i < 8; i ++) { // assignment of the 1st class
		if (classes[0] > rooms[i])
			continue; // cannot fit the room capacity
		for (int j = 0; j < 8; j ++) {
			if (classes[1] > rooms[j])
				continue; // cannot fit the room capacity
			if (i == j)
				continue; // cannot assign a room to multi-classes
			for (int k = 0; k < 8; k ++) {
				if (classes[2] > rooms[k])
					continue; // cannot fit the room capacity
				if (k == i || k == j)
					continue; // cannot assign a room to multi-classes
				for (int l = 0; l < 8; l ++) {
					if (classes[3] > rooms[l])
						continue; // cannot fit the room capacity
					if (l == i || l == j || l == k)
						continue; // cannot assign a room to multi-classes
					// print a feasible assignment
					printf("Feasible assignment for the 4 classes: %d %d %d %d\n", i, j, k, l);
					solution++;
				}
			}
		}
	}
	if (solution == 0)
		printf("1No feasible assignment!\n");
	else
		printf("1number of solutions =%d\n", solution);


	return 0;
}

#endif