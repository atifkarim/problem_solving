//#include<iostream>
//using namespace std;

//int main(){
//  cout<<"hi openCV"<<endl;
//  return 0;
//}


#include "opencv2/opencv.hpp"

//using namespace std;
using namespace cv;

int main(int, char**)
{
    VideoCapture cap(0); // open the default camera
    if(!cap.isOpened())  // check if we succeeded
        return -1;

    namedWindow("Video",1);
    while(1)
    {
        Mat frame;
        cap >> frame;         // get a new frame from camera
        imshow("Video", frame);

        // Press 'c' to escape
        if(waitKey(30) == 'c') break;
    }
    return 0;
}
