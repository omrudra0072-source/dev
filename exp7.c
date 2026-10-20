#include <stdio.h>
int main()
{
    float weight[20], profit[20], capacity;
    int n, i, j;
    float ratio[20], tp = 0, temp, fract;

    printf("\nEnter the capacity of knapsack: ");
    scanf("%f", &capacity);

    printf("\nEnter the no. of items: ");
    scanf("%d", &n);

    printf("\nEnter the weights and profits of each item:\n");

    for (i = 0; i < n; i++)
    {
        scanf("%f%f", &weight[i], &profit[i]);
    }
    for (i = 0; i < n; i++)
    {
        ratio[i] = profit[i] / weight[i];
    }

    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (ratio[i] < ratio[j])
            {
                temp = ratio[i];
                ratio[i] = ratio[j];
                ratio[j] = temp;

                temp = weight[i];
                weight[i] = weight[j];
                weight[j] = temp;

                temp = profit[i];
                profit[i] = profit[j];
                profit[j] = temp;
            }
        }
    }

    for (i = 0; i < n; i++)
    {
        if (weight[i] > capacity)
        {
            break;
        }
        else
        {
            capacity = capacity - weight[i];
            tp = tp + profit[i];
        }
    }


    if (i < n)
    {
        fract = capacity / weight[i];
        tp = tp + (fract * profit[i]);
    }

    printf("\nMaximum profit is: %.2f\n", tp);

    return 0;
}
