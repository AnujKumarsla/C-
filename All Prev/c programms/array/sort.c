#include <stdio.h>
#include <conio.h>
void sort(int *p);

int main()
{
    int temp, b, c;
    int a[] = {5, 3, 9, 4, 6, 12, 10, 1, 7, 8};

    sort(&a[0]);

    for (int i = 0; i < 10; i++)
        printf("%d  ", a[i]);

    return 0;
}
void sort(int *p)
{
    int temp;
    for (int i = 9; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            if (*(p + j) > *(p + j + 1))
            {
                temp = *(p + j);
                *(p + j) = *(p + j + 1);
                *(p + j + 1) = temp;
            }
        }
    }
}