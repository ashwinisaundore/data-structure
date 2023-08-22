#include<stdio.h>
void accept(int a[],int n)
{
int i;
printf("enter the array elements");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
}
void disp(int a[],int n)
{
int i;
printf("the array elements");
for(i=0;i<n;i++)
printf("%d",a[i]);
}
int sentinel(int a[],int n)
{
int i=0,key;
printf("enter key");
scanf("%d",&key);
a[n]=key;
while(a[i]!=key)
{
i++;
}
if(i==n)
return -1;
else 
return i;
}
void main()
{
int a[50],i,n,pos;
printf("enter limit");
scanf("%d",&n);
accept(a,n);
pos=sentinel(a,n);
if(pos==-1)
printf("\n not found");
else
printf("\n found at position=%d",pos);
}


