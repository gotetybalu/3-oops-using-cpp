Parameterized Constructor
--------------------------
    Takes arguments to initialize the object with specific values.

  
#include <iostream>
using namespace std;
class A {
public:
    int x=0;
    A(int b) {  // Default constructor
        x = b;
    }
    void display()
    {
        cout<< x;
    }
};


int main() {
    A a1(20);
    a1.display();
}
