#include<stdio.h>
#include<string.h>
    void main(){
        char word[200],i;
        gets(word);
            for( i=0 ; i<strlen(word) ; i++ ){
                if(word[i+1]!=word[i]){
                    printf("%c",word[i]);
                }
            }
    }
