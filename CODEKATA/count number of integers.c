#include <stdio.h>
int main(void) {
	int n,count=0;
	scanf("%d",&n);
	while(n>0)
	{
		count++;
		n=n/10;
	}
	printf("%d",count);
	return 0;
}
