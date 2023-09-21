#include <stdio.h>
//Declaration of Codebook
int codebook[26];
//This is the Global array


//Function to Initialize Codebook
void initialize_codebook() 
{
    for (int i = 0; i < 26; i++) 
    {
        codebook[i] = 11 + i;
    }
}
// This function starts intiation of codebook[0] and goes until codebook[26], andthe instruction inside the for loop provides the corresponding values.


//The Converter Function
int convert(char ch) 
{
    return codebook[ch - 'a'];
}
//This function works in a subtle way; i.e after getting the character input, it subtracts the ASCII value of 'a' from the corresponding ASCII value of the character.


//The Encoder Function
int encodeword(int codebook[], char plainword[], int cipherword[]) 
{
    int i = 0;
    while (plainword[i] != '\0') 
    {
        cipherword[i] = convert(plainword[i]);
        i++;
    }
    return i;
}
// This function states that we intialize i at 0; takes plainword[0] and converts it into cipherword[0], then gets incremented to i = 1. This continues until the occurence of a null terminator. It also counts how many times the loop has run.


//The main function
void main() 
{
    initialize_codebook();

    char a[16]; // Assuming the largest word is 15 characters + null terminator
    int b[16];  // Corresponding codes

    while (1) //This loop is always true
    { 
        printf("Enter a word: "); // User input
        scanf("%s", a); // Corresponding inputs of the string gets stored 

        int length = encodeword(codebook, a, b); //Measures how many times the enocder loop has run and does the encoding as well

        printf("Encoded word:\n ");
        for (int i = 0; i < length; i++)
        {
            printf("%d \n", b[i]);// prints until the desirded length is achieved
        }
        printf("\n");
    }

}
