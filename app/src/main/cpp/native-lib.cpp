#include <jni.h>
#include <string>
#include "android/log.h"
extern "C"
jstring
Java_com_basecode_datastructure_MainActivity_dataFromJNI(JNIEnv *env, jobject instance) {

    // TODO
    std::string data = "native data";
    return env->NewStringUTF(data.c_str());
}

extern "C"
jstring
Java_com_basecode_datastructure_MainActivity_stringFromJNI(
        JNIEnv* env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}