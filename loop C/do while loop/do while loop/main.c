#include <stdio.h>
#include <math.h>
 int main()

{
    int dec;
    int bin=0,i=0,rem;
    printf("Input decimal number=");
    scanf("%d",&dec);
    while (dec>0)
    {
        rem=dec%2;
        bin=bin+rem*pow(10, i);
        i++;
        dec=dec/2;
    }
    printf("Binary number is %d",bin);
    return 0;
}
