#include <iostream>
using namespace std;
class CShop
{
public:
    CShop(int size);
    void ShowSize();
    static void ShowPrice(); //声明静态成员函数用来显示价格
    static int ChangePrice(int price); //声明静态成员函数用来更改价格
private:
    int m_size; //声明一个私有成员变量
    static int m_price; //声明一个私有静态成员变量
};
CShop::CShop(int size)
{
    m_size = size;
}

void CShop::ShowSize()
{
    cout << "商品数量:" << m_size << endl;
}
void CShop::ShowPrice()
{
    cout << "商品价格:" << m_price << endl;
}
int CShop::ChangePrice(int price)
{
    m_price = price;
    return m_price;
}
int CShop::m_price = 100; //初始化静态成员变量
 
int main(int argc, char * argv[])
{
    CShop::ShowPrice();
    CShop::ChangePrice(200);
    CShop::ShowPrice();
    CShop shop(50);
 
    shop.ShowSize();
    shop.ShowPrice();
 
    return 0;
}