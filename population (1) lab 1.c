#include<stdio.h>
#include<cs50.h>
int main(void)
{
    int start_size;
    //TODO : PROMPT FOR START SIZE
    do
    {
        start_size = get_int("Start Size: ");
    }
    while (start_size < 9);
    int  end_size;
    // TODO : PROMPT FR END SIZE
    do
    {
       end_size = get_int("End Size: ");
    }
    while (end_size < start_size);
     int years = 0;
     //TODO : CALCULATE THE NUMBER OF YEARS UNTIL WE REACH THE THRESHOLD
    while (start_size < end_size)
    {
       start_size = start_size + (start_size / 3) - (start_size / 4);
        years++;
    }
    // TODO : PRINT THE NUMBERS OF YEARS
    printf("Years: %i\n", years);
}