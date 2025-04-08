#include <stdio.h>

int main() {
	int test,cost,size,i;
    scanf("%d",&test);
    for(i=0;i<test;i++){
        scanf("%d%d",&size,&cost);
        if(size%6==0)
            printf("%d\n",(size/6)*cost);
        else
            printf("%d\n",((size/6)+1)*cost);
    }
}
