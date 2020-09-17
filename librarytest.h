#ifndef LIBRARYTEST_H
#define LIBRARYTEST_H

#include "LibraryTest_global.h"
#include <opencv2/opencv.hpp>
#include <QString>
using namespace cv;
class LIBRARYTEST_EXPORT LibraryTest
{
public:
    LibraryTest();
    void loadImage(QString filename);
private:
    Mat img;
};

#endif // LIBRARYTEST_H
