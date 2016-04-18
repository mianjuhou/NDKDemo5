//
// Created by Administrator on 2016/4/18.
//
#include "com_fs_ndk5_NDKTest.h"

JNIEXPORT jstring JNICALL Java_com_fs_ndk5_NDKTest_getStringName
        (JNIEnv *env, jclass jclass1){
    return env->NewStringUTF("zhanglisong");
}
JNIEXPORT jint JNICALL Java_com_fs_ndk5_NDKTest_getSum
        (JNIEnv * env, jclass jclass1, jint a, jint b){
    jint c=a+b;
    return c;
}
