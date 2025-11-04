#include<stdio.h>
struct Student 
{
char name[50]; 
int marks;
};

int main() 
{ 
int n,i;
// Get the number of students
 printf("Enter the number of students: ");
 scanf("%d", &n);
// Declare an array of structures to store student information 
struct Student s[n];
// Input information for each student 
for (i=0;i<n;i++) {
printf("Enter the name of student %d: ",i+1); 
scanf("%s", s[i].name);
printf("Enter the marks for %s: ", s[i].name); 
scanf("%d", &s[i].marks);
}
// Calculate total and average marks 
int total = 0;
for (i = 0; i < n; i++)
 { total += s[i].marks;
}
float average = (float)total / n;
// Display the total and average marks 
printf("\nTotal marks: %d\n", total);
 printf("Average marks: %.2f\n", average);
  return 0;
}

