#include<iostream>
using namespace std;
 class complex
 {
     public:
        float real,img;
        complex(float r=0,float i=0) // constructor:
        {
            real=r;
            img=i;
        }
        complex operator -(const complex&c)
        {
            complex temp;
            temp.real=real-c.real;
            temp.img=img-c.img;
            return temp;
        }
        void display()
        {
            cout << real << " + " << img << "i" <<"="endl;
        }
        
 };
 int main()
 {
     complex c1(5.5,4.5),c2(2.0,1.5);
     complex c3;
     c3=c1-c2;
     cout<<"Result of c1-c2 is"<<endl;
     c3.display();
 }
