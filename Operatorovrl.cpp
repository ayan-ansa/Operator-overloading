#include <iostream>
using namespace std;
class Complex
{
    int real;
    int imag;

public:
    Complex(int x = 0, int y = 0)
    {
        real = x;
        imag = y;
    }
    Complex operator+(Complex ob)
    {
        Complex res;
        res.imag = imag + ob.imag;
        res.real = real + ob.real;
        return res;
    }
    void display()
    {
        cout << "The value is " << real << " + " << imag << "i" << endl;
    }
};
int main()
{
    Complex o1(3, 4);
    Complex o2(5, 7);
    Complex o3 = o1 + o2;
    o3.display();
    return 0;
}