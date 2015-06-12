#include<cs50.h>
#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(int argc, char* argv[])
{
    string name;
    
    name = GetString();
  
    
    if (name != NULL)
    {
        for(int i = 0, n = strlen(name); i < n; i++)
        {
            int ascii = (int) name[i];
        
            if ( i == 0)
            {
                printf("%c", toupper(name[i]));
            }
            
            if ( ascii == 32 )
            {
                printf("%c", toupper(name[i + 1]));
            }
        }
        printf("\n");
    }
    
}
