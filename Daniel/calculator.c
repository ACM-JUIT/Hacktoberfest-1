
#include <stdio.h>
#include <math.h>
int main()
{   printf("NOT SO MODERN CALCULATOR\nENTER A REAL NUMBER FOLLOWED BY SENSIBLE OPERATORS TO BE CALCULATED FROM LEFT TO RIGHT\nPRESS ENTER TO DISPLAY RESULT\n");;

    double enter,result;char c;
    scanf("%lf",&result);
    do{
        c;scanf("%c",&c);
    switch(c){
        case '+':scanf("%lf",&enter);
        result+=enter;continue;
        case '-':scanf("%lf",&enter);
        result-=enter;continue;
        case '/':scanf("%lf",&enter);
        result/=enter;continue;
        case '*':scanf("%lf",&enter);
        result*=enter;continue;
        default:c==NULL;printf("%lg",result);break;
        }break;
    }while(c!=NULL);
    return 0;
}
