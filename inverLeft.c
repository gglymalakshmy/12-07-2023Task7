//  Inverted Left Half Pyramid Pattern in C
#include <stdio.h>
 
int main()
{
    int rows;
    printf("Enter the number of rows: ");
   scanf("%d", &rows);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < 2 * i; j++) {
            printf(" ");
        }
        for (int k = 0; k < rows - i; k++) {
            printf("* ");
        }
        printf("\n");
    }
 
    return 0;
}