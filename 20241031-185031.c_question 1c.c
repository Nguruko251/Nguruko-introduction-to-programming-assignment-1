#include <stdio.h>

struct Student {
    char name[50];
    int marks;
};

int main() {
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);

    struct Student students[n];
    FILE *file = fopen("students.bin", "wb");

    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        printf("Enter name of student %d: ", i + 1);
        scanf("%s", students[i].name);
        printf("Enter marks of student %d: ", i + 1);
        scanf("%d", &students[i].marks);
    }

    fwrite(students, sizeof(struct Student), n, file);
    fclose(file);
    printf("Data successfully written to binary file.\n");

    // Reading data back from file
    file = fopen("students.bin", "rb");
    if (file == NULL) {
        printf("Error opening file for reading!\n");
        return 1;
    }

    fread(students, sizeof(struct Student), n, file);
    fclose(file);

    printf("\nData read from file:\n");
    for (int i = 0; i < n; i++) {
        printf("Name: %s, Marks: %d\n", students[i].name, students[i].marks);
    }

    return 0;
}