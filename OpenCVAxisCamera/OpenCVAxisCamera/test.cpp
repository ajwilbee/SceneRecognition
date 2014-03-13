#include "opencv/cv.h"
#include "opencv/highgui.h"

using namespace cv;

int main(void)
{
	VideoCapture videoCapture("http://axis1.student.rit.edu/mjpg/video.mjpg");

	Mat img;
	Mat hsv;


	namedWindow("RAW", 1);
	namedWindow("HSV", 1);

	while (waitKey(10)!='ESC')
	{
		videoCapture >> img;
		
		cvtColor(img, hsv, CV_RGB2HSV);

		imshow("RAW", img);
		imshow("HSV", hsv);

	}

	
}