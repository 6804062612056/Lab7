#include <stdio.h>

long convert(long h, long m, long s); 

int main() {
	long hour,minute,second;
	scanf("%ld %ld %ld",&hour,&minute,&second);
	printf("%ld",convert(hour,minute,second));
}

long convert(long h, long m, long s) {
	s += h*3600 + m*60;
	return s;
}
