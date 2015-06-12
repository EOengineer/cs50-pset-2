#include<stdio.h>
#include<cs50.h>
#include<string.h>
#include<ctype.h>

// Prototypes declared here
int badstring();
string encrypt();

int main(int argc, string argv[])
{
    
    if ( argc != 2 || badstring(argv[1]) )
    {
        // Bail out
        printf("try something like ./vigenere bacon\n");
        return 1;
    }
    else
    {   
       // set key and get input
       string key = argv[1];
       string message = GetString();
       
       string output = encrypt(key,message);
       printf("%s\n",output);
       return 0;
    }
}



int badstring(string key)
{
    int reject = 0;
    
    for( int i = 0, j = strlen(key); i < j; i++ )
      {
        if ( !isalpha(key[i]) )
        {
            reject = 1;
        }
      }
      return reject;
}

string encrypt(string key, string message)
{
    char* converted = message;
    int keylen = strlen(key);
    
    for( int i = 0, j = 0, end = strlen(message); i < end; i++)
       {
            if (isalpha(message[i]))
            {
                 char input = (isupper(message[i])) ? 'A' : 'a';
                 char k = (isupper(key[j % keylen])) ? 'A' : 'a';
                 converted[i] = ((message[i] - input + (key[j % keylen] - k)) % 26) + input;
                 j++;  
            }
            else 
            {
               converted[i] = message[i];
            }
            
       }
       return converted;
}

