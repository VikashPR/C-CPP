#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>

void insertionSort(int arr[30], int n)
{
    int i, j, temp;
    for (i = 1; i < n; i++)
    {
        temp = arr[i];
        j = i - 1;

        while (j >= 0 && temp <= arr[j])
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = temp;
    }
}
void selectionSort(int arr[30], int n)
{
    int i, j, min, temp;
    for (i = 0; i < n; i++)
    {
        min = i;
        for (j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min])
                min = j;
        }
        temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
}
void fork1()
{
    int arr[25], arr1[25], n, i, status;
    printf("\nEnter the no of values in array :");
    scanf("%d", &n);
    printf("\nEnter the array elements :");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    int pid = fork();
    if (pid == 0)
    {
        sleep(10);
        printf("\nchild process\n");
        printf("child process id=%d\n", getpid());
        selectionSort(arr, n);
        printf("\nElements Sorted Using selectionSort:");
        printf("\n");
        for (i = 0; i < n; i++)
            printf("%d,", arr[i]);
        printf("\b");
        printf("\nparent process id=%d\n", getppid());
        system("ps -x");
    }
    else
    {
        printf("\nparent process\n");
        printf("\nparent process id=%d\n", getppid());
        insertionSort(arr, n);
        printf("Elements Sorted Using insertionSort:");
        printf("\n");
        for (i = 0; i < n; i++)
            printf("%d,", arr[i]);
        printf("\n\n\n");
    }
}
int main()
{
    fork1();
    return 0;
}
