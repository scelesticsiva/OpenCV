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
char window_name1[] = "Unprocessed Image";
char window_name2[] = "Processed Image";

int main( int argc, char** argv )
{
    /// Load the source image
    img = imread( argv[1], 1 );
    resize(img,dst,Size(),0.5,0.5,INTER_LINEAR);
    namedWindow( window_name1, WINDOW_AUTOSIZE );
    imshow("Unprocessed Image",img);
    
    //dst = src.clone();
    //GaussianBlur( src, dst, Size( 15, 15 ), 0, 0 );
    //cvtColor(img,dst,CV_BGR2GRAY);
    
    namedWindow( window_name2, WINDOW_AUTOSIZE );
    imshow("Processed Image",dst);
    
    waitKey();
    return 0;
}