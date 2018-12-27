# For more information about using CMake with Android Studio, read the
# documentation: https://d.android.com/studio/projects/add-native-code.html

# Sets the minimum version of CMake required to build the native library.

cmake_minimum_required(VERSION 3.4.1)

# ##################### OpenCV 环境 ############################
set(CMAKE_VERBOSE_MAKEFILE on)
include_directories(${CMAKE_SOURCE_DIR}/src/main/cpp/native/jni/include)

add_library(libopencv_aruco STATIC IMPORTED )
set_target_properties(libopencv_aruco PROPERTIES
        IMPORTED_LOCATION "${CMAKE_SOURCE_DIR}/src/main/cpp/native/staticlibs/${ANDROID_ABI}/libopencv_aruco.a")

add_library(libopencv_bgsegm STATIC IMPORTED )
set_target_properties(libopencv_bgsegm PROPERTIES
        IMPORTED_LOCATION "${CMAKE_SOURCE_DIR}/src/main/cpp/native/staticlibs/${ANDROID_ABI}/libopencv_bgsegm.a")

add_library(libopencv_bioinspired STATIC IMPORTED )
set_target_properties(libopencv_bioinspired PROPERTIES
        IMPORTED_LOCATION "${CMAKE_SOURCE_DIR}/src/main/cpp/native/staticlibs/${ANDROID_ABI}/libopencv_bioinspired.a")

add_library(libopencv_calib3d STATIC IMPORTED )
set_target_properties(libopencv_calib3d PROPERTIES
        IMPORTED_LOCATION "${CMAKE_SOURCE_DIR}/src/main/cpp/native/staticlibs/${ANDROID_ABI}/libopencv_calib3d.a")

add_library(libopencv_ccalib STATIC IMPORTED )
set_target_properties(libopencv_ccalib PROPERTIES
        IMPORTED_LOCATION "${CMAKE_SOURCE_DIR}/src/main/cpp/native/staticlibs/${ANDROID_ABI}/libopencv_ccalib.a")

add_library(libopencv_core STATIC IMPORTED )
set_target_properties(libopencv_core PROPERTIES
        IMPORTED_LOCATION "${CMAKE_SOURCE_DIR}/src/main/cpp/native/staticlibs/${ANDROID_ABI}/libopencv_core.a")

add_library(libopencv_datasets STATIC IMPORTED )
set_target_properties(libopencv_datasets PROPERTIES
        IMPORTED_LOCATION "${CMAKE_SOURCE_DIR}/src/main/cpp/native/staticlibs/${ANDROID_ABI}/libopencv_datasets.a")

add_library(libopencv_dnn STATIC IMPORTED )
set_target_properties(libopencv_dnn PROPERTIES
        IMPORTED_LOCATION "${CMAKE_SOURCE_DIR}/src/main/cpp/native/staticlibs/${ANDROID_ABI}/libopencv_dnn.a")

add_library(libopencv_dnn_objdetect STATIC IMPORTED )
set_target_properties(libopencv_dnn_objdetect PROPERTIES
        IMPORTED_LOCATION "${CMAKE_SOURCE_DIR}/src/main/cpp/native/staticlibs/${ANDROID_ABI}/libopencv_dnn_objdetect.a")

add_library(libopencv_dpm STATIC IMPORTED )
set_target_properties(libopencv_dpm PROPERTIES
        IMPORTED_LOCATION "${CMAKE_SOURCE_DIR}/src/main/cpp/native/staticlibs/${ANDROID_ABI}/libopencv_dpm.a")

add_library(libopencv_face STATIC IMPORTED )
set_target_properties(libopencv_face PROPERTIES
        IMPORTED_LOCATION "${CMAKE_SOURCE_DIR}/src/main/cpp/native/staticlibs/${ANDROID_ABI}/libopencv_face.a")

add_library(libopencv_features2d STATIC IMPORTED )
set_target_properties(libopencv_features2d PROPERTIES
        IMPORTED_LOCATION "${CMAKE_SOURCE_DIR}/src/main/cpp/native/staticlibs/${ANDROID_ABI}/libopencv_features2d.a")

add_library(libopencv_flann STATIC IMPORTED )
set_target_properties(libopencv_flann PROPERTIES
        IMPORTED_LOCATION "${CMAKE_SOURCE_DIR}/src/main/cpp/native/staticlibs/${ANDROID_ABI}/libopencv_flann.a")

