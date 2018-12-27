#include <jni.h>
#include "cubic_log.h"

#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <fstream>

#include <sys/stat.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <errno.h>

#include "opencv2/highgui/highgui.hpp"
#include "opencv2/calib3d/calib3d.hpp"
#include "opencv2/imgproc/imgproc.hpp"
#include "opencv2/features2d/features2d.hpp"
#include <opencv2/opencv.hpp>

#include "opencv2/opencv_modules.hpp"
#include <opencv2/core/utility.hpp>
#include "opencv2/imgcodecs.hpp"
#include "opencv2/highgui.hpp"
#include "opencv2/stitching/detail/autocalib.hpp"
#include "opencv2/stitching/detail/blenders.hpp"
#include "opencv2/stitching/detail/timelapsers.hpp"
#include "opencv2/stitching/detail/camera.hpp"
#include "opencv2/stitching/detail/exposure_compensate.hpp"
#include "opencv2/stitching/detail/matchers.hpp"
#include "opencv2/stitching/detail/motion_estimators.hpp"
#include "opencv2/stitching/detail/seam_finders.hpp"
#include "opencv2/stitching/detail/warpers.hpp"
#include "opencv2/stitching/warpers.hpp"

#include <opencv2/core.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/core/ocl.hpp>
#include <opencv/cv.hpp>

#ifdef CUBIC_LOG_TAG
#undef CUBIC_LOG_TAG
#endif
#define CUBIC_LOG_TAG "OpenCV"

using namespace std;
using namespace cv;


JNIEXPORT jdouble JNICALL
Java_com_sensology_opencvproject_OpenCVUtil_playVideo(JNIEnv *env, jobject type,
                                                      jstring firstPath_, jstring secondPath_,
                                                      jstring path_) {
    const char *firstPath = env->GetStringUTFChars(firstPath_, 0);
    const char *secondPath = env->GetStringUTFChars(secondPath_, 0);
    const char *path = env->GetStringUTFChars(path_, 0);

    // TODO

    env->ReleaseStringUTFChars(firstPath_, firstPath);
    env->ReleaseStringUTFChars(secondPath_, secondPath);
    env->ReleaseStringUTFChars(path_, path);

    return 1;
}


JNIEXPORT jintArray JNICALL
Java_com_sensology_opencvproject_OpenCVUtil_gray(JNIEnv *env, jclass type, jintArray array_,
                                                 jint width, jint height) {
    int64 time = cv::getTickCount();

    jint *array = env->GetIntArrayElements(array_, JNI_FALSE);

    if (array == NULL){
        return 0;
    }

    Mat imgData(width,height,CV_8UC4,array);

    uchar* ptr = imgData.ptr(0);

    for(int i = 0; i < width * height; i ++){
        int grayScale = (int)(ptr[4*i+2]*0.299 + ptr[4*i+1]*0.587 + ptr[4*i+0]*0.114);
        ptr[4*i+1] = static_cast<uchar>(grayScale);
        ptr[4*i+2] = static_cast<uchar>(grayScale);
        ptr[4*i+0] = static_cast<uchar>(grayScale);
    }

    int size = width * height;
    jintArray result = env->NewIntArray(size);

    LOGD("image gray run time = %f",(cv::getTickCount()-time)/cv::getTickFrequency());

    env->SetIntArrayRegion(result, 0, size, array);
    env->ReleaseIntArrayElements(array_, array, 0);
    return result;
}