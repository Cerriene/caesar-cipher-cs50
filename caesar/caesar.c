#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <strings.h>
int main(int argc, string argv[])
{
    // testing each character is alphabet or not
    /*for(int i = 0; i<strlen(*argv)-1; i++)
    {

        if(isalpha(*argv[i])==true){
             printf("Usage: ./caeser key ");
             return 1;
        }
    }*/
        if(argc !=2 || argv[1] < 0 || (argv[1] == NULL ))
    {
        printf("Usage: ./caeser key ");
        return 1;
    }
    //get key value from argv
    int k = atoi(argv[1]);
    //request text to be encrypted
    string pt = get_string("plaintext:  "); //pt denotes plain text
    int n = strlen(pt);
    printf("ciphertext: ");
    // parse plain text
    for(int i = 0; i<n;i++)
    {
        //detect case and appropriately shift
        if(isupper(pt[i])){
            printf("%c", ((pt[i] - 'A' + k) % 26) + 'A');
        }
        else if(islower(pt[i]))
            printf("%c", ((pt[i] - 'a' + k) % 26) + 'a');
        else
            printf("%c", pt[i]);
    }
    printf("\n");
    return 0;
}