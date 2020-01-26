#include <iostream>
#include <opencv.hpp>

using namespace std;
using namespace cv;

int main(){

	Mat src;

	src = imread("F:/Pictures/dapper_kutku.jpg");

	if(src.empty()){
		cout << "Failed to load image. Please check file location and try again." << endl;
	}
	else{
		cout << "Image successfully loaded!" << endl;
		cout << "Image size: " << src.size().width << " x " << src.size().height << endl;
	}

    cin.clear(); cin.ignore(); cin.get();
    return 0;
}
