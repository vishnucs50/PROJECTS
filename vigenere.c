#include<cs50.h>
#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(int argc, string argv[]){

    string v = argv[1];
    int i = 0;
    while(i < strlen(v))
    {
        if(!isalpha(v[i]))
        {
            // printf("wrong input. Exiting\n");
            exit(0);
        }
        i++;
    }
    // eprintf("good input\n");
    string msg= get_string("Enter Message: ");
    printf("ciphertext: ");
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
    int j = 0;
    for(i=0; i<strlen(msg);i++){
        if(isalpha(msg[i])){
            int counter= j%strlen(v); //choose appropriate value from the key
            if(isupper(msg[i])){
                char c = msg[i]+((int)(toupper(v[counter]))-65);
                printf("%c",c);
            }else if(islower(msg[i])){
                char c = msg[i]+((int)(tolower(v[counter]))-97);
                printf("%c",c);
            }
            j++;
        }else{
            printf("%c",msg[i]);
        }

    }printf("\n");


}
