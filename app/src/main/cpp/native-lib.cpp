#include <jni.h>
#include <string>
#include "cubic_log.h"

#define CUBIC_LOG_TAG "OpenCV"


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