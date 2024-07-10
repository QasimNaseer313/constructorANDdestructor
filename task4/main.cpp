/*
Observe the output and create a class named "Rectangle" with attributes for length and width.
Implement a constructor using an initialization list to set initial values for these attributes.
Instantiate objects of this class and observe the order of execution of the constructor and destructor.
• Continue the "Rectangle" class from Task 4 to include multiple constructors for different
initialization scenarios (e.g., default, square, rectangle). Instantiate objects using each
constructor and observe the execution of the corresponding constructor and destructor.
*/


#include <iostream>
using namespace std;
class Rectangle{
int length;
int width;

public:

    Rectangle(){
    cout<<"default rectangle object is created"<<endl;
    }



    Rectangle(int x, int y){
    length=x;
    width=y;
    cout<<"rectangle object created with length "<<length <<" and width :"<<width<<endl;
    }

    Rectangle(int side){
    length=side;
    width=side;
    cout<<"square object created with side: "<<length*width<<endl;
    }

    ~Rectangle(){
    cout<<"Rectangle object is destroyed"<<endl;
    }

};

int main()
{
    Rectangle p;
    Rectangle q(5,3);
    Rectangle r(2);
    p.~Rectangle();
   q.~Rectangle();
    r.~Rectangle();


    return 0;
}
