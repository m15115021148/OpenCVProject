#include <jni.h>
#include <string>

extern "C" JNIEXPORT jstring JNICALL
Java_com_sensology_opencvproject_MainActivity_stringFromJNI(
        JNIEnv* env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}

extern "C"
JNIEXPORT jdouble JNICALL
Java_com_sensology_opencvproject_OpenCVUtil_playVideo(JNIEnv *env, jobject instance,
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