#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int
main() {
	int i, k;
	char A[1000];
	printf("Input A[%d]=", i);
	while (A[i] != '\n') {
		fgets(A, 1000, stdin);
	};
	int k = A[0];
	for (i = 0; i < 1000; i++); {
		if (A[i] > k) {
			k = i;
		};
	};
	printf("the max number is %d", k);
	return 0;
};