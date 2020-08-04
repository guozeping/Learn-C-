#include <iostream>
using namespace std;

class Area
{
    public:
        virtual double getArea() = 0;
        void setHeight(int w){
            widget = w;
        };
        void setWidget(int h){
            height = h;
        };
    protected:
        int widget;
        int height;
};

class Rectangle: public Area{
    public:
        double getArea(){
            return widget*height;
        }
};

int main(){
    Rectangle rect;
    rect.setHeight(8);
    rect.setWidget(9);

    cout << "面积" << rect.getArea() << endl;

    return 0;
}


