
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>

using namespace cv;
using std::string;

int main(int argc, char** argv)
{
	string filename = "768x576.avi";
	VideoCapture capture(filename);
	Mat frame;

	if (!capture.isOpened())
		throw "Error when reading steam_avi";
	
	// Default resolution of the frame is obtained.The default resolution is system dependent. 
	int frame_width = capture.get(CV_CAP_PROP_FRAME_WIDTH);
	int frame_height = capture.get(CV_CAP_PROP_FRAME_HEIGHT);
	
	cv::VideoWriter output("outcpp.avi", CV_FOURCC('M', 'J', 'P', 'G'), 10, Size(frame_width, frame_height));

	namedWindow("w", 1);
	for (; ; )
	{
		capture >> frame;
		if (frame.empty())
			break;
		imshow("w", frame);
		
		//output.write(frame);
		output << frame;

		waitKey(20); // waits to display frame

		// how to exit
	}

	output.release();

	waitKey(0); // key press to close window
	// releases and window destroy are automatic in C++ interface
}