add_library(libopencv_fuzzy STATIC IMPORTED )
set_target_properties(libopencv_fuzzy PROPERTIES
        IMPORTED_LOCATION "${CMAKE_SOURCE_DIR}/src/main/cpp/native/staticlibs/${ANDROID_ABI}/libopencv_fuzzy.a")

add_library(libopencv_hfs STATIC IMPORTED )
set_target_properties(libopencv_hfs PROPERTIES
        IMPORTED_LOCATION "${CMAKE_SOURCE_DIR}/src/main/cpp/native/staticlibs/${ANDROID_ABI}/libopencv_hfs.a")

add_library(libopencv_highgui STATIC IMPORTED )
set_target_properties(libopencv_highgui PROPERTIES
        IMPORTED_LOCATION "${CMAKE_SOURCE_DIR}/src/main/cpp/native/staticlibs/${ANDROID_ABI}/libopencv_highgui.a")

add_library(libopencv_img_hash STATIC IMPORTED )
set_target_properties(libopencv_img_hash PROPERTIES
        IMPORTED_LOCATION "${CMAKE_SOURCE_DIR}/src/main/cpp/native/staticlibs/${ANDROID_ABI}/libopencv_img_hash.a")

add_library(libopencv_imgcodecs STATIC IMPORTED )
set_target_properties(libopencv_imgcodecs PROPERTIES
        IMPORTED_LOCATION "${CMAKE_SOURCE_DIR}/src/main/cpp/native/staticlibs/${ANDROID_ABI}/libopencv_imgcodecs.a")

add_library(libopencv_imgproc STATIC IMPORTED )
set_target_properties(libopencv_imgproc PROPERTIES
        IMPORTED_LOCATION "${CMAKE_SOURCE_DIR}/src/main/cpp/native/staticlibs/${ANDROID_ABI}/libopencv_imgproc.a")

add_library(libopencv_line_descriptor STATIC IMPORTED )
set_target_properties(libopencv_line_descriptor PROPERTIES
        IMPORTED_LOCATION "${CMAKE_SOURCE_DIR}/src/main/cpp/native/staticlibs/${ANDROID_ABI}/libopencv_line_descriptor.a")

add_library(libopencv_ml STATIC IMPORTED )
set_target_properties(libopencv_ml PROPERTIES
        IMPORTED_LOCATION "${CMAKE_SOURCE_DIR}/src/main/cpp/native/staticlibs/${ANDROID_ABI}/libopencv_ml.a")

add_library(libopencv_objdetect STATIC IMPORTED )
set_target_properties(libopencv_objdetect PROPERTIES
        IMPORTED_LOCATION "${CMAKE_SOURCE_DIR}/src/main/cpp/native/staticlibs/${ANDROID_ABI}/libopencv_objdetect.a")

add_library(libopencv_optflow STATIC IMPORTED )
set_target_properties(libopencv_optflow PROPERTIES
        IMPORTED_LOCATION "${CMAKE_SOURCE_DIR}/src/main/cpp/native/staticlibs/${ANDROID_ABI}/libopencv_optflow.a")

add_library(libopencv_phase_unwrapping STATIC IMPORTED )
set_target_properties(libopencv_phase_unwrapping PROPERTIES
        IMPORTED_LOCATION "${CMAKE_SOURCE_DIR}/src/main/cpp/native/staticlibs/${ANDROID_ABI}/libopencv_phase_unwrapping.a")

add_library(libopencv_photo STATIC IMPORTED )
set_target_properties(libopencv_photo PROPERTIES
        IMPORTED_LOCATION "${CMAKE_SOURCE_DIR}/src/main/cpp/native/staticlibs/${ANDROID_ABI}/libopencv_photo.a")

add_library(libopencv_plot STATIC IMPORTED )
set_target_properties(libopencv_plot PROPERTIES
        IMPORTED_LOCATION "${CMAKE_SOURCE_DIR}/src/main/cpp/native/staticlibs/${ANDROID_ABI}/libopencv_plot.a")

add_library(libopencv_reg STATIC IMPORTED )
set_target_properties(libopencv_reg PROPERTIES
        IMPORTED_LOCATION "${CMAKE_SOURCE_DIR}/src/main/cpp/native/staticlibs/${ANDROID_ABI}/libopencv_reg.a")

add_library(libopencv_rgbd STATIC IMPORTED )
set_target_properties(libopencv_rgbd PROPERTIES
        IMPORTED_LOCATION "${CMAKE_SOURCE_DIR}/src/main/cpp/native/staticlibs/${ANDROID_ABI}/libopencv_rgbd.a")

