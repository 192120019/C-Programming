#include<stdio.h>
int main()
{
    char line[100];
    int vowels,consonant,digit,space;
    vowels = consonant =digit = space  = 0;
    printf("Enter the string: ");
    fgets(line,sizeof(line),stdin);
    for (int i = 0; line[i]!='\0' ; ++i)
    {
        
        
        if (line[i] == 'a' || line[i] == 'e' || line[i] == 'i' ||  line[i] == 'o' || line[i] == 'u')
        {
            ++vowels;
        }
        else if ((line[i] >= 'a' && line[i] <= 'z' ))
        {
            ++consonant;
        }
        else if(line[i] >= '0' && line[i] <= '9'){
            ++digit;
        }
        else if(line[i] == ' '){
            ++space;
        }
    }
    printf("vowels: %d", vowels);
    printf("\nconsonants: %d", consonant);
    printf("\ndigits: %d", digit);
    printf("\nwhite spaces: %d",space);
    return 0;    
}
