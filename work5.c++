#include <iostream>
using namespace std;

class Volume
{
public:
    float volume(float side)
    {
        return side * side * side;
    }

    float volume(float r, float h)
    {
        return 3.1416 * r * r * h;
    }
};

int main()
{
    Volume v;

    cout << "Cube Volume = " << v.volume(3) << endl;
    cout << "Cylinder Volume = " << v.volume(2,5);

    return 0;
}