#include<stdio.h>
int main(){
        int i,j,k,a,b;
        printf("Enter pattern initials : ");
        scanf("%d",&i);
        for(a=1;a<i*2;a++){
            for(b=1;b<2*i;b++){
                if(a<=i && b<=i){
                    j=a-1;
                    k=b-1;
                    if(j<=k){
                        printf("%d ",i-j);
                    }
                    else{
                        printf("%d ",i-k);
                    }
                }
                else if(a<=i && !(b<=i)){
                    j=a-1;
                    k=(2*i-1)-b;
                    if(j<=k){
                        printf("%d ",i-j);
                    }
                    else{
                        printf("%d ",i-k);
                    }
                }
                else if(b<=i && !(a<=i)){
                   k=b-1;
                    j=(2*i-1)-a;
                    if(j<=k){
                        printf("%d ",i-j);
                    }
                    else{
                        printf("%d ",i-k);
                    }
                }
                else if(!(a<=i) && !(b<=i)){
                    j=(2*i-1)-a;
                    k=(2*i-1)-b;
                    if(j<=k){
                        printf("%d ",i-j);
                    }
                    else{
                        printf("%d ",i-k);
                    }
                }

            }
            printf("\n");
        }
    return 0;
}
