#include <stdio.h>

int main()
{
    printf("Pleased as punch to know that you care about your happiness!!!\n Kindly rate the following quotients on a scale of 10 \n");
    int a,sum,score;
    sum=0;
    printf("Emotional happiness:");
    scanf("%d",&a);
    sum+=a;
    printf("Physical happiness ie how healthy you feel:");
    scanf("%d",&a);
    sum+=a;
    printf("Social happiness:");
    scanf("%d",&a);
    sum+=a;
    printf("Career happiness ie how satisfied you are with the career path you have chosen:");
    scanf("%d",&a);
    sum+=a;
    printf("Intellectual happiness ie how often you do things that boost your moral:");
    scanf("%d",&a);
    sum+=a;
    printf("Enviromental happiness:");
    scanf("%d",&a);
    sum+=a;
    printf("Spiritual happiness:");
    scanf("%d",&a);
    sum+=a;
    score=sum/7;
    if (score<7)
    printf("Your happiness quotient is %d \n This score represents below average happiness quotient\nBut don't be dejected.Always keep in mind that the most important thing is to enjoy your life-to be happy.It is all that matters.\n Happiness comes from within,don't seek for it,radiate it.\n Good day\nKEEP SMILING :)",score);
    else
    printf("Your happiness quotient is %d \nThis score represents above average happiness quotient\nCongratulations for living and not just existing.\n Being a happy person,it is now your duty to make others happy.\n Good day\n KEEP SMILING :) ",score);
    

    return 0;
}
