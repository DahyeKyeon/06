#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int sumTwo(int a, int b){
	return a+b;
}

int square(int n){
	return n*n;
}

int get_max(int x, int y){
	if(x>y)
	return x;
	else
	return y;
}
int main(){
	
	printf("%d\n", sumTwo(2,3));
	printf("%d\n", square(4));
	printf("%d\n", get_max(5,7));
	
	return;
}
