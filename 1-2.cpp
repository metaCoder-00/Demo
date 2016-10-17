/*输入一个三位数然后逆向输出*/
#include<IOSTREAM>
using namespace std;
int main()
{
   int num1,num2;
   int a,b,c;
   cout<<"一个三位数：";
   cin>>num1;
   a=num1/100;
   b=num1/10%10;
   c=num1%10;
   num2=a+b*10+c*100;
   cout<<"转化后的数字为："<<num2<<endl;
   return 0;
}