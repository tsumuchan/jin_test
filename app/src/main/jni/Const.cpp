//
// Created by tsumuchan on 16/02/14.
//

#include "Const.h"

#include <string>

#include <string.h>
#include <jni.h>

extern "C" {
    jstring Java_com_tsumuchan_jnitest_Const_getSecretKey(JNIEnv *env, jobject thiz) {
        return env->NewStringUTF(Const::secret_key.c_str());
    }
}