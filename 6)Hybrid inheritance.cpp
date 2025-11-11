#include <iostream>
using namespace std;

// Base class
class A {
public:
    void displayA() 
    {
        cout << "Class A: Base class" << endl;
    }
};

// Derived from A (first level)
class B : public A {
public:
    void displayB() {
        cout << "Class B: Derived from A" << endl;
    }
};

// Another class derived from A (hierarchical)
class C : public A {
public:
    void displayC() {
        cout << "Class C: Derived from A" << endl;
    }
};

// Class D inherits from both B and C (multiple inheritance)
class D : public B, public C {
public:
    void displayD() {
        cout << "Class D: Derived from both B and C" << endl;
    }
};

int main() {
    D obj;
    // obj.displayA(); // ❌ This will cause ambiguity (A is inherited twice)
    
    // To resolve ambiguity, specify the path:
    obj.B::displayA(); // Access A through B
    obj.C::displayA(); // Access A through C
    
    obj.displayB();
    obj.displayC();
    obj.displayD();
    
    return 0;
}
