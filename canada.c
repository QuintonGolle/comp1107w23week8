#include <stdio.h>
#include <string.h>

const char *PROVINCES[] = {"Alberta", "British Columbia", "Manitoba", "New Brunswick", "Newfoundland and Labrador", "Nova Scotia", "Ontario", "Prince Edward Island", "Quebec", "Saskatchewan"};

void print_provinces()
{
    //TODO:: Write a for loop that iterates over the PROVINCES array and prints out how many letters is contained in each

    for(int i = 0; i < sizeof(PROVINCES)/sizeof(PROVINCES[0]); i++)
    {
        printf("\n%ld", strlen(PROVINCES[i]));
    }

}