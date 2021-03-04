#include<stdio.h>

    void main(){

        int n,g,s,b,i,max=0,min,best,worst;
        scanf("%d",&n);
        if(n>3&&n<=1000){
            for( i=0 ; i<n ; i++ ){
                scanf("%d %d %d",&g,&s,&b);
                if(i==0){
                    min=(g*4)+(s*2)+(b*1);
                }
                if(max<(g*4)+(s*2)+(b*1)){
                    max=(g*4)+(s*2)+(b*1);
                    best=i+1;
                }
                if(min>(g*4)+(s*2)+(b*1)){
                    min=(g*4)+(s*2)+(b*1);
                    worst=i+1;
                }
            }
            printf("%d %d",best,worst);
        }

    }
