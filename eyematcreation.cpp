#include <opencv2/core/core.hpp>
#include <iostream>

using namespace cv;
using namespace std;

int main(int argc, char** argv)
{
	Mat img(2, 2, CV_8UC3, Scalar(126, 0, 255));
	cout << "img = \n " << img << "\n\n";
	Mat E = Mat::eye(4, 4, CV_64F);
	cout << "E = " << endl << " " << E << endl << endl;
	Mat O = Mat::ones(2, 2, CV_32F);
	cout << "O = " << endl << " " << O << endl << endl;
	Mat Z = Mat::zeros(3, 3, CV_8UC1);
	cout << "Z = " << endl << " " << Z << endl << endl;
	return 0;
}