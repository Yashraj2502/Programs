//NAME : CHETAN VITHOBA SHIGVAN
//ROLL NO. : 41
//TITLE : Check String Palindrome or Not

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct book
{
    char title[100], author[100];
    int price, pages;
};

int main ()
{
    int x;
    system("cls");
    struct book bk[10];
    printf("Enter the Title, Author, Prices and Pages of 10 books : \n");

    for (int i = 0; i < 10; i++)
    {
        printf("\nRecord : %d\n", i+1);
        printf("Title of the book");
        scanf("%s", &bk[i].title);
        printf("Author of the book");
        scanf("%s", &bk[i].author);
        printf("Price of the book");
        scanf("%d", &bk[i].price);
        printf("Total number of pages in the bo+ok");
        scanf("%d", &bk[i].pages);
    }

    printf("Records in Ascending order of the Price : ");

    for (int i = 0; i < 10; i++)
    {
        for (int j = i+1; j < 10; j++)
        {
            if (bk[i].price > bk[j].price)
            {
                x = bk[i].price;
                bk[i].price = bk[j].price;
                bk[j].price = x;
            }
        }
    }

    for (int i = 0; i < 10; i++)
    {
        printf("Record : %d\n", i+1);
        printf("Title of the book : %s\n", bk[i].title);
        printf("Author of the book : %s\n", bk[i].author);
        printf("Price of the book : %d\n", bk[i].price);
        printf("Total number of pages in the book : %d\n\n", bk[i].pages);
    }

    return 0;
}