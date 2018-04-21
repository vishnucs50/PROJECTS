#include<stdio.h>
#include<cs50.h>
#include<string.h>
#include<ctype.h>
int main(int argc, string argv[]){


    if(argc!=2){
        printf("Enter 2 arguments \n");
        return 0;
    }
    int key=atoi(argv[1]);
    if(key<0){
        printf("Enter valid key value \n ");
        return 0;
    }
    string msg=get_string("Enter your msg: ");
    for (int i=0, n=strlen(msg); i<n;i++){
        if(isupper(msg[i])){
            printf("%c",(msg[i]+key-65)%26 + 65);
        }
        else if(islower(msg[i])){
            printf("%c",(msg[i]+key-97)%26+97);
        }
        else{
            printf("%c",msg[i]);
        }


    }
    printf("\n");

}