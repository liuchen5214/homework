#include<iostream.h>
#include<math.h>
#include<iomanip.h>
void main()
{
float a,b,c,s,q;
cout<<"请输入三角形的三边"<<endl;
cin>>a>>b>>c;
s=0.5*(a+b+c);
q=sqrt(s*(s-a)*(s-b)*(s-c));
cout<<s<<endl;
}
