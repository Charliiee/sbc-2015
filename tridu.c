#include <stdio.h>

int main(){
	int a,b;

	scanf("%d %d", &a, &b);

	if(a == b){
		printf("%d\n", a);
		return 0;
	}

	int c;
	if(a > b)
		c = a;
	else
		c = b;

	printf("%d\n", c);
	return 0;
}