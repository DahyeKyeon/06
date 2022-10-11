#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int factorial(int input);
int combination(int n, int r);

int main(){
	int input[2];
	int i;
	printf("n:");
	scanf("%d", &input[0]);
	printf("r:");
	scanf("%d", &input[1]);
	printf("%d\n", combination(input[0], input[1]));
	return 0;
}

int combination(int n, int r){
	return factorial(n)/factorial(n-r)/factorial(r);
}

int factorial(int input){
	int res = 1;
	int number;
	for(number = 1; number <= input ; number++)
	res = res * number;
	return res;
}
