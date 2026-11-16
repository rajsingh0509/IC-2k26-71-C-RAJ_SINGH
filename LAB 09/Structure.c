#include <stdio.h>
struct student
{
int roll;
char name[20];
float marks;
};
int main()
{
struct student s;
printf("Enter Roll Number: ");
scanf("%d", &s.roll);
printf("Enter Name: ");
scanf("%19s", s.name);
printf("Enter Marks: ");
scanf("%f", &s.marks);
printf("\nStudent Details\n");
printf("Roll Number = %d\n", s.roll);
printf("Name = %s\n", s.name);
printf("Marks = %.2f\n", s.marks);
return 0;
}
