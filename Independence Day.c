#include <stdio.h>

int main() {
	int x;
	scanf("%d",&x);
	if(x<15){
	    printf("%d",x=15-x);
	}
	else if(x==15){
	    printf("0");
	}
	else{
	    printf("-1");
	}
	return 0;

}

