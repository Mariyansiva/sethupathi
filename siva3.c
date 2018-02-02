#include <stdio.h>
int main()
{
    char x;
    printf(" enter the value");
    scanf("%s",&x);
switch(x)
{
case 'a':
case 'e':
case 'i':
case 'o':
case 'u':
{
printf("\n it is  vowel:");
break;
}
default:
{
printf("\n it is not vowel");
break;
}
}
}
