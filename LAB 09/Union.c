#include <stdio.h>
union student
{
int roll;
float marks;
char grade;
};
int main()
{
union student s;
s.roll = 91;
printf("Roll Number=%d\n",s.roll);
s.marks = 85.5;
printf("Marks=%.2f\n",s.marks);
s.grade = 'B';
printf("Section=%c\n",s.grade);
return 0;
}
