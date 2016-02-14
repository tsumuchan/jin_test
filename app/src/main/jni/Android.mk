LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

LOCAL_MODULE    := Const
LOCAL_SRC_FILES := Const.cpp \
                   Test.cpp

include $(BUILD_SHARED_LIBRARY)