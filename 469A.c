#include<stdio.h>

int main()
{
    int n, p, q, i, j, cn = 0;
    scanf("%d", &n);

    int a[2 * n];
    for (i = 0; i < 2 * n; i++)
        a[i] = 0;

    scanf("%d", &p);
    for (i = 0; i < p; i++)
        scanf("%d", &a[i]);

    scanf("%d", &q);
    for (j = 0; j < q; j++,i++)
        scanf("%d", &a[i]);

    for (j = 1; j <= n; j++)
    {
        for (i = 0; i < (p + q); i++)
        {
            if (j == a[i])
            {
                cn++;
                break;
            }
        }
    }

    if (cn == n)
        printf("I become the guy.\n");
    else
        printf("Oh, my keyboard!\n");

    return 0;
}
