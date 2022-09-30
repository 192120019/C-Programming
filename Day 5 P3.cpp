#include <stdio.h>
#include <stdlib.h> // For exit()
  
int main()
{
    FILE *fptr1, *fptr2;
    char filename[100], c;
  
    printf("Enter the filename to open for reading \n");
    scanf("%s", filename);
  
    // Open one file for reading
    fptr1 = fopen(filename, "r");
    if (fptr1 == NULL)
    {
        printf("Cannot open file %s \n", filename);
        exit(0);
    }
  
    printf("Enter the filename to open for writing \n");
    scanf("%s", filename);
  
    // Open another file for writing
    fptr2 = fopen(filename, "w");
    if (fptr2 == NULL)
    {
        printf("Cannot open file %s \n", filename);
        exit(0);
    }
  
    // Read contents from file
    c = fgetc(fptr1);
    while (c != EOF)
    {
        fputc(c, fptr2);
        c = f…
[9:29 AM, 9/30/2022] Madhu??: #include <stdio.h>

int main()
{
    char in_name[80];
    FILE *in_file;
    int ch;

    printf("Enter file name:\n");
    scanf("%s", in_name);

    in_file = fopen(in_name, "r");

    if (in_file == NULL)
    {
        printf("Can't open %s for reading.\n", in_name);
    }
    else
    {
        while ((ch = fgetc(in_file)) != EOF)
        {
            printf("%c", ch);
        }
        fclose(in_file);
    }
    return 0;
}
