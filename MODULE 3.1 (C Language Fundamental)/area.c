#include <stdio.h>

float circleArea(float r) {

return 3.14159 * r * r;

}

float rectangleArea(float l, float w) {

return l * w;

}

float squareArea(float s) {

return s * s;

}

float triangleArea(float b, float h) {

return 0.5 * b * h;

}

int main() {

float r, l, w, s, b, h;

printf("Enter the radius of the circle: ");

scanf("%f", &r);

printf("The area of the circle is: %.2f\n", circleArea(r));

printf("Enter the length and width of the rectangle: ");

scanf("%f%f", &l, &w);

printf("The area of the rectangle is: %.2f\n", rectangleArea(l, w));

printf("Enter the side of the square: ");

scanf("%f", &s);

printf("The area of the square is: %.2f\n", squareArea(s));

printf("Enter the base and height of the triangle: ");

scanf("%f%f", &b, &h);

printf("The area of the triangle is: %.2f\n", triangleArea(b, h));

return 0;

}