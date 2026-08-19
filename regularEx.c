#include<stdio.h>
#include<string.h>

int main()
{
char re[20],str[20];
int i,accept = 0;

printf(" Enter the Regular Expression:");
scanf("%s",re);

printf("Enter Input String:");
scanf("%s",str);

if(strcmp(re,"0")==0)
{
if (strcmp(str,"0")==0)
accept = 1;
}
else if(strcmp(re,"1")==0)
{
if(strcmp(str,"1")==0)
accept = 1;
}
else if(strcmp(re,"0+1")==0)
{
if(strcmp(str,"0")==0 || strcmp(str,"1")==0)
accept = 1;
}
else if(strcmp(re,"01")==0)
{
if(strcmp(str,"0")==0 || strcmp(str,"1")==0)
accept = 1;
}
else if(strcmp(re,"0*")==0)
{
accept = 1;
for(i=0;str[i]!='\0';i++)
if(str[i]!='0')
accept = 0;
}
else if(strcmp(re,"1*")==0)
{
accept = 1;
for(i=0;str[i]!='\0';i++)
if(str[i]!='1')
accept = 0;
}
else
{
printf("REgular Expression Not Supporeted\n");
return 0;
}

printf("\n Equivalent DFA Is generated for:%s\n",re);

if(accept)
  printf("String Accpeted\n");
  else
  printf("String REjected\n");
  
  return 0;
  }


