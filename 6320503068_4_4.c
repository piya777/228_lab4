#include<stdio.h>
#include<string.h>
#include<ctype.h>
    void main(){
        char word[1000],i;
        scanf("%s",word);
        if(strlen(word)<=1000){
            for( i=0 ; i<strlen(word) ; i++ ){
                if(i==0){
                    printf("%c",toupper(word[0]));
                }
                if(strcmp(word[i]," ")){
                    printf("%c",toupper(word[i+1]));
                }
            }
        }

    }
