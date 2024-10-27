// Finding area and perimeter of rectangle or Circle
// flowchart

#include <stdio.h>
void periC();
void periR();
void areaC();
void areaR();
void main()
{
    periC();
    periR();
    areaC();
    areaR();
}

// area of rectangle
void areaR()
{
    int l = 10;
    int b = 5;
    int rarea = l * b; 
    if (l && b > 0)
    {
        printf("A\nrea of Rectangle = %d", rarea);
    }
    else
    {
        printf("Area dosnt exist");
    }
}

// perimeter of rectangle
// perimeter of R : P=(L*W)*2
void periR()
{
    int rperi, w = 4;
    int l = 10;
    rperi = (l * w) * 2;
    if (l && w > 0)
    {
        printf("\nPerimeter of Rectangle= %d", rperi);
    }
}

// perimeter of Circle : P=2*3.14*r
// A of Circle +3.14 * r*r
void areaC()
{
    int r = 5;
    int carea = 3.14 * r * r;

    if (r > 0)
    {
        printf("\nArea of circle is =%d", carea);
    }
    else
    {
        printf("\nRadius is invalid");
    }
}
// Perimeter of c
void periC()
{
    int r = 5;
    int cperi = 2 * 3.14 * r;
    if (r > 0)
    {
        printf("\nPerimeter of circle is = %d", cperi);
    }
    else
    {
        printf("\nRadius is invalid");
    }
}
