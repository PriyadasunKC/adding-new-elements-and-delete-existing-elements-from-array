#include <stdio.h>

int main()
{
    char function = 0;
    ;
    int position = 0;
    int addValue = 0;

    // initializing the array
    int sizeOfArray = 0;

    // Decalre the size of array
    printf("Enter array size : ");
    scanf("%d", &sizeOfArray);

    int arr[100] = {};

    // Entering values for array
    printf("Enter Array Values\n");
    for (int i = 0; i < sizeOfArray; i++)
    {
        printf("Enter Value %d : ", i + 1);
        scanf("%d", &arr[i]);
    }

    // print the previous array
    for (int k = 0; k < sizeOfArray; k++)
    {
        printf("%d ", arr[k]);
    }

    printf("\n");
    // choosing the function
    printf("Enter the array function you want from list below,\n- add -> add sign \n- delete -> substract sign \n");
    printf("Enter the function : ");
    scanf("%s", &function);

    // Selecting the function want to execute
    if (function == '+')
    {

        // get the new value wants to add to array
        printf("Enter the value wants to add array : ");
        scanf("%d", &addValue);

        // get the position that value wants to add
        printf("Enter the position you want to add : ");
        scanf("%d", &position);

        printf("\n");
        // expanding the size of array
        sizeOfArray++;

        // Shift the array by one position
        for (int i = sizeOfArray - 1; i >= position; i--)
        {
            arr[i] = arr[i - 1];
        }
        // asign the new value to new postion
        arr[position - 1] = addValue;

        // print the updated array
        for (int j = 0; j < sizeOfArray; j++)
        {
            printf("%d ", arr[j]);
        }
    }
    else if (function == '-')
    {

        // get the position that value wants to delete
        printf("Enter the position you want to delete : ");
        scanf("%d", &position);

        // reducing the size of array
        sizeOfArray--;

        // Shift the array by one position
        for (int i = position - 1; i < sizeOfArray; i++)
        {
            arr[i] = arr[i + 1];
        }

        // reducing the size of array
        sizeOfArray--;

        // print the updated array
        for (int j = 0; j <= sizeOfArray; j++)
        {
            printf("%d ", arr[j]);
        }
    }
    else
    {
        printf("Enter correct function!");
    }
    return 0;
}
