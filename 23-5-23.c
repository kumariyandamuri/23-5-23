/PROGRAM TO FIND THE BABY AGE,SCHOOLING AND ADULT AGE//
#include<stdio.h>
#include<conio.h>
main()
{
int age,count=0,count_babyage=0,count_schoolingage=0,count_adultage=0;
while(count<20)
{
printf("Enter age %d:",count+1);
scanf("%d",&age);
if(age>=0&&age<=5)
count_babyage++;
else if(age>=6&&age<=17)
count_schoolingage++;
else
count_adultage++;
count++;
}
printf("Baby age:%d\n",count_babyage);
printf("Schooling age:%d\n",count_schoolingage);
printf("Adult age:%d\n",count_adultage);
return 0;
}
