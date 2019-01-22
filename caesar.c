#include<locale.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<cs50.h>
#include<ctype.h>

int main (int argc, string argv[]){


    char upper[26];
    char lower[26];
    int z=0;
    //Index alphabets from A to Z
    for( int l=65;l<=90;l++){
        upper[z]=(char)l; //insert appropriate aplhabets into the array using ascii values.
        z++;
    }
    z=0;
    //Index alphabets from a to z
    for (int l =97; l<=122;l++){
        lower[z]=(char)l;
        z++;
    }
    //convert string argument into integer. KEY
    int i = atoi(argv[1]);
    string s = get_string("Enter Message: ");
    printf("ciphertext:");

    for(int j=0; j<strlen(s);j++){
        //check if input is alphabet
        if(isalpha(s[j])){
            //check if input is upper case
            if(isupper(s[j])){
                int n= ((int)s[j]-((int)upper[0])+i)%26;
                printf("%c",upper[n]);
            }
            //check if input is lower case
            if(islower(s[j])){
                int n= ((int)s[j]-((int)lower[0])+i)%26;
                printf("%c",lower[n]);
            }
        }else{
            printf("%c",s[j]);
        }
    }
    printf("\n");

}