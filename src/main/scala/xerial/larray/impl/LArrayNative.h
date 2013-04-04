/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class xerial_larray_impl_LArrayNative */

#ifndef _Included_xerial_larray_impl_LArrayNative
#define _Included_xerial_larray_impl_LArrayNative
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     xerial_larray_impl_LArrayNative
 * Method:    copyToArray
 * Signature: (JLjava/lang/Object;II)I
 */
JNIEXPORT jint JNICALL Java_xerial_larray_impl_LArrayNative_copyToArray
  (JNIEnv *, jclass, jlong, jobject, jint, jint);

/*
 * Class:     xerial_larray_impl_LArrayNative
 * Method:    copyFromArray
 * Signature: (Ljava/lang/Object;IJI)I
 */
JNIEXPORT jint JNICALL Java_xerial_larray_impl_LArrayNative_copyFromArray
  (JNIEnv *, jclass, jobject, jint, jlong, jint);

/*
 * Class:     xerial_larray_impl_LArrayNative
 * Method:    mmap
 * Signature: (IIJJ)J
 */
JNIEXPORT jlong JNICALL Java_xerial_larray_impl_LArrayNative_mmap
  (JNIEnv *, jclass, jint, jint, jlong, jlong);

/*
 * Class:     xerial_larray_impl_LArrayNative
 * Method:    munmap
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_xerial_larray_impl_LArrayNative_munmap
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     xerial_larray_impl_LArrayNative
 * Method:    msync
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_xerial_larray_impl_LArrayNative_msync
  (JNIEnv *, jclass, jlong, jlong);

#ifdef __cplusplus
}
#endif
#endif
