#include<stdio.h>
#include<cs50.h>
#include<string.h>
#include<ctype.h>

int main(int argc, string argv[]){
    if(argc!=2){
        printf("please give only two commands");
        return 0;
    }
    int length= strlen(argv[1]);
    string code= get_string("Enter your message:");

    for (int i=0, j=0, result=0; i<strlen(code);i++){
        char letter= code[i];
        char key= argv[1][(j)%length];

        if(isupper(key)){
            key=key-65;
        }
        if(islower(key)){
            key=key-97;
        }
        if((islower(letter))){
            result=(letter+key-97)%26+97;
            j++;
        }
        if(isupper(letter)){
            result=(letter+key-65)%26+65;
            j++;
        }
        else{
            result=letter;

        }printf("%c",result);
    }printf("\n");
}