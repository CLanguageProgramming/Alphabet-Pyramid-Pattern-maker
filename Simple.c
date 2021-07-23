#include <stdio.h>
int main()
{
    int a;
    printf("Enter the numbers of rows >>");
    scanf("%d", &a);
    getchar();
    printf("Enter Any Alphabet >>");
    char b;
    scanf("%c", &b);
    for(int c=1;c<=a;c++)
    {
        for(int d=1;d<=c;d++)
        {
            printf("%c", b);
        }
        b++;
        printf("\n");
    }
    getchar();
}
