#include <stdio.h>
#include <string.h>

int main()  {
    char str1[100], str2[100];

    printf("Enter First String: ");
    gets(str1);

    printf("Enter Second String: ");
    gets(str2);

    printf("Length of  first string = %lu\n", strlen(str1));
     printf("Length of  second string = %lu\n", strlen(str2));

    if(strcmp (str1, str2) == 0)
        printf("Both strings are Equal.");
    else
          printf("Both strings are not Equal.");

    return 0;
}
