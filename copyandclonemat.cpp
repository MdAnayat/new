#include <opencv2/core.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <iostream>
#include <string>
using namespace cv;
using namespace std;
int main(int argc, char** argv)
{
	//String imageName("..C:/Users/Anayat/Documents/Visual Studio 2019/Backup Files/ConsoleApplication2/data/HappyFish.jpg"); // by default
	/*if (argc > 1)
	{
		imageName = argv[1];
	}*/
	Mat image;
	image = imread("C:/output/HappyFish.jpg", IMREAD_COLOR); // Read the file
	if (image.empty())                      // Check for invalid input
	{
		cout << "Could not open or find the image" << std::endl;
		return -1;
	}
	Mat D(image, Rect(10, 10, 100, 100));
	//Mat E = image(Range::all(), Range(1, 3));
	Mat F = image.clone();
	Mat G;
	D.copyTo(G);
	namedWindow("Display window",WINDOW_NORMAL); // Create a window for display.
	imshow("Display window", G);  // Show our image inside it.
	imwrite("output.jpg", G);
	waitKey(0); // Wait for a keystroke in the window
	return 0;
}