#include <stdio.h>

// Define the structure
struct book {
    char title[30];
    char author[30];
    int publication_year;
    char ISBN[13];
    float price;
};

int main() {
    // Declare and initialize the structure variable
    struct book myBook = {
        "Introduction to C Programming",
        "John Smith",
        2022,
        "9780131103627",
        49.99
    };

    // Print the values
    printf("Book Details:\n");
    printf("Title: %s\n", myBook.title);
    printf("Author: %s\n", myBook.author);
    printf("Publication Year: %d\n", myBook.publication_year);
    printf("ISBN: %s\n", myBook.ISBN);
    printf("Price: %.2f\n", myBook.price);

    // Declare another structure variable for user input
    struct book userBook;

    // Prompt the user for input
    printf("\nEnter book details:\n");
    printf("Title: ");
    scanf("%s", userBook.title);
    printf("Author: ");
    scanf("%s", userBook.author);
    printf("Publication Year: ");
    scanf("%d", &userBook.publication_year);
    printf("ISBN: ");
    scanf("%s", userBook.ISBN);
    printf("Price: ");
    scanf("%f", &userBook.price);

    // Print the user-entered values
    printf("\nEntered Book Details:\n");
    printf("Title: %s\n", userBook.title);
    printf("Author: %s\n", userBook.author);
    printf("Publication Year: %d\n", userBook.publication_year);
    printf("ISBN: %s\n", userBook.ISBN);
    printf("Price: %.2f\n", userBook.price);

    return 0;
}