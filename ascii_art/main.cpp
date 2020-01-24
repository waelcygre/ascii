#include <iostream>
#include <opencv2/highgui/highgui.hpp>

using namespace std;
using namespace cv;

int main(){

	Mat src;

	src = imread("F:/Pictures/dapper_kutku.jpg");

	cout << "Image size: " << src.size().width << " x " << src.size().height << endl;

    cin.clear(); cin.ignore(); cin.get();
    return 0;
}
