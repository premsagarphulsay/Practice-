#include <stdio.h>

int main() {
	// your code goes here
int test,i,X;
scanf("%d",&test);
for(i=0;i<test;i++)
{
    scanf("%d",&X);
    if((10-X)>=3)
        printf("yes\n");
    else
        printf("no\n");
}
return 0;
}

