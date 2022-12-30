#include <jni.h>
#include "react-native-calc.h"

extern "C"
JNIEXPORT jint JNICALL
Java_com_calc_CalcModule_nativeMultiply(JNIEnv *env, jclass type, jdouble a, jdouble b) {
    return calc::multiply(a, b);
}
