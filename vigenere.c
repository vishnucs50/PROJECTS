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
                //int k=  ((int)msg[i]+((int)(toupper(v[counter]))-65))%90-1;
                int c = msg[i]+((int)(toupper(v[counter]))-65); //getting the cipher characters one by one
                int a = c%65;
                // int a;
                if(a>25){
                    a=c%90;
                    printf("%c",upper[a-1]);
                }
                else{
                    printf("%c",upper[a]);
                }
            }
            else if(islower(msg[i])){
                int sample = (int)(tolower(v[counter]));
                int c = msg[i];
                c = c +(sample-97);
                int a = c%97;
                // int a;
                if(a>25){
                    a=c%122;
                    printf("%c",lower[a-1]);
                }
                else{
                    printf("%c",lower[a]);
                }

            }
            j++;
        }else{
            printf("%c",msg[i]); //if the input character is not an alphabet, just print it as is.
        }

    }printf("\n");


}
