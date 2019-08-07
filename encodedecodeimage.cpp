#include <opencv2/core.hpp>
//#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
//#include <opencv2/imgproc.hpp>
#include <iostream>
#include <string.h>

using namespace cv;
using namespace std;
int main(int argc, char** argv)
{
	//String imageName("..C:/Users/Anayat/Documents/Visual Studio 2019/Backup Files/ConsoleApplication2/data/HappyFish.jpg"); // by default
	/*if (argc > 1)
	{
		imageName = argv[1];
	}*/
	Mat I, j, K, l;
	I = imread("C:/output/HappyFish.jpg", IMREAD_COLOR); // Read the file
	if (I.empty())                      // Check for invalid input
	{
		cout << "Could not open or find the image" << std::endl;
		return -1;
	}
	
	
	vector<uchar>buf;//buffer for coding
	//vector<int> param(2);
	//param[0] = cv::IMWRITE_JPEG_QUALITY; 
	//param[1] = 80;//default(95) 0-100
	l = imencode(".jpg", I, buf);

	j = imdecode(buf, IMREAD_COLOR);
	namedWindow("Display window", WINDOW_AUTOSIZE); // Create a window for display.
	imshow("Display window", I);  // Show our image inside it.
	imshow("output", j);
	imwrite("output.jpg", K);
	waitKey(0); // Wait for a keystroke in the window
	return 0;
}