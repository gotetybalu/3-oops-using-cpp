Default Constructor
-----------------------
   1)Takes no arguments.
   2)Initializes objects with default values.
   3)Can be user-defined or compiler-provided.


#include <iostream>
using namespace std;
class A {
public:
    int x;
    A() {  // Default constructor
        x = 0;
    }
    void display()
    {
        cout<< x;
    }
};


int main() {
    A a1;
    a1.display();

    return 0;
}

