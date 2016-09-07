#include <stdio.h>

long fats[20];

long fatorial(long n){
	long total = 1;
	int i = 1;
	while(i <= n){
		total = total * i;
		i++;
	}

	return total;
}

int main(){
	int counter = 0;
	long n;

	int x = 0;
	long result = 0;
	while(result < 100000){
		result = fatorial(x);
		fats[x] = result;
		x++;
	}

	scanf("%li", &n);
	int i = x - 1;

	while(n > 0){

		if(fats[i] <= n){
			n = n - fats[i];
			counter++;
		}else{
			i --;
		}
	}

	printf("%d\n", counter);
}