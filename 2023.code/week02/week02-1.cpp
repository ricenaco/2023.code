#include <stdio.h>
int main()
{
	long long int a,b;
	while(scanf("%d%d",&a,&b)==2)
	{
		long long int ans =b-a;
		if(ans<0) ans=a-b;
		//if(a>b) ans=a-b;
		//if(b>a) ans=b-a;
		printf("%lld\n",ans);
	}
}
