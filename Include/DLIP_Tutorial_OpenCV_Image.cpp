#include <iostream>
#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

int main()
{
	/*  read image  */
	String HGU_logo = "../../Image/HGU_logo.jpg";
	Mat src = imread(HGU_logo);

	if (src.empty())/// Load image check
	{
		cout << "File Read Failed : src is empty" << endl;
		waitKey(0);
	}

	Mat src_gray = imread(HGU_logo, 0);  // read in grayscale

	/*  write image  */
	String fileName = "writeImage.jpg";
	imwrite(fileName, src);

	/*  display image  */
	namedWindow("src", WINDOW_AUTOSIZE);
	imshow("src", src);

	namedWindow("src_gray", WINDOW_AUTOSIZE);
	imshow("src_gray", src_gray);

	waitKey(0);
}