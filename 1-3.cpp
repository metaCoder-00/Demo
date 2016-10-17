/*输入正整数a、b，求两个数的最大公约数 */
#include<IOSTREAM>
using namespace std;
int main()
{
      int a,b,temp,r;
	  cout<<"输入两个正整数a,b:";
	  cin>>a>>b;
      r=a%b;
	  temp=b;
	  while(r!=0)
	  {
	        a=b;
			b=r;
			r=a%b;
	  }
	  cout<<"最大公约数:"<<b<<endl;
	  return 0;
}