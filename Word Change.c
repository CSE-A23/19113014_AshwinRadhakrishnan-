#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
  int n,a,i;
  char m[100];
  printf("Enter the character:");
  scanf("%s",m);
  n=strlen(m);
  if(n%2!=0)
  {
    a=n-1;
    m[a]='O';
    m[a-1]='O';
  }
  for(i=0;i<n;i++)
  {
    if(m[i]=='a')
    m[i]='u';
    if(m[i]=='i')
    m[i]='e';
  }
   printf("After changing %s",m);
   getch();
}
