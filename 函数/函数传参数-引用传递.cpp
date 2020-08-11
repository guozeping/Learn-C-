#include <iostream>
using namespace std;


int main(){
    void swap(int &,int &);
    int i=3,j=5;
    swap(i,j);
    cout << i <<endl;
    cout << j <<endl;
    return  0;
}

void swap(int &a,int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
    b = 10;
    cout << a << endl;
    cout << b << endl;

}



