
#include "opencv2/opencv.hpp"
using namespace cv;
using namespace std;

int main()
{
	string path;
	cout << " enter the path of image" ;
	cout << " like as : " <<endl;
	cout << "./images/image.webp" << endl;
	cin >> path;
	Mat src =imread(path);
	if (src.empty())
	{
		cout << "error !!! no image....";
		return -1;
	}
	double angle;
	cout << " enter the angle image is rotated" << endl;
	cin >> angle;
	namedWindow("image", WINDOW_AUTOSIZE);
	imshow("Original image", src);
       Point2f center((src.cols - 1) / 2.0, (src.rows - 1) / 2.0);
	Mat rot = getRotationMatrix2D(center, angle, 1.0);
	Rect2f bbox = RotatedRect(Point2f(), src.size(), angle).boundingRect2f();
	rot.at<double>(0, 2) += bbox.width / 2.0 - src.cols / 2.0;
	rot.at<double>(1, 2) += bbox.height / 2.0 - src.rows / 2.0;
     Mat dst;
	warpAffine(src, dst, rot, bbox.size());
	imwrite("rotated_image.webp", dst);
	imshow("Rotate Image", dst);
	waitKey(0);
    return 0;
}