add_library(libopencv_saliency STATIC IMPORTED )
set_target_properties(libopencv_saliency PROPERTIES
        IMPORTED_LOCATION "${CMAKE_SOURCE_DIR}/src/main/cpp/native/staticlibs/${ANDROID_ABI}/libopencv_saliency.a")

add_library(libopencv_shape STATIC IMPORTED )
set_target_properties(libopencv_shape PROPERTIES
        IMPORTED_LOCATION "${CMAKE_SOURCE_DIR}/src/main/cpp/native/staticlibs/${ANDROID_ABI}/libopencv_shape.a")

add_library(libopencv_stereo STATIC IMPORTED )
set_target_properties(libopencv_stereo PROPERTIES
        IMPORTED_LOCATION "${CMAKE_SOURCE_DIR}/src/main/cpp/native/staticlibs/${ANDROID_ABI}/libopencv_stereo.a")

add_library(libopencv_stitching STATIC IMPORTED )
set_target_properties(libopencv_stitching PROPERTIES
        IMPORTED_LOCATION "${CMAKE_SOURCE_DIR}/src/main/cpp/native/staticlibs/${ANDROID_ABI}/libopencv_stitching.a")

add_library(libopencv_structured_light STATIC IMPORTED )
set_target_properties(libopencv_structured_light PROPERTIES
        IMPORTED_LOCATION "${CMAKE_SOURCE_DIR}/src/main/cpp/native/staticlibs/${ANDROID_ABI}/libopencv_structured_light.a")

add_library(libopencv_superres STATIC IMPORTED )
set_target_properties(libopencv_superres PROPERTIES
        IMPORTED_LOCATION "${CMAKE_SOURCE_DIR}/src/main/cpp/native/staticlibs/${ANDROID_ABI}/libopencv_superres.a")

add_library(libopencv_surface_matching STATIC IMPORTED )
set_target_properties(libopencv_surface_matching PROPERTIES
        IMPORTED_LOCATION "${CMAKE_SOURCE_DIR}/src/main/cpp/native/staticlibs/${ANDROID_ABI}/libopencv_surface_matching.a")

add_library(libopencv_text STATIC IMPORTED )
set_target_properties(libopencv_text PROPERTIES
        IMPORTED_LOCATION "${CMAKE_SOURCE_DIR}/src/main/cpp/native/staticlibs/${ANDROID_ABI}/libopencv_text.a")

add_library(libopencv_tracking STATIC IMPORTED )
set_target_properties(libopencv_tracking PROPERTIES
        IMPORTED_LOCATION "${CMAKE_SOURCE_DIR}/src/main/cpp/native/staticlibs/${ANDROID_ABI}/libopencv_tracking.a")

add_library(libopencv_video STATIC IMPORTED )
set_target_properties(libopencv_video PROPERTIES
        IMPORTED_LOCATION "${CMAKE_SOURCE_DIR}/src/main/cpp/native/staticlibs/${ANDROID_ABI}/libopencv_video.a")

add_library(libopencv_videoio STATIC IMPORTED )
set_target_properties(libopencv_videoio PROPERTIES
        IMPORTED_LOCATION "${CMAKE_SOURCE_DIR}/src/main/cpp/native/staticlibs/${ANDROID_ABI}/libopencv_videoio.a")

add_library(libopencv_videostab STATIC IMPORTED )
set_target_properties(libopencv_videostab PROPERTIES
        IMPORTED_LOCATION "${CMAKE_SOURCE_DIR}/src/main/cpp/native/staticlibs/${ANDROID_ABI}/libopencv_videostab.a")

add_library(libopencv_xfeatures2d STATIC IMPORTED )
set_target_properties(libopencv_xfeatures2d PROPERTIES
        IMPORTED_LOCATION "${CMAKE_SOURCE_DIR}/src/main/cpp/native/staticlibs/${ANDROID_ABI}/libopencv_xfeatures2d.a")

add_library(libopencv_ximgproc STATIC IMPORTED )
set_target_properties(libopencv_ximgproc PROPERTIES
        IMPORTED_LOCATION "${CMAKE_SOURCE_DIR}/src/main/cpp/native/staticlibs/${ANDROID_ABI}/libopencv_ximgproc.a")

add_library(libopencv_xobjdetect STATIC IMPORTED )
set_target_properties(libopencv_xobjdetect PROPERTIES
        IMPORTED_LOCATION "${CMAKE_SOURCE_DIR}/src/main/cpp/native/staticlibs/${ANDROID_ABI}/libopencv_xobjdetect.a")

