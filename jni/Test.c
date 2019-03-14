#include<stdio.h>
#include<stdlib.h>
#include<jni.h>
//test.zh.com.auditiontest.utils

/**
  注意方法名必须严格按照规范书写

  方法必须接收两个参数一个是Jvm虚拟机引用 JNIEnv* ; obj代表是调用 c代码的java对象。

*/
/*jstring  Java_test_zh_com_auditiontest_utils_JniUtils_testFromC(JNIEnv* env,jobject obj){

  //jstring     (*NewStringUTF)(JNIEnv*, const char*);
  // JNINativeInterface  (*(*env)).NewStringUTF(env,"Hello From C");
   //  (*env)  JNIEnv
    return (*env)->NewStringUTF(env,"Hello I from C");
}*/
JNIEXPORT jstring JNICALL Java_test_com_zh_myapplication_utils_JniUtils_testFromC
  (JNIEnv * env, jobject obj){
   return (*env)->NewStringUTF(env,"Hello I from C");
  };
