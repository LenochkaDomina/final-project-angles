#include <cs50.h>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

//Created by Domina Olena, Kharkiv, Ukraine.

int angle(int, int, int);

int main(int argc, string argv[])
{
    if (argc != 4)
    {
        printf("Please enter the 3 sides of the triangle");
        return 1;
    }
    else
    {
        //enter 3 sides of triangle
        int a;
        int b;
        int c;
        a = atoi(argv[1]);
        b = atoi(argv[2]);
        c = atoi(argv[3]);

        //check if there is a triangle with such sides
        if ( a + b <= c || a + c <= b || b + c <= a)
        {
            printf("It isn't a triangle\n");
            return 2;
        }
        else
        {
            //enter angles between sides
            int ab = angle(a, b, c);
            int bc = angle(b, c, a);
            int ac = angle(a, c, b);
            //in the same order we display the corners to the user
            printf("%i %i %i\n", ab, bc, ac);
        }
    }
}


//calculate angles between sides
int angle(x, y, z)
{
    float i;
    i = acos((pow(x, 2) + pow(y, 2) - pow(z, 2)) / (2 * x * y));
    i = round(i * 180 / 3.1415);
    return i;
}