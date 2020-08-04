#include <iostream>
using namespace std;

namespace first_sapce{
void func(){
    cout << "Inside first_space" << endl;
}
}
namespace second_space{
void func(){
    cout << "Inside second_space" << endl;
}
}

int main()
{
    first_sapce::func();
    second_space::func();

    return 0;
}

