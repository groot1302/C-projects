#include <stdio.h>

int main()
{
int a, b, lcm;
printf("\nEnter two numbers: ");
scanf("%d %d", &a, &b);

lcm = (a > b) ? a : b;

while(1)
{
if( lcm % a == 0 && lcm % b == 0 )
{
printf("\nLCM of %d and %d is %d\n", a, b,lcm);
break;
}
++lcm;
}
return 0;
}

