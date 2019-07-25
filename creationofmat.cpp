#include <opencv2/core/core.hpp>
#include <iostream>

using namespace cv;
using namespace std;

int main(int argc, char** argv)
{
	Mat img(2, 2, CV_8UC3, Scalar(126, 0, 255));
	cout << "img = \n " << img << "\n\n";
	return 0;
}