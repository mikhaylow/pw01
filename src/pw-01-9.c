#include <stdio.h>

void phase_1();
void phase_2();

int main()
{
    printf("START");
    printf(" ");
    phase_1();
    printf(" ");
    printf("END");
    printf("\n");

    return 0;
}

void phase_1()
{
    printf("ALPHA");
    printf(" ");
    phase_2();
    printf(" ");
    printf("GAMMA");
}

void phase_2()
{
    printf("BETA");
}
