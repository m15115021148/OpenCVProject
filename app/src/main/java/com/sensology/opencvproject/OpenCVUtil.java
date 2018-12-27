package com.sensology.opencvproject;

/**
 * Created by ${chenM} on 2018/12/27.
 */
public class OpenCVUtil {

    static {
        System.loadLibrary("native-lib");
    }

    public static native int[] gray(int[] array,int width,int height);

    public native double playVideo(String firstPath,String secondPath,String path);
}
