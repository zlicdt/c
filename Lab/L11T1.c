#include <stdio.h>
#include <math.h>
#define LINE_LENGTH(x1,x2,y1,y2) sqrt((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2))
struct Point {
    double x, y;
};
struct Triangle
{
    struct Point p1, p2, p3;
};

int main() {
    struct Triangle t;
    // Use \ to convert ,
    printf("Enter the coordinates of the 1st point: ");
    scanf("%lf\, %lf", &t.p1.x, &t.p1.y);
    printf("Enter the coordinates of the 2nd point: ");
    scanf("%lf\, %lf", &t.p2.x, &t.p2.y);
    printf("Enter the coordinates of the 3rd point: ");
    scanf("%lf\, %lf", &t.p3.x, &t.p3.y);
    // Use lf to get float number
    printf("the circumference of the triangle is %f.\n", LINE_LENGTH(t.p1.x, t.p2.x, t.p1.y, t.p2.y) + LINE_LENGTH(t.p2.x, t.p3.x, t.p2.y, t.p3.y) + LINE_LENGTH(t.p3.x, t.p1.x, t.p3.y, t.p1.y));
    // Use LINE_LENGTH to calculate the circumference
    return 0;
}
