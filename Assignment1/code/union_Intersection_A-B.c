#include <stdio.h>

void Union(int a, int b, int arr1[], int arr2[])
{
    printf("The All student given as :- ");
    int result[100], count = 0, i, j;
    for (i = 0; i < a; i++)
    {
        result[i] = arr1[i];
        count++;
    }
    for (i = 0; i < b; i++)
    {
        int flag = 1;
        for (j = 0; j < count; j++)
        {
            if (arr2[i] == result[j])
            {
                flag = 0;
                break;
            }
        }
        if (flag == 1)
        {
            result[count] = arr2[i];
            count++;
        }
    }
    printf("[   ");
    for (i = 0; i < count; i++)
    {
        printf("%d   ", result[i]);
    }
    printf(" ]");
}

void Intersection(int a, int b, int arr1[], int arr2[])
{
    int result[100], flag, count = 0;
    for (int i = 0; i < a; i++)
    {
        flag = 1;
        for (int j = 0; j < b; j++)
        {
            if (arr1[i] == arr2[j])
            {
                flag = 0;
                break;
            }
        }
        if (flag == 0)
        {
            result[count] = arr1[i];
            count++;
        }
    }
    printf("The List of Students who Opted both AI and BLOCKCHAIN\n");
    printf("[   ");
    for (int i = 0; i < count; i++)
    {
        printf("%d   ", result[i]);
    }
    printf(" ]");
}



void Ai(int a, int b, int arr1[], int arr2[])
{
    int result[100], count = 0;
    for (int i = 0; i < a; i++)
    {
        int flag = 1;
        for (int j = 0; j < b; j++)
        {
            if (arr1[i] == arr2[j])
            {
                flag = 0;
                break;
            }
        }
        if (flag == 1)
        {
            result[count] = arr1[i];
            count++;
        }
    }
    printf("The List of Students who Opted AI \n");
    printf("[  ");
    for (int i = 0; i < count; i++)
    {
        printf("%d   ", result[i]);
    }
    printf("]");
}
void blockchain(int a, int b, int arr1[], int arr2[])
{
    int result[100], count = 0;
    for (int i = 0; i < b; i++)
    {
        int flag = 1;
        for (int j = 0; j < a; j++)
        {
            if (arr2[i] == arr1[j])
            {
                flag = 0;
                break;
            }
        }
        if (flag == 1)
        {
            result[count] = arr2[i];
            count++;
        }
    }
    printf("The List of Students who Opted BLOCKCHAIN\n");
    printf("[  ");
    for (int i = 0; i < count; i++)
    {
        printf("%d   ", result[i]);
    }
    printf("]");
}
void onlyone(int a, int b, int arr1[], int arr2[])
{
    printf("The List of Students who Opted only AI or BLOCKCHAIN\n");
      int result[100], count = 0;
    for (int i = 0; i < a; i++)
    {
        int flag = 1;
        for (int j = 0; j < b; j++)
        {
            if (arr1[i] == arr2[j])
            {
                flag = 0;
                break;
            }
        }
        if (flag == 1)
        {
            result[count] = arr1[i];
            count++;
        }
    }

    for (int i = 0; i < b; i++)
    {
        int flag = 1;
        for (int j = 0; j < a; j++)
        {
            if (arr2[i] == arr1[j])
            {
                flag = 0;
                break;
            }
        }
        if (flag == 1)
        {
            result[count] = arr2[i];
            count++;
        }
    }
    printf("[   ");
    for (int i = 0; i < count; i++)
    {
        printf("%d ", result[i]);
    }
    printf(" ]");
    
}

int main()
{
    int a, b, c, s;

    printf("Enter the size of the Array\n");
    scanf("%d %d", &a, &b);
    int arr1[a], arr2[b];
    printf("Enter the Elements in the Array 1 \n");
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &arr1[i]);
    }

    printf("Enter the Elements in the Array 2 \n");
    for (int i = 0; i < b; i++)
    {
        scanf("%d", &arr2[i]);
    }
    
    do
    {
        printf("*****************************************  WELCOME ***************************************************************************");
        printf("\n1.All Studens of AI and BLOCK CHAIN");
        printf("\n2.Student who opted the both AI and BLOCKCHAIN");
        printf("\n3.Student who opted only AI");
        printf("\n4.Student who opted only BLOCKCHAIN");
        printf("\n5.Student who opted only one Subject\n");
        printf("********************************************************************************************************************\n");

        printf("Which type of Student you want ??\n");
        scanf("%d", &c);

        switch (c)
        {
        case 1:
            Union(a, b, arr1, arr2);
            break;
        case 2:
            Intersection(a, b, arr1, arr2);
            break;
        case 3:
            Ai(a, b, arr1, arr2);
            break;
        case 4:
            blockchain(a, b, arr1, arr2);
            break;
        case 5:
            onlyone(a, b, arr1, arr2);
            break;
        default:
            printf("INVALID INPUT!!!");
            break;
        }
        printf("\nDo you want to continue ??(1 for yes and 0 for No)\n");
        scanf("%d", &s);

        if(s==1)printf("Welcome Once Again!!\n");

    } while (s==1);
    return 0;
}
