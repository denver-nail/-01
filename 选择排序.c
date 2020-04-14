#include<stdio.h>
int main ()
{
	void sort(int arr [],int n);
	int a[10];
	int i;
	printf("请输入十个整数：\n"); 
	for(i=0;i<10;i++)
	 scanf("%d",&a[i]);
	printf("\n");
	
	sort (a,10);
	
	printf("从小到大的顺序为：\n");
	   for(i=0;i<10;i++)
	    printf("%d\t",a[i]);
	    
	printf("\n");
	return 0;
}

//选择排序

void sort(int arr [],int n)
{
	int i,j,k,t;
	for (i=0;i<n-1;i++)
	{
	
	k=i;
	for(j=i+1;j<n;j++)
	if (arr[j]<arr[k])
	k=j;
	if(k!=i)
	{
	
	t=arr[k];
	arr[k]=arr[i];
	arr[i]=t;
   }
		

   }
 } 
 
