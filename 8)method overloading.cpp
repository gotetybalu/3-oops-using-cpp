#include<iostream>
using namespace std;
class calculator
{
    public:
        int add(int a, int b)
        {
            return a+b;
        }
    public:
        float add(float a, float b)
        {
            return a+b;
        }
    public:
        double add(double a, double b)
        {
            return a+b;
        }
};
int main()
{
    calculator c;
    cout<<c.add(1,3)<<endl;
    cout<<c.add(2.5,3.5)<<endl;
}
