#include <stdio.h>

int minus(int x, int y) {
	return x - y;
}

int plus(int x, int y) {
return x + y;
}

int multiplication(int x, int y) {
	return x * y;
}

int devide(int x, int y) {
	if(y == 0) {
		printf("0으로는 나눌 수 없습니다.");
		return 0;
	}
	return x / y;
}
