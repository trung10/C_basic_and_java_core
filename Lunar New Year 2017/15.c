#include <stdio.h>

int Fibonacci(int n){
	if(n <= 0)
		return 0;
	if(n == 1 || n == 2)
		return 1;
	if(n > 2)
		return Fibonacci(n -1) + Fibonacci(n - 2);
}
void main(){
    printf("%d", Fibonacci(8));
}
