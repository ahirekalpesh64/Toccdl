#include<stdio.h>
#include<string.h>

int main()
{
char str[100],st[100];

int top=-1;
int i=0,len;

printf("Enter the string:");
scanf("%s",str);

len = strlen(str);

while(i<len && str[i]=='a')
{

st[++top]='a';
i++;
}

while(i<len && str[i]=='b')
{
if(top==-1)
{
printf("string Rejected\n");

return 0;
}
top--;
i++;

}

if(i==len && top ==-1)
{
printf("string Accepeted\n");

}
else
{
printf("string REjected\n");

}
return 0;
}