add_library(libopencv_xphoto STATIC IMPORTED )
set_target_properties(libopencv_xphoto PROPERTIES
        IMPORTED_LOCATION "${CMAKE_SOURCE_DIR}/src/main/cpp/native/staticlibs/${ANDROID_ABI}/libopencv_xphoto.a")

#----------------3rdparty libs-------------------------------------------------
add_library(libcpufeatures STATIC IMPORTED )
set_target_properties(libcpufeatures PROPERTIES
        IMPORTED_LOCATION "${CMAKE_SOURCE_DIR}/src/main/cpp/native/3rdparty/libs/${ANDROID_ABI}/libcpufeatures.a")

add_library(libIlmImf STATIC IMPORTED )
set_target_properties(libIlmImf PROPERTIES
        IMPORTED_LOCATION "${CMAKE_SOURCE_DIR}/src/main/cpp/native/3rdparty/libs/${ANDROID_ABI}/libIlmImf.a")

add_library(liblibjasper STATIC IMPORTED )
set_target_properties(liblibjasper PROPERTIES
        IMPORTED_LOCATION "${CMAKE_SOURCE_DIR}/src/main/cpp/native/3rdparty/libs/${ANDROID_ABI}/liblibjasper.a")

add_library(liblibjpeg-turbo STATIC IMPORTED )
set_target_properties(liblibjpeg-turbo PROPERTIES
        IMPORTED_LOCATION "${CMAKE_SOURCE_DIR}/src/main/cpp/native/3rdparty/libs/${ANDROID_ABI}/liblibjpeg-turbo.a")

add_library(liblibpng STATIC IMPORTED )
set_target_properties(liblibpng PROPERTIES
        IMPORTED_LOCATION "${CMAKE_SOURCE_DIR}/src/main/cpp/native/3rdparty/libs/${ANDROID_ABI}/liblibpng.a")

add_library(liblibprotobuf STATIC IMPORTED )
set_target_properties(liblibprotobuf PROPERTIES
        IMPORTED_LOCATION "${CMAKE_SOURCE_DIR}/src/main/cpp/native/3rdparty/libs/${ANDROID_ABI}/liblibprotobuf.a")

add_library(liblibtiff STATIC IMPORTED )
set_target_properties(liblibtiff PROPERTIES
        IMPORTED_LOCATION "${CMAKE_SOURCE_DIR}/src/main/cpp/native/3rdparty/libs/${ANDROID_ABI}/liblibtiff.a")

add_library(liblibwebp STATIC IMPORTED )
set_target_properties(liblibwebp PROPERTIES
        IMPORTED_LOCATION "${CMAKE_SOURCE_DIR}/src/main/cpp/native/3rdparty/libs/${ANDROID_ABI}/liblibwebp.a")

add_library(libtegra_hal STATIC IMPORTED )
set_target_properties(libtegra_hal PROPERTIES
        IMPORTED_LOCATION "${CMAKE_SOURCE_DIR}/src/main/cpp/native/3rdparty/libs/${ANDROID_ABI}/libtegra_hal.a")

#======================end opencv========================================

add_library(
             native-lib

             SHARED

             src/main/cpp/native-lib.cpp )

find_library(
              log-lib

              log )


target_link_libraries(
                       native-lib

                        #opencv lib a start
                        libopencv_aruco libopencv_bgsegm libopencv_bioinspired libopencv_calib3d
                        libopencv_ccalib libopencv_core libopencv_datasets libopencv_dnn
                        libopencv_dnn_objdetect libopencv_dpm libopencv_face libopencv_features2d
                        libopencv_flann libopencv_fuzzy libopencv_hfs libopencv_highgui
                        libopencv_img_hash libopencv_imgcodecs libopencv_imgproc libopencv_line_descriptor
                        libopencv_ml libopencv_objdetect libopencv_optflow libopencv_phase_unwrapping
                        libopencv_photo libopencv_plot libopencv_reg libopencv_rgbd
                        libopencv_saliency libopencv_shape libopencv_stereo libopencv_stitching
                        libopencv_structured_light libopencv_superres libopencv_surface_matching libopencv_text
                        libopencv_tracking libopencv_video libopencv_videoio libopencv_videostab
                        libopencv_xfeatures2d libopencv_ximgproc libopencv_xobjdetect libopencv_xphoto

                        #3rdparty libs
                        libcpufeatures libIlmImf liblibjasper liblibjpeg-turbo
                        liblibpng liblibprotobuf liblibtiff liblibwebp
                        libtegra_hal
                        #opencv lib a end

                       ${log-lib} )