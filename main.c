/*P.S.C. MicroProject- UNIT CONVERTER USING C LANGUAGE WITH USER
 DEFINED LIBRARY*/

#include <stdio.h>
#include<shrawani.h>
//#include<shrawani.h>
//#include<shrawani.h>1
// path access  method
// #include"C:\Users\choug\OneDrive\Desktop\C Project\shrawani.h" 
//#include"C:\Users\choug\OneDrive\Desktop\shrawani.h"
 //#include"C:\Users\choug\OneDrive\Desktop\C Project\shrawani.h"
 //#include"c:\Users\choug\OneDrive\Desktop\shrawani.h"
int main() {
    int choice;

    do {
        printf("\nUnit Conversion Program\n");
        printf("1. Convert Length\n");
        printf("2. Convert Mass\n");
        printf("3. Convert Time\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                convertLength();
                break;
            case 2:
                convertMass();
                break;
            case 3:
                convertTime();
                break;
            case 4:
                printf("Exiting the program. Goodbye!\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 4);

    return 0;
}


