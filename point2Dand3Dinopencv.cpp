#include <opencv2/core/core.hpp>
#include <iostream>

using namespace cv;
using namespace std;

int main(int argc, char** argv)
{
	Point2f P(5, 1);
	cout << "Point (2D) = " << P << endl << endl;
	Point3f P3f(2, 6, 7);
	cout << "Point (3D) = " << P3f << endl << endl;
	return 0;
}