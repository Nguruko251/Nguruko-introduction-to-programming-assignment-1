#include <stdio.h>


void writeToFile() {
    FILE *file = fopen("data.txt", "w");
    if (file == NULL) {
        perror("Error opening file for writing");
        return;
    }

    char sentence[101];
    printf("Enter a sentence (up to 100 characters): ");
    fgets(sentence, sizeof(sentence), stdin);

    if (fputs(sentence, file) == EOF) {
        perror("Error writing to file");
    }

    fclose(file);
}

void readFromFile() {
    FILE *file = fopen("data.txt", "r");
    if (file == NULL) {
        perror("Error opening file for reading");
        return;
    }

    char ch;
    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);
    }

    fclose(file);
}

void appendToFile() {
    FILE *file = fopen("data.txt", "a");
    if (file == NULL) {
        perror("Error opening file for appending");
        return;
    }

    char sentence[101];
    printf("Enter another sentence to append (up to 100 characters): ");
    fgets(sentence, sizeof(sentence), stdin);

    if (fputs(sentence, file) == EOF) {
        perror("Error appending to file");
    }

    fclose(file);
}

int main() {
    writeToFile();
    printf("Content of 'data.txt':\n");
    readFromFile();

    appendToFile();
    printf("Updated content of 'data.txt':\n");
    readFromFile();

    return 0;
}