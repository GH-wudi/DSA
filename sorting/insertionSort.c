// #include <float.h>
#include <stdio.h>

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void InsertionSort(int a[], int len)
{
    for (int i = 1; i < len; i++)
    {
        if (a[i] < a[i - 1])
        {
            int temp = a[i];
            int j;
            for (j = i - 1; j >= 0 && temp < a[j]; j--)
            {
                a[j + 1] = a[j];
            }
            a[j + 1] = temp;
        }
    }
}

void InsertionSortWhile(int a[], int len)
{
    for (int i = 1; i < len; i++)
    {
        if (a[i] < a[i - 1])
        {
            int temp = a[i], j = i - 1;
            // 这里要等于0
            while (j >= 0 && temp < a[j])
            {
                a[j + 1] = a[j];
                j--;
            }
            a[j + 1] = temp;
        }
    }
}

void printf_arr(int a[], int len)
{
    for (int i = 0; i <= len; i++)
    {
        printf("%d ", a[i]);
    }
}

int main()
{
    // int a = 1, b = 2;
    int arr[] = {2, 5, 8, 3, 6, 9, 1, 4, 7};
    int l = 9;
    printf_arr(arr, l);
    printf("\n");
    InsertionSortWhile(arr, l);
    printf_arr(arr, l);
    // scanf("%d", &a);
    // swap(&a, &b);
    // printf("a=%d,b=%d", a, b);
    return 0;
}
