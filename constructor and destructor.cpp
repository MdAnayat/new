#include<iostream>
using namespace std;

class Box
{
    public:
    double length=10;
    double height=10;
    double width=10;
    double volume;
    Box();//constructor
    //~Box();//Destructor


};
   Box::Box()

   {
     volume = (height * length * width);
   }
#if 0
   Box::~Box()
     {
       cout << "Object is being deleted" << endl;
     }
#endif
int main()

{

    Box b;
   cout << "Volume of Box : " << b.volume <<endl;
   return 0;
}
