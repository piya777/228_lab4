#include<stdio.h>
#include<string.h>
#include<ctype.h>
    void main(){
        int n,i,j,cup[4]={1,0,0,0},token;
        char word[50];
        scanf("%d",&n);
        if(n>0&&n<100){
            scanf("%s",word);
            if(strlen(word)<=50){
                for( i=0 ; i<n ; i++ ){
                    for( j=0 ; j<strlen(word) ; j++ ){
                        if(word[j]=='A'){
                            token=cup[2];
                            cup[2]=cup[1];
                            cup[1]=token;
                        }
                        if(word[j]=='B'){
                            token=cup[0];
                            cup[0]=cup[3];
                            cup[3]=token;
                        }
                        if(word[j]=='C'){
                            token=cup[0];
                            cup[0]=cup[2];
                            cup[2]=token;
                            token=cup[1];
                            cup[1]=cup[3];
                            cup[3]=token;
                        }
                        if(word[j]=='D'){
                            token=cup[0];
                            cup[0]=cup[1];
                            cup[1]=token;
                            token=cup[3];
                            cup[3]=cup[2];
                            cup[2]=token;
                        }
                        if(word[j]=='E'){
                            token=cup[2];
                            cup[2]=cup[1];
                            cup[1]=token;
                            token=cup[0];
                            cup[0]=cup[3];
                            cup[3]=token;
                        }
                    }
                }
            }
            for(i=0;i<4;i++){
                if(cup[i]==1){
                    printf("%d\n",i+1);
                }
            }
        }
    }
