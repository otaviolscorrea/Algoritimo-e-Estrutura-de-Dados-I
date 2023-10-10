#include <stdio.h>
#include <stdlib.h>

void swap(int *endA, int *endB)
{
    int temp;
    temp = *endA;
    *endA = *endB;
    *endB = temp;
}

int main(int argc, char const *argv[])
{
    int vlrA = 3, vlrB = 4;

    printf("\nValores antes do SWAP: A = %d, B = %d", vlrA, vlrB);
    swap(&vlrA, &vlrB);
    printf("\nValores depois do SWAP: A = %d, B = %d", vlrA, vlrB);

    return 0;
}
