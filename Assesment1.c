#include <stdio.h>
#include <string.h>
void reversstring(char *str)
{
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++)
    {
        char temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
}

int substring(char *str1, char *str2)
{
    if (strstr(str1,str2) != NULL)
    {
        return 1; 
    }
    return 0; 
}

int main()
{
    char str1[20], str2[20], ch;
    int choice;

start:
    printf("\n\n==========Main Menu==========");
    printf("\n1.Equality");
    printf("\n2.String copy");
    printf("\n3.Concat");
    printf("\n4.Show");
    printf("\n5.Reverse");
    printf("\n6.Palindrome");
    printf("\n7.Sub String");
    printf("\n8.Exit");

    printf("\n\nEnter the choice = ");
    scanf("%d", &choice);

    printf("\nEnter the first string value = ");
    scanf("%s", &str1);

    printf("\nEnter the second string value = ");
    scanf("%s", &str2);

    switch (choice)
    {
    case 1:

        printf("\nOriginal first string value = %s", str1);
        printf("\nOriginal second string value = %s", str2);

        printf("\nFirst string lenth  value = %d", (int)strlen(str1));
        printf("\nScond string lenth value = %d", (int)strlen(str2));

        if (strcmp(str1, str2) == 0)
        {
            printf("\n\nBoth string is Equal.");
        }
        else
        {
            printf("\n\nBoth string is not Equal.");
        }
        break;
    case 2:

        printf("\n\nOriginal first string value = %s", str1);
        printf("\nOriginal second string value = %s", str2);

        strcpy(str1, str2);

        printf("\n\nvalu of string copy function = %s", str1);
        printf("\nvalue of string copy function = %s", str2);

        break;

    case 3:

        printf("\n\nOriginal first string value = %s", str1);
        printf("\nOriginal second string value= %s", str2);

        strcat(str1, str2);

        printf("\n\nvalue of string concat function = %s", str1);
        printf("\nvalue of string concat function = %s", str2);

        break;

    case 4:

        printf("\n\nOriginal first string value = %s", str1);
        printf("\nOriginal second string value = %s", str2);

        break;
    case 5:
        printf("\n\nOriginal first string value = %s", str1);
        printf("\nOriginal second string value = %s", str2);

        printf("\n\nvalue of string reverse function = %s", strrev(str1));
        printf("\nvalue of string reverse function = %s", strrev(str2));
        break;

    case 6:
        printf("\n\nOriginal first string value = %s", str1);
        printf("\nOriginal second string value = %s", str2);

        {
            char temp[20];
            strcpy(temp, str1);
            reversstring(temp);
            if (strcmp(str1, temp) == 0)
            {
                printf("\nFirst string is an pallidrome.");
            }
            else
            {
                printf("\nSecond string is not an palindrome.");
            }
            strcpy(temp, str2);
            reversstring(temp);
            if (strcmp(str2, temp) == 0)
            {
                printf("\nfirst string is an pallidrome.");
            }
            else
            {
                printf("\nSecond string is not an pallidrome.");
            }
        }
        break;

    case 7:
        printf("\nOriginal first string value = %s", str1);
        printf("\nOriginal second string value = %s", str2);

        if (substring(str1,str2))
        {
            printf("\n%s is a substring of %s",str2,str1);
        }
        else
        {
            printf("\n%s is not a substring of %s",str2,str1);
        }

        break;
    case 8:
        printf("\nExit");
        return 0;
        break;
    default:
        printf("\ninvalide choice!");
        break;
    }
    printf("\n\n Do You Want to Continue y/n ? : ");
    scanf(" %c", &ch);
    if (ch == 'y')
    {
        goto start;
    }
    else
    {
        printf("\nThis progeamme ending!");
        goto end;
    }
end:
    return 0;
}
