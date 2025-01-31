// to add two distance in feet and inches

#include<iostream>
// ashish bhattarai

using namespace std;

class Distance
{
    float feet;
    float inches;
    public:
    void getdata()
    {
        cout<<"ënter the distance in feet and inches:"<<endl;
        cin>>feet>>inches;
    }
    void showdata()
    {
        cout<<"sum of two distance"<<feet<<"feet"<<inches<<"inches"<<endl;
    }
    void adddistance(Distance d1, Distance d2)
    {
    int temp;
    temp=(d1.feet+d2.feet)*12+(d1.inches + d2.inches);
    this->feet=temp/12;
   this-> inches=temp%12;
}
};
int main()
{
    Distance d1,d2,d3;
    d1.getdata();
    d2.getdata();
    d3.adddistance(d1,d2);
    d3.showdata();
    return 0;
}