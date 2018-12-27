#include <jni.h>
#include "cubic_log.h"

#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <fstream>

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

#define CUBIC_LOG_TAG "OpenCV"

using namespace std;
using namespace cv;
using namespace cv::detail;

extern "C"
JNIEXPORT jstring JNICALL
Java_com_sensology_opencvproject_OpenCVUtil_stringFromJNI(JNIEnv *env, jclass type) {
    std::string hello = "Hello from C++";
    LOGD("test hello log = %s",hello.c_str());
    return env->NewStringUTF(hello.c_str());
}

extern "C"
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