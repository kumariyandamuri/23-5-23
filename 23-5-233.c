//PROGRAM TO FIND STRONG NUMBER OR NOT//
#include<stdio.h>
#include<conio.h>
main()
{
	int n,temp,r,sum=0,f,i;
	scanf("%d",&n);
	temp=n;
	while(n!=0)
	{
	r=n%10;
	f=1;
	for(i=1;i<=r;i++)
	f=f*i;
	sum=sum+f;
	n=n/10;
}
if(temp==sum)
printf("Strong number");
else
printf("Not a strong number");
}
