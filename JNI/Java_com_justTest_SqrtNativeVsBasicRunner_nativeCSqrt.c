//#import <stdio.h>
//#include <jni.h>
#include "com_justTest_SqrtNativeVsBasicRunner.h"
#include <math.h>
#include <stdio.h>
#include <jni.h>



JNIEXPORT jdouble JNICALL Java_com_justTest_SqrtNativeVsBasicRunner_nativeCSqrt
        (JNIEnv *env, jobject jobject1, jobject jobject2) {

/*//    (*jobject2).iterations;
//    printf("%lf", (*jobject2)->iterations);
//    double d = 1.4;
    jmethodID constructor;

    jclass cls = (*env)->FindClass(env, "com/justTest/SqrtNativeVsBasicRunner$ExecutionPlan");
//    (*cls)->iterations;
    constructor = (*env)->GetMethodID(env, cls, "<init>", "()V");
//    constructor = (*env)->GetMethodID(env, cls, "<init>", "(II)V");

    double fid;
    fid = (*env)->GetFieldID(env, cls, "D", "Ljava/lang/Double;");

//    jmethodID mid_getName = (*env)->GetMethodID(env, cls, "a", "()Ljava/lang/Double;");
//    jstring name = (*env)->CallObjectMethod(env, cls, mid_getName);*/

    jclass personClass = (*env)->GetObjectClass(env, jobject2);

    jfieldID iterationsId = (*env)->GetFieldID(env,personClass,"iterations","D");
    //TODO GetDoubleField and GetIntField КОВАРНЫ!!!!
//    jdouble iterations = (*env)->GetDoubleField(env, jobject2, iterationsId);
    jdouble iterations = (*env)->GetDoubleField(env, jobject2, iterationsId);
    //https://stackoverflow.com/questions/40004522/how-to-get-values-from-jobject-in-c-using-jni
    return sqrt(iterations);
}

int main () {
//    printf("%s", "Hi");
}