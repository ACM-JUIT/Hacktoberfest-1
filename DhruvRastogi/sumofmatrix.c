#include <stdio.h>

int main()
{  int a[3][3],i,j,b[3][3];
 for(i=0;i<3;i++)
 {for(j=0;j<3;j++)
    {  printf(" enter the value [%d] [%d]:",i,j);
      scanf(" %d",&a[i][j]);}
 }
  for(i=0;i<3;i++)
  {for(j=0;j<3;j++)
    {  printf(" %d",a[i][j]);
    if(j==2)
    printf("\n");
    
 }}
  for(i=0;i<3;i++)
 {for(j=0;j<3;j++)
    {  printf(" enter the value [%d] [%d]:",i,j);
      scanf(" %d",&b[i][j]);}
 }
  for(i=0;i<3;i++)
  {for(j=0;j<3;j++)
    {  printf(" %d",b[i][j]);
    if(j==2)
    printf("\n");
    
 }}
 for(i=0;i<3;i++)
 {for(j=0;j<3;j++)
 { printf("%d",a[i][j]+b[i][j]);
     if(j==2)
    printf("\n");
 }}

    return 0;
}
