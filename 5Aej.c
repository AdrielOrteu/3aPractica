#include <stdio.h>

int main(){
	short a[3];

	a[0] = 1;
	a[1] = 2;
	a[2] = 3;

	for (int i=0; i<3; i++){
		printf("%d ", a[i]);
	}
	printf("\n");

	return 0;
}
