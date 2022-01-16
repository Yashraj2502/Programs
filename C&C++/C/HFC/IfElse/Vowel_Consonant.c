//Vowel or Consonant || Conditional Statement || C++ || Turbo C++

#include<stdio.h>

int main(){
    char ch;
    printf("Enter character to find if it's vowel or consonant\n");
    scanf(" %c", &ch);
    /*ascii values of alphabets will be used to verify if the entered character is an alphabet*/

    if ((int(ch) >= 97 && int(ch) <= 122) || (int(ch) >= 65 && int(ch) <= 90))
    {
        if (ch == 'A' || ch == 'a' || ch == 'E' || ch == 'e' || ch == 'I' || ch == 'i' || ch == 'O' || ch == 'o' || ch == 'U' || ch == 'u')
        {
            printf("You entered VOWEL.");
        }

        else
        {
            printf("You entered CONSONANT.");
        }
        
    }

    else
    {
        printf("INVALID character");
    }
    
    return 0;
}

/*
#include<iostream.h>
#include<conio.h>

void main()
{
    char ch;
    cout << "Enter character to find if it's vowel or consonant\n";
    cin >> ch;
    // to check if character entered is an alphabet
    // with help of ascii values of alphabets
    if ((int(ch) >= 97 && int(ch) <= 122) || (int(ch) >= 65 && int(ch) <= 90))
    {
        // if character is actually alphabet, 
        // check if its A,a,E,e,I,i,O,o,U,u
        if (ch == 'A' || ch == 'a' || ch == 'E' || ch == 'e' || ch == 'I' || ch == 'i' || ch == 'O' || ch == 'o' || ch == 'U' || ch == 'u')
        {
            cout << "You entered VOWEL ";
        }
        // if alphabet is not vowel its consonent
        else 
        {
            cout << "You entered CONSONANT ";
        }
    }
    else
    {
        cout << "INVALID character";
    }
    getch();
}
*/