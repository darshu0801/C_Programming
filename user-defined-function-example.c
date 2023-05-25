#include <stdio.h>

float dbks(float a, float b);
int main()
{
    float p,q,d;
    printf("Enter 2 integers\n");
    scanf("%f %f", &p,&q);
    d = dbks(p,q);
    printf("%.2f",d);
    return 0;
}

float dbks(float a, float b)
{
    float d;
    d = a/b;
    return d;
}