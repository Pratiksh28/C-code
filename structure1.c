
#include<stdio.h>

struct Point
{
int x, y;
};

int main()

{
struct Point p1 = {0, 1}; // initializing the structure variable
printf ("\n\n \t x = %d, y = %d", p1.x, p1.y);
// Accessing members of point p1
p1.x = 20;
printf ("\n\n \t x = %d, y = %d", p1.x, p1.y);
return 0;
}
