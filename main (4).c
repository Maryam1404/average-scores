/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

https://www.onlinegdb.com/myfiles#include <stdio.h>

#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of scores: ");
    scanf("%d", &n);

    int scores[n];
    int sum = 0;

    printf("Enter %d scores:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &scores[i]);
        sum += scores[i];
    }

    if (n > 0) {
        double average = (double)sum / n;
        printf("Average score: %.2lf\n", average);
    } else {
        printf("No scores \n");
    }

    return 0;
}