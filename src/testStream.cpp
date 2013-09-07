#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <ros/ros.h>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <cv_bridge/cv_bridge.h>
#include <sys/stat.h>
#include <sensor_msgs/image_encodings.h>
using namespace std;
using namespace cv;
int main()
{
	VideoCapture cap(1);
	namedWindow("left",1);
	Mat frameIma;
	while(1)
	{
		cap>>frameIma;
		imshow("left",frameIma);
		waitKey(30);
	}
}