#include <iostream>

using namespace std;

class Shape{
    protected:
        int height;
        int width;
    public:
        Shape(int height, int width){
            this->height = height;
            this->width = width;
        }
        virtual void area(){
            cout<<"Area of shape"<<endl;
        }
        //virtual void area()=0;//Abstract method
};

class Rectangle : public Shape{
    public:
        Rectangle(int height, int width):Shape(height,width){};//Javadaki super constructor
        void area(){//Override
            cout<<"Area of rectangle = "<<height * width<<endl;
        }
};

class Triangle : public Shape{
    public:
        Triangle(int height, int width):Shape(height,width){};
        void area(){
            cout<<"Area of Triangle = "<<(height * width) / 2<<endl;
        }
};
int main()
{
    Rectangle r(4,5);
    r.area();
    Triangle t(4,5);
    t.area();
    Shape *s1,*s2;
    s1 = &r;//Upcasting
    s1->area();
    s2 = &t;
    s2->area();
    return 0;
}
