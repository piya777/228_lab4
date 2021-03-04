#include<stdio.h>
#include<string.h>
#include<ctype.h>
    void main(){
        char word[1000];
        char *use;
        int i=0,j,check=0;
        scanf("%[^\n]s",word);
        use=strtok(word," ");
        while(use!=NULL)
        {
            if(strcmp(use,"i")!=0&&strcmp(use,"of")!=0&&strcmp(use,"the")!=0&&strcmp(use,"on")!=0&&strcmp(use,"at")!=0
               &&strcmp(use,"for")!=0&&strcmp(use,"with")!=0&&strcmp(use,"a")!=0&&strcmp(use,"an")!=0&&strcmp(use,"in")!=0
               &&strcmp(use,"and")!=0){
                printf("%c",toupper(use[0]));
            }
            use=strtok(NULL," ");
            if(i==0){
                i++;
            }
        }

    }
