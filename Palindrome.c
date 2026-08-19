#include<stdio.h>
#include<string.h>

int main()
{
char tape[100];

int left,right;
int palindrome=1;

printf("Enter the String:-");
scanf("%99s",tape);

left=0;
right=strlen(tape)-1;

while(left < right)
{
if(tape[left]!=tape[right])
{
palindrome=0;
break;
}
left++;
right--;
}

if(palindrome)

printf("String Accepeted(Palindrome):-\n");

else
printf("String Rejected(NOt  a Palindrome):-\n");

return 0;
}
