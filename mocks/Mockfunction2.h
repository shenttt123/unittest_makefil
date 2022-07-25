/* AUTOGENERATED FILE. DO NOT EDIT. */
#ifndef _MOCKFUNCTION2_H
#define _MOCKFUNCTION2_H

#include "unity.h"
#include "function2.h"

/* Ignore the following warnings, since we are copying code */
#if defined(__GNUC__) && !defined(__ICC) && !defined(__TMS470__)
#if __GNUC__ > 4 || (__GNUC__ == 4 && (__GNUC_MINOR__ > 6 || (__GNUC_MINOR__ == 6 && __GNUC_PATCHLEVEL__ > 0)))
#pragma GCC diagnostic push
#endif
#if !defined(__clang__)
#pragma GCC diagnostic ignored "-Wpragmas"
#endif
#pragma GCC diagnostic ignored "-Wunknown-pragmas"
#pragma GCC diagnostic ignored "-Wduplicate-decl-specifier"
#endif

void Mockfunction2_Init(void);
void Mockfunction2_Destroy(void);
void Mockfunction2_Verify(void);




#define start_Ignore() start_CMockIgnore()
void start_CMockIgnore(void);
#define start_Expect() start_CMockExpect(__LINE__)
void start_CMockExpect(UNITY_LINE_TYPE cmock_line);
typedef void (* CMOCK_start_CALLBACK)(int cmock_num_calls);
void start_AddCallback(CMOCK_start_CALLBACK Callback);
void start_Stub(CMOCK_start_CALLBACK Callback);
#define start_StubWithCallback start_Stub

#if defined(__GNUC__) && !defined(__ICC) && !defined(__TMS470__)
#if __GNUC__ > 4 || (__GNUC__ == 4 && (__GNUC_MINOR__ > 6 || (__GNUC_MINOR__ == 6 && __GNUC_PATCHLEVEL__ > 0)))
#pragma GCC diagnostic pop
#endif
#endif

#endif
