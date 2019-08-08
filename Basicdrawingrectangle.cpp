#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc.hpp>
using namespace cv;
nt main()
{
	// Create black empty images
	Mat image = Mat::zeros(400, 400, CV_8UC3);

	// Draw a line 
	line(image, Point(15, 20), Point(70, 50), Scalar(110, 220, 0), 2, 8);
	imshow("Image", image);

	waitKey(0);
	return(0);
}