#include<stdio.h>
#include<string.h>
#include<ctype.h>
    void main(){
        int n,i,j;
        char word[50],cup[4]={"A"},token[50];
        scanf("%d",&n);
        if(n>0&&n<100){
            for( i=0 ; i<n ; i++ ){
                if(strlen(word)<=50){
                    scanf("%s",word);
                }
                for( j=0 ; j<strlen(word) ; j++ ){
                    if(strcmp(word[j],"A")){
                        strcpy(cup[2],token);
                        strcpy(cup[1],cup[2]);
                        strcpy(token,cup[1]);
                    }
                    else if(strcmp(word[j],"B")){
                        strcpy(cup[4],token);
                        strcpy(cup[1],cup[4]);
                        strcpy(token,cup[1]);
                    }
                    else if(strcmp(word[j],"C")){
                        strcpy(cup[3],token);
                        strcpy(cup[1],cup[3]);
                        strcpy(token,cup[1]);
                        strcpy(cup[4],token);
                        strcpy(cup[2],cup[4]);
                        strcpy(token,cup[2]);
                    }
                    else if(strcmp(word[j],"D")){
                        strcpy(cup[2],token);
                        strcpy(cup[1],cup[2]);
                        strcpy(token,cup[1]);
                        strcpy(cup[3],token);
                        strcpy(cup[1],cup[3]);
                        strcpy(token,cup[1]);
                    }
                    else if(strcmp(word[j],"D")){
                        strcpy(cup[4],token);
                        strcpy(cup[1],cup[4]);
                        strcpy(token,cup[1]);
                        strcpy(cup[3],token);
                        strcpy(cup[2],cup[3]);
                        strcpy(token,cup[2]);
                    }
                }
                for( j=0 ; j<4 ; j++ ){
                    if(strcmp(cup[j],"A")){
                        printf("%d",j+1);
                    }
                }
            }

        }
    }
