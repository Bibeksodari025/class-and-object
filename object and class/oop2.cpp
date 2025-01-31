#include<iostream>
//
using namespace std;

class findmaximum
{
    float num1,num2,num3,max,min;
    public:
    void getdata()
    {
        cout<<"enter the three number:"<<endl;
        cin>>num1>>num2>>num3;
    }
    void calculate()
    {
        if((num1>num2)&&(num1>num3))
        {
            cout<<"the num1 is maximum"<<num1<<endl;
        }
        if((num2>num3)&&(num2>num1))
        {
            cout<<"the num2 is max"<<num2<<endl;
        }
        if((num3>num1)&&(num3>num2))
        {
            cout<<"the num3 is max"<<num3<<endl;
        }
    }
};
int main()
{
    findmaximum f;
    f.getdata();
    f.calculate();
    return 0;
}
