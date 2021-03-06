/*
 * Copyright (c) [2020] Huawei Technologies Co.,Ltd.All rights reserved.
 *
 * OpenArkCompiler is licensed under Mulan PSL v2.
 * You can use this software according to the terms and conditions of the Mulan PSL v2.
 * You may obtain a copy of Mulan PSL v2 at:
 *
 *     http://license.coscl.org.cn/MulanPSL2
 *
 * THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND, EITHER
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT, MERCHANTABILITY OR
 * FIT FOR A PARTICULAR PURPOSE.
 * See the Mulan PSL v2 for more details.
 */
#ifndef MAPLE_RUNTIME_NATIVE_LIBCORE_UTIL_CHARSETUTILS_H
#define MAPLE_RUNTIME_NATIVE_LIBCORE_UTIL_CHARSETUTILS_H
#include <jni.h>
#include "mrt_api_common.h"

#ifdef __cplusplus
extern "C" {
#endif

MRT_EXPORT void Java_libcore_util_CharsetUtils_asciiBytesToChars___3BII_3C(JNIEnv *env,
    jclass unused, jbyteArray javaBytes, jint offset, jint length, jcharArray javaChars);

MRT_EXPORT void Java_libcore_util_CharsetUtils_isoLatin1BytesToChars___3BII_3C(JNIEnv *env,
    jclass unused, jbyteArray javaBytes, jint offset, jint length, jcharArray javaChars);

MRT_EXPORT jbyteArray Java_libcore_util_CharsetUtils_toAsciiBytes__Ljava_lang_String_2II(JNIEnv *env,
    jclass unused, jstring java_string, jint offset, jint length);

MRT_EXPORT jbyteArray Java_libcore_util_CharsetUtils_toIsoLatin1Bytes__Ljava_lang_String_2II(JNIEnv *env,
    jclass unused, jstring java_string, jint offset, jint length);

MRT_EXPORT jbyteArray Java_libcore_util_CharsetUtils_toUtf8Bytes__Ljava_lang_String_2II(JNIEnv *env,
    jclass unused, jstring java_string, jint offset, jint length);

#ifdef __cplusplus
}
#endif

#endif // MAPLE_RUNTIME_NATIVE_LIBCORE_UTIL_CHARSETUTILS_H
