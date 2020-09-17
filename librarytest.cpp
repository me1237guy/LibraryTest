#include "librarytest.h"

LibraryTest::LibraryTest()
{
}

void LibraryTest::loadImage(QString filename)
{
    img = imread(filename.toStdString());
    if(!img.empty())
    {
        namedWindow("img", WINDOW_KEEPRATIO);
        imshow("img", img);
        waitKey();
    }
}
