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

	/*namedWindow("Display window", WINDOW_AUTOSIZE); // Create a window for display.
	imshow("Display window", image);  // Show our image inside it.
	imwrite("output.jpg", image);
	waitKey(0); // Wait for a keystroke in the window
	return 0;
}*/
	Mat new_image = Mat::zeros(image.size(), image.type());
	double alpha = 1.0; /*< Simple contrast control */
	int beta = 0;       /*< Simple brightness control */
	cout << " Basic Linear Transforms " << endl;
	cout << "-------------------------" << endl;
	cout << "* Enter the alpha value [1.0-3.0]: "; cin >> alpha;
	cout << "* Enter the beta value [0-100]: ";    cin >> beta;
	/*for (int y = 0; y < image.rows; y++) {
		for (int x = 0; x < image.cols; x++) {
			for (int c = 0; c < image.channels(); c++) {
				new_image.at<Vec3b>(y, x)[c] =
					saturate_cast<uchar>(alpha * image.at<Vec3b>(y, x)[c] + beta);
			}
		}
	}*/
	image.convertTo(new_image, -1, alpha, beta);
	imshow("Original Image", image);
	imshow("New Image", new_image);
	waitKey();
	return 0;
}