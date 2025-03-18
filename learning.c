#include <stdio.h>
#include <string.h>

// int glo = 76;

// void newPrint(char *char1)
// {
//     printf("The value is %s\n\n\n\n", char1);
// }

// int sum(int a, int b)
// {
//     return a + b;
// }

// float average(float a, float b)
// {
//     return (a + b) / 2;
// }

int main()
{

    char arr[4][10] = {"asd", "dfg", "fgh", "gfg"};
    for (int i = 0; i < 4; i++)
    {
        printf("Enter the values for index %d \n", i);
        scanf("%s", &arr[i]);
    }

    for (int i = 0; i < 4; i++)
    {
        printf("The value for index %d is %s\n", i, arr[i]);
    }

  

// Pointers
    // int a = 98;
    // printf("%d\n", a);
    // int* ptr = NULL;
    // if (!ptr)
    // {
    //     printf("pointer is not null");
    // }
    // ptr = &a;
    // *ptr = 188;
    // printf("%d", a);

    // Strings
    // char name[3] = {'m', 'y', '\0'};
    // char str1[65], str2[98], str3[32];
    // strcpy(str1, "Harry");
    // strcpy(str2, "Rohan");
    // strcat(str1, str2);
    // printf("%d", strcmp(str1,str2));

    // Structures
    // struct Books bk1, bk2;
    // strcpy(bk1.name, "C Programming");
    // strcpy(bk1.author, "Dennis");
    // bk1.price = 78;
    // printStruct(bk1);

    return 0;
}
