#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int factorial2(int num) {
	//the maximum number this function can calculate is up to 12
	if (num == 0) {
		return (1);
	}
	if (num < 0 || num > 12) {
		return (0);
	}
	else {
		return (num * factorial2(num - 1));
	}
}


int main() {
	int n;
	printf("Note : You can't enter negative numbers and the maximum this program can calculate is 12!\n");
	printf("\n");
	printf("Enter the number : ");
	scanf("%d", &n);
	printf("The factorial of %d is %lu", n, factorial2(n));


	return 0;
}
