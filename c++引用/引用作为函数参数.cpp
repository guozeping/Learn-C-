#include <iostream>
using namespace std;

void swap1(int a, int b);
void swap2(int *p1, int *p2);
void swap3(int &r1, int &r2);

int main(){
    int num1, num2;
    cout << "Input two integers: ";
    cin >> num1 >> num2;
    swap1(num1, num2);
    cout << num1 << " " << num2 << endl;
    
}