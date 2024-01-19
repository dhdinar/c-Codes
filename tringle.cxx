#include <iostream>
using namespace std;
class tringle
{
    double len, height;

public:
    tringle(double len, double height);
    double area();
    ~tringle()
    {
        cout << "Calculated" << endl;
    }
};
tringle::tringle(double l, double h)
{
    len = l;
    height = h;
}
double tringle::area()
{
    return 0.5 * len * height;
}

int main()
{
    double len, height;
    cin >> len >> height;

    tringle obj1(len, height);
    cout << obj1.area() << endl;
}