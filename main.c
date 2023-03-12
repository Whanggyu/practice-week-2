#include <stdio.h>

int devide(int x, int y) {
	if(y == 0) {
		printf("0으로는 나눌 수 없습니다.");
		return 0;
	}
	return x / y;
}
