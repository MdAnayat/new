#include<iostream>
using namespace std;
class Box{
    private:
        int length;
        int width;
        int height;

    public:
        // Constructors
        Box() : length(0), width(0), height(0) {} // Constructor
        Box(int l, int w, int h): length(l), width(w), height(h) {} // Initialize the member variables to specific values


        // Getters
        int getLength() const {
            return length;
        }
        int getWidth() const {
            return width;
        }
        int getHeight() const {
            return height;
        }


        // Setters
        void setLength(int l){
            length = l;
        }
        void setWidth(int w){
            width = w;
        }
        void setHeight(int h){
            height = h;
        }


        // Calculate Volume
        int getVolume(int length, int width, int height){
            int volume = length * width * height;

            return volume;
        }



};





int main(){



    Box a(3, 2, 5), b;

    cout << "Box 1 : ";
    cout << "Volume: "<<a.getVolume(a.getLength(), a.getWidth(), a.getHeight())<<endl;


    b.setLength(5);
    b.setWidth(4);
    b.setHeight(7);

    cout << "Box 2 : ";
    cout <<"Volume: "<<b.getVolume(b.getLength(), b.getWidth(), b.getHeight())<<endl;

    return 0;

}
