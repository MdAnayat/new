#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc.hpp>
using namespace cv;
int main()
{
	// Create black empty images
	Mat image = Mat::zeros(400, 400, CV_8UC3);

	// Draw a rectangle 
	circle(image, Point(200, 200), 32.0, Scalar(0, 0, 255), 1, 8);//void circle(Mat& img, Point center, int radius, const Scalar& color, int thickness=1, int lineType=8, int shift=0)
	imshow("Image", image);

	waitKey(0);
	return(0);
}