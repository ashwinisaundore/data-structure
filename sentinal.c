#include<stdio.h>
void sentinal(int a[100],int n,int key)
{
 int last=a[n-1];
 int i=0;
a[n-1]=key;
while(a[i]!=key)
i++;
if(i<n-1||key==last)
printf("number is found pos=%d",i);
else
printf("not found");
}
int main()
{
int a[100],i,n,key;
printf("enter limit");
scanf("%d",&n);
printf("enter n numbers");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("enter number to search");
scanf("%d",&key);
sentinal(a,n,key);
}
