#include <jni.h>
#include <string>
#include "student.h"
extern "C" JNIEXPORT jstring JNICALL
Java_com_example_myapplication_MainActivity_stringFromJNI(
        JNIEnv* env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    auto *stu = new Student();
    stu->setAge(10);
    int age =  stu->getAge();
    std::string str = std::to_string(age);

    // 将字符串转换为 char*
    const char* charPtr = str.c_str();
    return env->NewStringUTF(charPtr);
}