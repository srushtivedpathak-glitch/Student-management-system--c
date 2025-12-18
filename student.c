#include <stdio.h>

int main() {
    int choice;

    printf("\n--- Student Record Management System ---\n");
    printf("1. Add Student\n");
    printf("2. Display Students\n");
    printf("3. Search Student\n");
    printf("4. Exit\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
        printf("You chose: Add Student\n");

        break;
        case 2:
        printf("You chose: Display Students\n");

        break;
        case 3:
        printf("You chose:Search Student\n");

        break;
        case 4:
        printf("Existing program...\n");

        break; 
     default:
     printf("Invalid choice\n");
    }
    return 0;
}


