#include<stdio.h>
#include<cs50.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

int main(int argc, string argv[])
{
    int intedString = 0;
    bool weGood = false;
 
    do 
    {
        if(argc != 2)
        {
            printf("The args, bruh. The args.\n");
            return 1;
        }
        else
        {
            intedString = atoi(argv[1]);
            weGood = true;
        }
    }
    
    while(weGood == false);
    

    string input = GetString();
    char output[strlen(input) + 1];
    
    
    for(int i = 0, outlen = strlen(input); i < outlen; i++)
    {
        if (islower(input[i]) && isalpha(input[i]))
        {
            output[i] = ((((input[i] - 97) + intedString) % 26) + 97);
        }
        else if (isupper(input[i]) && isalpha(input[i]))
        {
            output[i] = ((((input[i] - 65) + intedString) % 26) + 65);
        }
        else 
        {
            output[i] = input[i];
        }
    } 
    printf("%s\n", output);
}
