#include <iostream>
#include <cmath>
using namespace std;

#define PI 3.14159

class POLAR;
class RECTANGLE{
    float x, y;
public:
    RECTANGLE(){
        x = 0;
        y = 0;
    }

    RECTANGLE(float a, float b){
        x = a;
        y = b;
    }

    RECTANGLE(POLAR p);

    void display()
    {
        cout << "Rectangular coordinates = ("
             << x << ", " << y << ")" << endl;
    }

    friend class POLAR;
};


class POLAR
{
    float r, theta;

public:
    POLAR()
    {
        r = 0;
        theta = 0;
    }

    POLAR(float radius, float angle)
    {
        r = radius;
        theta = angle;
    }

    // Conversion constructor: RECTANGLE to POLAR
    POLAR(RECTANGLE p)
    {
        r = sqrt(p.x * p.x + p.y * p.y);

        theta = atan2(p.y, p.x) * 180 / PI;
    }

    void display()
    {
        cout << "Polar coordinates = ("
             << r << ", " << theta << " degrees)" << endl;
    }

    friend class RECTANGLE;
};


// Definition of RECTANGLE conversion constructor
RECTANGLE::RECTANGLE(POLAR p)
{
    x = p.r * cos(p.theta * PI / 180);
    y = p.r * sin(p.theta * PI / 180);
}


int main()
{
    RECTANGLE r1(3, 4);

    cout << "Original point:" << endl;
    r1.display();

    // Rectangle to Polar
    POLAR p1 = r1;

    cout << "\nAfter conversion to Polar:" << endl;
    p1.display();

    // Polar to Rectangle
    RECTANGLE r2 = p1;

    cout << "\nAfter conversion back to Rectangle:" << endl;
    r2.display();

    return 0;
}