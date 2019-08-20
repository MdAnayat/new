#include <opencv2/core.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <iostream>
#include <string>
#include <opencv2/imgproc/imgproc.hpp>
using namespace cv;
using namespace std;
int main(int argc, char** argv)
{
	//String imageName("..C:/Users/Anayat/Documents/Visual Studio 2019/Backup Files/ConsoleApplication2/data/HappyFish.jpg"); // by default
	/*if (argc > 1)
	{
		imageName = argv[1];
	}*/
	Mat image1;
	Mat image2;
	Mat image3;
	Mat image4;
	image1 = imread("C:/output/HappyFish.jpg", IMREAD_COLOR);// Read the file
	image2 = imread("C:/output/aloeR.jpg", IMREAD_COLOR);// Read the file
	image3 = imread("C:/output/apple.jpg", IMREAD_COLOR);// Read the file
	image4 = imread("C:/output/baboon.jpg", IMREAD_COLOR);// Read the file
	if (image1.empty())                      // Check for invalid input
	{
		cout << "Could not open or find the image" << std::endl;
		return -1;
	}
	Size size(640,360);
	Mat dst1;
	Mat dst2;
	Mat dst3;
	Mat dst4;
	cv::resize(image1,dst1,size);
	cv::resize(image2, dst2, size);
	cv::resize(image3, dst3, size);
	cv::resize(image4, dst4, size);

	Rect ROI(0,360,640,360);
	Rect ROI1(0, 0, 640, 360);
	Rect ROI2(640, 0, 640, 360);
	Rect ROI3(640,360, 640, 360);
	Mat image = Mat::zeros(720,1280, CV_8UC3);
	  dst1.copyTo(image(ROI));
	  dst2.copyTo(image(ROI1));
	  dst3.copyTo(image(ROI2));
	  dst4.copyTo(image(ROI3));

	/*rectangle(dst, Point(0, 0), Point(640, 360), Scalar(255,0,0), 1,8,0);
	rectangle(dst, Point(0, 640), Point(640, 360), Scalar(255,0,0), 1, LINE_8);
	rectangle(dst, Point(1280, 0), Point(640, 360), Scalar(255,0,0), 1, LINE_8);
	rectangle(dst, Point(1280, 640), Point(640, 360), Scalar(255, 0, 0), 1, LINE_8);
	*/
	imshow("window",image);

	waitKey(0); // Wait for a keystroke in the window
	return 0;
}