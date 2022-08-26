#include <stdio.h>

int main (int argc, char *argv[])
{
    int l, b;
    printf("Enter Length of rectangle :- ");
    scanf("%d", &l);
    printf("Enter Breadth of rectangle :- ");
    scanf("%d", &b);
    for (int i=0; i<b; i++) {
        for (int j=0; j<l; j++) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
