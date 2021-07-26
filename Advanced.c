#include <stdio.h>
int main()
{
    int a;
    printf("Enter the numbers of rows >>");
    scanf("%d", &a);
    getchar();
    printf("Enter Any Alphabet >>");
    char b;
    char e = 'z';
    scanf("%c", &b);
    
    if(b >= e)
    {
        for(int c=1;c<=a;c++)
        {
            for(int d=1;d<=c;d++)
            {
                printf("%c", b);
            }
            b++;
            printf("\n");
            if(b > 'z')
            {
                printf("Cant print over 'z'");
                break;
            }
        }
        getchar();
    }
    getchar();
}
