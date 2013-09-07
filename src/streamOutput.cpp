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
	VideoCapture cap;
	namedWindow("left",1);
	namedWindow("right",1);
	int k;
	Mat leftImage;
	Mat rightImage;
	while(1)
	{
	while(1)
	{
		cap.open(2);
		if(!cap.isOpened())
		{
			return(-1);
		}
		for(int i=1;i<15;i++)
		{
			cap>>leftImage;
		}
		imshow("left",leftImage);
		waitKey(30);
		cap.release();
		break;
	}
	while(1)
	{
		cap.open(1);
		if(!cap.isOpened())
		{
			return(-1);
		}
		for(int i=1;i<15;i++)
		{
			cap>>rightImage;
		}
		imshow("right",rightImage);
		waitKey(30);
		cap.release();
		break;
	}
	}
	return(0);
}