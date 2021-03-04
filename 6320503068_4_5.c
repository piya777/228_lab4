#include<stdio.h>
#include<string.h>
#include<ctype.h>
    void main(){
        int n,i,j,cup[4]={1},token;
        char word[50];
        scanf("%d",&n);
        if(n>0&&n<100){
            for( i=0 ; i<n ; i++ ){
                scanf("%s",word);
                if(strlen(word)<=50){
                    for( j=0 ; j<strlen(word) ; j++ ){
                        if(word[j]=='A'){
                            token=cup[2];
                            cup[2]=cup[1];
                            cup[1]=token;
                        }
                        else if(word[j]=='B'){
                            token=cup[4];
                            cup[4]=cup[1];
                            cup[1]=token;
                        }
                        else if(word[j]=='C'){
                            token=cup[3];
                            cup[3]=cup[1];
                            cup[1]=token;
                            token=cup[2];
                            cup[2]=cup[4];
                            cup[4]=token;
                        }
                        else if(word[j]=='D'){
                            token=cup[2];
                            cup[2]=cup[1];
                            cup[1]=token;
                            token=cup[3];
                            cup[3]=cup[4];
                            cup[4]=token;
                        }
                        else if(word[j]=='E'){
                            token=cup[4];
                            cup[4]=cup[1];
                            cup[1]=token;
                            token=cup[2];
                            cup[2]=cup[3];
                            cup[3]=token;
                        }
                    }
                    for( j=0 ; j<4 ; j++ ){
                        if(cup[j]==1){
                            printf("%d\n",j+1);
                        }
                    }
                }

            }

        }
    }
