#include<iostream>
using namespace std;

class Box
{
    public:
    double length;
    double height;
    double width;
    double getVolume(void);//Function declaration


};
    double Box::getVolume(void)//Function definition
    {
      return height * length * width;
    }
int main()

{
    double volume;
    Box box1;
    box1.height=5;
    box1.width=6;
    box1.length=7;

    volume=box1.getVolume();
   cout << "Volume of Box : " << volume <<endl;
   return 0;
}
