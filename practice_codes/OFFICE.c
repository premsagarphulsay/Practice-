#include <stdio.h>

int main() {
	int t,x,y,i,total;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
	    scanf("%d%d",&x,&y);
        total=(4*x)+y;
        printf("%d\n",total);
	}
	return 0;
}