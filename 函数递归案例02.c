#include<stdio.h>
int main()
{
int fac (int n);
int m,y;
printf("输入要求阶乘的数\n");
scanf("%d",&m);
y=fac(m);
printf("%d!=%d\n",m,y);
return 0;	
}

int fac(int n)
{
int f;
if(n<0)
printf("n<0错误\n");
else
if(n==0||n==1)
f=1;
else
f=fac(n-1)*n;
return (f);
}
