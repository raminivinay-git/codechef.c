#include <stdio.h>

int main() {
	int n,a,m,b;
	scanf("%d%d%d%d",&n,&a,&m,&b);
	
	int bought=n*a;
	int sell=m*b;
	
	printf("%d",sell - bought);

}
