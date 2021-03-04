#include<stdio.h>
#include<string.h>
    void main(){
        char word[200],i;
        scanf("%s",word);
        if(strlen(word)<=200&&strlen(word)>0){
            for( i=0 ; i<strlen(word) ; i++ ){
                if(word[i+1]!=word[i]){
                    printf("%c",word[i]);
                }
            }
        }

    }
