#include<stdio.h>
int main()
{
void hanoi(int n,char one,char two,char three);
int m;
printf("����������������\n");
scanf("%d",&m);
printf("�ƶ�%d�����ӵĲ������£�\n",m);
hanoi(m,'A','B','C');
return 0;	
}
 
 void hanoi(int n,char one,char two,char three)//����hanoi����
 //��n���̴�one������two�����Ƶ�three��
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
 void move(char x,char y)//����move����
 //��һ�����Ӵ�x���Ƶ�y�� 
 {
 	printf("%c-->%c\n",x,y);
 	
	  
  } 
 
