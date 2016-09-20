//
//  main.cpp
//  opencv_test
//
//  Created by Apple on 15/09/16.
//  Copyright © 2016 Apple. All rights reserved.
//
#include "opencv2/imgproc/imgproc.hpp"
#include "opencv2/highgui/highgui.hpp"

using namespace std;
using namespace cv;

Mat img; Mat dst;
Mat b_image;
char window_name1[] = "Unprocessed Image";
char window_name2[] = "Processed Image";

int main( int argc, char** argv )
{
    /// Load the source image
    img = imread( argv[1], 1 );
    cvtColor(img,dst,CV_BGR2GRAY);
    namedWindow( window_name1, WINDOW_AUTOSIZE );
    imshow("Unprocessed Image",img);
    namedWindow( window_name2, WINDOW_AUTOSIZE );
    imshow("Processed Image",dst);
    threshold(dst,b_image,128,255,THRESH_BINARY);
    namedWindow("Binary image", WINDOW_AUTOSIZE);
    imshow("Binary image",b_image);
    waitKey();
    return 0;
}