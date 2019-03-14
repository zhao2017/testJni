 LOCAL_PATH := $(call my-dir)

    include $(CLEAR_VARS)
//   LOCAL_MODULE : so文件的名字; LOCAL_SRC_FILES :指定要编译的c文件
    LOCAL_MODULE    :=Hello
    LOCAL_SRC_FILES :=Test.c

    include $(BUILD_SHARED_LIBRARY)