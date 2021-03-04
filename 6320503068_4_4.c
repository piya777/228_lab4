#include<stdio.h>
#include<string.h>
    void main(){
        char word[1000],no[11][5]={"i","of","the","on","at","for","with","a","an","in","and"};
        int i,check=0;
        scanf("%s",word);
        char *use=strtok(word," ");
        use=strtok(word," ");
        if(strlen(word)<=1000){
            while(use!=NULL){
                for(i=0;i<11;i++)
                    if(strcmp(use,no[i])){
                        check++;
                    }
                if(check==11)
                {
                    printf("%c",toupper(use[0]));
                }
                use=strtok(NULL," ");
                check=0;
            }
        }

    }
