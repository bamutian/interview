#include <stdio.h>
#include <windows.h>


main()
{
  
int  a[3][3],*p,i;
  
p=&a[0][0];
  
for(i=0;i<9;i++)
     
p[i]=i;
  
for(i=0;i<3;i++)
     
printf("%d ",a[1][i]);
}