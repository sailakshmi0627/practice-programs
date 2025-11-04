#include<stdio.h>
struct student
{
	char name[10];
	int marks;
 } ;
 int main()
 {
 	int n,i;
 	printf("enter the number of student:");
 	scanf("%d",&n);
 	struct student s[n];
 	for(i=0;i<n;i++)
 	{
 		printf("enter the name of student %d:",i+1);
 		scanf("%s",s[i].name);
 		printf("enter the marks of %s:",s[i].name);
 		scanf("%d",&s[i].marks);
	 }
	 int total=0;
	 for(i=0;i<n;i++)
	 {
	 	total=s[i].marks;
	 }
	 float average=(float)total/n;
	 printf("\ntotal marks:%d\n",total);
	 printf("average marks:%2.f\n",average);
	 return 0;
 }
