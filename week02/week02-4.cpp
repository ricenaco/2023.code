#include <iostream>
int main()
{
   long long int a,b;
   while(std::cin>>a>>b)
   {
       long long int ans=b-a;
       if(ans<0) ans=a-b;
       printf("%lld\n",ans);
   }
}
