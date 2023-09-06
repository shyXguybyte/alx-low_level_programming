#include <stdio.h>
#include <stdlib.h>


/**
 * main - entry point
 * @argc: length of array
 * @argv: array of Strings
 * 
 * Return: multiply of x and y
 */

int main(int argc, char *argv[])
{
    int x, y;
     
        if (argc < 3)
        {   
            printf("Error\n");
            return (1);
        }
        else
        {   
            x = atoi(argv[1]);
            y = atoi(argv[2]);
            printf("%d\n", x * y);

            return (0);
        }
}
