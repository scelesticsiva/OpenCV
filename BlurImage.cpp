//
//  GRAYSCALE.cpp
//
//
//  Created by Changlong Jiang on 9/16/16.
//
//

#include "opencv2/imgproc/imgproc.hpp"
#include "opencv2/highgui/highgui.hpp"
#include "opencv2/core/core.hpp"

using namespace std;
using namespace cv;

Mat src; Mat gray; Mat dst;
char window_name1[] = "Unprocessed Image";
char window_name2[] = "Blur Image";
char window_name3[] = "GrayScale Image";

int main( int argc, char** argv )
{
    src = imread( argv[1], 1 );
    
    namedWindow( window_name1, WINDOW_AUTOSIZE );
    imshow("Unprocessed Image",src);
    
    dst = src.clone();
    GaussianBlur( src, dst, Size( 15, 15 ), 0, 0 );
    
    namedWindow( window_name2, WINDOW_AUTOSIZE );
    imshow("Blur Image",dst);
    
    gray.create (src.rows, src.cols, CV_8UC1);
    cvtColor(src, gray, CV_BGR2GRAY);
    
    namedWindow( window_name3, WINDOW_AUTOSIZE );
    imshow("GrayScale Image",gray);
    
    waitKey();
    return 0;
}