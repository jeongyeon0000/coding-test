#include<stdio.h>
int main()
{
    int H, M;
    scanf("%d %d", &H, &M);
    if(M >= 45)
        M -= 45;
    else if(H>0 && M < 45)
    {
        H -= 1;
        M = M+15;
    }
    else
    {
        H = 23;
        M = M+15;
    }
    printf("%d %d", H, M);
    return 0;
}