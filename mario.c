#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Add variable height outside of do while loop for further usage
    int height;

    // Ask for correct input
    do
    {
        height = get_int("Height: ");
    }
    while (height < 1 || height > 8);

    // printf("Stored: %i\n", height);

    // Add for loop for pyramid
    for (int i = 1; i <= height; i++)
    {
        // Add spaces first
        for (int j = 1; j <= height - i; j++)
        {
            printf(" ");
        }
        // Add #
        for (int j = 1; j <= i; j++)
        {
            printf("#");
        }
        // Next line
        printf("\n");
    }
}