#include <stdio.h>
int main()
{
    int Z[2][2];
    int i, j;
    int A, B, C, D, E, F, G, H;
    int p1, p2, p3, p4, p5, p6, p7;
    int c1, c2, c3, c4;

    int X[2][2] = {{1, 2}, {3, 4}};
    int Y[2][2] = {{5, 6}, {7, 8}};
    printf("The First Matrix is:");
    for (i = 0; i < 2; i++)
    {
        printf("\n");
        for (j = 0; j < 2; j++)
            printf("%d\t", X[i][j]);
    }

    printf("\n\nThe Second Matrix is:");
    for (i = 0; i < 2; i++)
    {
        printf("\n");
        for (j = 0; j < 2; j++)
            printf("%d\t", Y[i][j]);
    }

    A = X[0][0];
    B = X[0][1];
    C = X[1][0];
    D = X[1][1];

    E = Y[0][0];
    F = Y[0][1];
    G = Y[1][0];
    H = Y[1][1];

    p1 = A * (F - H);
    p2 = H * (A + B);
    p3 = E * (C + D);
    p4 = D * (G - E);
    p5 = (A + D) * (E + H);
    p6 = (B - D) * (G + H);
    p7 = (A - C) * (E + F);

    c1 = p4 + p5 + p6 - p2;
    c2 = p1 + p2;
    c3 = p3 + p4;
    c4 = p1 - p3 + p5 - p7;

    Z[0][0] = c1;
    Z[0][1] = c2;
    Z[1][0] = c3;
    Z[1][1] = c4;

    printf("\n\nProduct achieved using Strassen's algorithm:");
    for (i = 0; i < 2; i++)
    {
        printf("\n");
        for (j = 0; j < 2; j++)
            printf("%d\t", Z[i][j]);
    }

    return 0;
}
