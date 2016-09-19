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

Mat src; Mat gray;
char window_name1[] = "Unprocessed Image";
char window_name2[] = "Processed Image";

int main( int argc, char** argv )
{
    src = imread( argv[1], 1 );
    
    namedWindow( window_name1, WINDOW_AUTOSIZE );
    imshow("Unprocessed Image",src);
    
    gray.create (src.rows, src.cols, CV_8UC1);
    cvtColor(src, gray, CV_BGR2GRAY);
    
    namedWindow( window_name2, WINDOW_AUTOSIZE );
    imshow("Processed Image",gray);
    
    waitKey();
    return 0;
}