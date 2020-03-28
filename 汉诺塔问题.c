#include<stdio.h>
int main()
{
void hanoi(int n,char one,char two,char three);
int m;
printf("请输入盘子总数：\n");
scanf("%d",&m);
printf("移动%d个盘子的步骤如下：\n",m);
hanoi(m,'A','B','C');
return 0;	
}
 
 void hanoi(int n,char one,char two,char three)//定义hanoi函数
 //将n个盘从one座借助two座，移到three座
 {
 void move (char x,char y);
 if(n==1)
 move(one,three);
 else
 {
 	hanoi(n-1,one,three,two);
 	move(one,three);
 	hanoi(n-1,two,one,three);
 	
 	
 }
 
 
 } 
 void move(char x,char y)//定义move函数
 //将一个盘子从x座移到y座 
 {
 	printf("%c-->%c\n",x,y);
 	
	  
  } 
 
