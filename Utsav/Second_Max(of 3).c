//to find second max number of 3
#include <stdio.h>

int main(void) 
{
	
	int n,a,b,c;
	scanf("%d", &n);//no. of times you want to run loop(entries)
	for(int i=0; i<n; i++)
	{
	    scanf("%d %d %d", &a, &b, &c);
	    int max;
	    
	    if (a >= b && a >= c) 
        //printf("%d\n", a); 
        {
            if(b>c)
            printf("%d\n", b);
            
            else
            printf("%d\n", c);
        }
  
        if (b >= a && b >= c) 
        //printf("%d\n", b);
        {
            if(a>c)
            printf("%d\n", a);
            
            else
            printf("%d\n", c);
        }
  
  
        if (c >= a && c >= b) 
        //printf("%d\n", c);
        {
            if(b>a)
            printf("%d\n", b);
            
            else
            printf("%d\n", a);
        }
  
	    
	}
	return 0;
}
