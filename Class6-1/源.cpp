#include <iostream>
#include <opencv2/opencv.hpp>
using namespace cv;
using namespace std;
int main()
{
	Mat frame = imread("D:\\a\\2.jpg");
	Mat detectMat;
	Mat detectMat2;
	Mat dx;
	Mat dy;
	Sobel(frame,dx, CV_16SC1,1,0);
	Sobel(frame,dy, CV_16SC1,0,1);
	Canny(frame, detectMat, 20,60);
	Canny(dx, dy, detectMat2,20,60);
	imshow("frame", frame);
	imshow("now", detectMat);
	imshow("now2", detectMat2);

	waitKey(0);
}