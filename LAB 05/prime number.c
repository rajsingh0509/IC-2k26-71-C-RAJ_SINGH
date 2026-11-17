#include <stdio.h>
int main()
{
int n, j, k, flag, total = 0;
printf("Enter limit: ");
scanf("%d", &n);
for (j = 2; j <= n; j++)
{
flag = 0;
for (k = 2; k * k <= j; k++)
{
if (j % k == 0)
{
flag = 1;
break;
}
}

if (flag == 0)
{
total++;
}
}
printf("Total prime numbers = %d\n", total);
return 0;
}
