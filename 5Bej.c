#include <stdio.h>

int main(){
	char a[3];

	a[0] = '1';
	a[1] = '2';
	a[2] = '3';

	for (int i=0; i<3; i++){
		printf("%c ", a[i]);
	}
	printf("\n");

	return 0;
}
