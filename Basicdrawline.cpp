#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc.hpp>
using namespace cv;
int main()
{
	// Create black empty images
	Mat image = Mat::zeros(400, 400, CV_8UC3);

	// Draw a rectangle 
	line(image, Point(15, 20), Point(70, 50), Scalar(110, 220, 0), 2, 8);//void line(Mat& img, Point pt1, Point pt2, const Scalar& color, int thickness=1, int lineType=8, int shift=0)
	imshow("Image", image);

	waitKey(0);
	return(0);
}