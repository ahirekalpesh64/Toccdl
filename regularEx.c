#include<stdio.h>
#include<string.h>

int main()
{

char str[100];int i,len;
printf("Enter the binary string:");
scanf("%99s",str);

len=strlen(str);

if(len == 0)
{
printf("string Rejected\n");
return 0;
}

for (i=0;i<len;i++)
{
if (str[i]!='0' && str[i]!='1')
{
printf("Invalid input Enter Only 0 and 1\n");
return 0;
}
}



if(str[0]=='0' && str[len-1]=='1')
  printf("String Accepted\n");
  else
  printf("String Rejected\n");
  }
