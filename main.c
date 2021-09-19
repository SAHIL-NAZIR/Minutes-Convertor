#include <stdio.h>
#include <stdlib.h>

int main()
{
    int minutes = 0;
    double days, years;
    printf("Enter number of minutes: ");
    scanf("%d", &minutes);
    days = (minutes / (60.0 * 24.0));
    years = (minutes / (60.0 * 24.0 * 360.0));
    printf("%d minutes are equal to %f days, and\n", minutes, days);
    printf("%d minutes are also equal to %f years", minutes, years);
}
