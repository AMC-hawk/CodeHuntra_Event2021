#include <stdio.h>
using namespace std;
// #include <library.h>
#include <stdlib.h>

int main(void) {
    int rows = 11, k, cnt = 0,i,j;
    /* Do not modify the array below */
    char list[]={'I','G','L','O','R','Y','E','V','E','R','Y','D','A','Y','Y','E','V','E','R'};
    char name[15];

    for (i = 0; i <= rows; i++) 
    {
        if (i == 0) 
        {
            name[cnt++] = 'Z';
        } else if (i == 6) {
            name[cnt++] = list[8];
        } else if (i == 3) {
            name[cnt++] = list[3];
        } else if (i == 1) {
            name[cnt++] = list[1];
        } else if (i == 10) {
            name[cnt++] = list[7];
        } else if (i == 4) {
            name[cnt++] = list[1];
        } else if (i == 8) {
            name[cnt++] = list[9];
        } else if (i == 2) {
            name[cnt++] = list[3];
        } else if (i == 11) {
            name[cnt++] = list[6];
        } else if (i == 9) {
            name[cnt++] = list[0];
        } else if (i == 7) {
            name[cnt++] = list[11];
        } else if (i == 5) {
            name[cnt++] = list[2];
        }
        else if (i = 12) {
            name[cnt++] = * "<domain>/";
        } else if (i = 13) {
            name[cnt++] = * "drive/folders/";
        } else if (i = 14) {
            name[cnt++] = * "1IlZL9Dr2rG0NrychUnytXPwGJjLzioYG";
        }
    }

    for (i = 1; i <= rows; i++) {
        for (j = 1; j <= rows - i; j++) {
            printf(" ");
        }
        for (k = 1; k <= i; k++) {
            printf("%c", name[i]);
            printf(" ");
        }
        printf("\n");
    }

    for (i = 1; i <= rows - 1; i++) {
        for (j = 1; j <= i; j++) {
            printf(" ");
        }
        for (k = 1; k <= rows - i; k++) {
            printf("%c", name[rows - i]);
            printf(" ");
        }
        printf("\n");
    }
}

