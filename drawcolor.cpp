#include <opencv2/core.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/highgui.hpp>
#define w 200

using namespace cv;

void MyEllipse(Mat img, double angle);
void MyFilledCircle(Mat img, Point center);
void MyPolygon(Mat img);
void MyLine(Mat img, Point start, Point end);

int main(void) {
	char atom_window[] = "Drawing 1: Atom";
	char rook_window[] = "Drawing 2: Rook";
	Mat image = Mat::zeros(300, 300, CV_8UC3);
	
	//rectangle(image, Point(0, 0), Point(400, 400), Scalar(255, 255, 255), FILLED, LINE_8);
	rectangle(image, Point(0,0), Point(100,100), Scalar(128, 128, 255),	FILLED,	LINE_8);

	//circle(image, Point(0,0), 100,	Scalar(205, 205, 205),	FILLED,	LINE_8);

	rectangle(image, Point(100, 0), Point(200, 100), Scalar(160, 0, 0), FILLED, LINE_8);
	//circle(image, Point(200, 0), 100, Scalar(205, 205, 205), FILLED, LINE_8);
	rectangle(image, Point(200, 0), Point(300, 100), Scalar(255, 255, 255), FILLED, LINE_8);
	MyPolygon(image);

	imshow("window", image);
	moveWindow("window", 0, 200);
	
	waitKey(0);
	return(0);
}
void MyEllipse(Mat img, double angle)
{
	int thickness = 2;
	int lineType = 8;
	ellipse(img,
		Point(w / 2, w / 2),
		Size(w / 4, w / 16),
		angle,
		0,
		360,
		Scalar(255, 0, 0),
		thickness,
		lineType);
}
void MyFilledCircle(Mat img, Point center)
{
	circle(img,
		center,
		w / 32,
		Scalar(0, 0, 255),
		FILLED,
		LINE_8);
}
void MyPolygon(Mat img)
{
	int lineType = LINE_8;
	Point rook_points[1][20];
	rook_points[0][0] = Point(200,0);
	rook_points[0][1] = Point(300, 0);
	rook_points[0][2] = Point(300, 100);
	rook_points[0][3] = Point(200,0);
	
	const Point * ppt[1] = { rook_points[0] };
	int npt[] = { 20 };
	fillPoly(img,
		ppt,
		npt,
		1,
		Scalar(0, 221, 221),
		lineType);
}
void MyLine(Mat img, Point start, Point end)
{
	int thickness = 2;
	int lineType = LINE_8;
	line(img,
		start,
		end,
		Scalar(0, 0, 0),
		thickness,
		lineType);
}