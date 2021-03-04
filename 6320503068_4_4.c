#include<stdio.h>
#include<string.h>
    void main(){
        char word[1000],check=0,i,*use,no[11][5]={"i","of","the","on","at","for","with","a","an","in","and"};
        scanf("%s",word);
        if(strlen(word)<=1000){
            use=strtok(word," ");
            while(use!=NULL){
                for( i=0 ; i<12 ; i++ ){
                    if(!strcmp(use,no[i])){
                        check++;
                    }
                    if(check==12)
                    {
                        printf("%c",toupper(use[0]));
                    }
                }
                use=strtok(NULL," ");
            }
        }

    }
