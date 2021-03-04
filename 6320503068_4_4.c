#include<stdio.h>
#include<string.h>
    void main(){
        char word[1000] ,*use ,no[11][5]={"i","of","the","on","at","for","with","a","an","in","and"};
        int i,j,check=0;
        gets(word);
        use=strtok(word," ");
        while(use!=NULL)
        {
            for(i=0;i<11;i++){
                if(strcmp(use,no[i])){
                    check++;
                }
            }
            if(j==0){
                printf("%c",toupper(use[0]));
            }
            if(check==11){
                printf("%c",toupper(use[0]));
            }
            use=strtok(NULL," ");
            j++,check=0;
        }

    }
