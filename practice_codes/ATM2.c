#include <stdio.h>

int main(void) {
	// your code goes here
	int t,n,k,i;
	scanf("%d",&t);
	while(t--){
	    scanf("%d%d",&n,&k);
	    int a[n];
	    for(i=0;i<n;i++)
	    scanf("%d",&a[i]);
	    for(i=0;i<n;i++)
	    {
	        if(a[i]<=k){
	            k=k-a[i];
	            printf("1");
	        }
	        else
	        printf("0");
	    }
	    printf("\n");
	}
	return 0;
}


