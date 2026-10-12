/*
Program 20    Write the program to element of a one dimensional array and calculated the sum of all its element 
solution   using while loop 
*/



#include<stdio.h>
int main()
{
    int arr[5], i , sum = 0;
    while (i<5)
    {
        printf("Enter element at index %d: ", i);
        scanf("%d", &arr[i]);
        i++;
    }
    i=0;
    while (i<5)
    {
        sum = sum + arr[i];
        i++;
    }
    printf("The sum of all elements in the array is: %d\n", sum);
    return 0;
}