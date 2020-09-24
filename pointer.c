#include<stdio.h>
void main() {
	int cnt = 22;
	int *pi = &cnt;
	printf("cnt=%d\n", cnt);
	printf("&cnt=%p\n", &cnt);
	printf("*pi=%d\n", *pi);
	printf("pi=%p\n", pi);
}
