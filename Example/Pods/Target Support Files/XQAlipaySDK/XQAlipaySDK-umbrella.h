#ifdef __OBJC__
#import <UIKit/UIKit.h>
#else
#ifndef FOUNDATION_EXPORT
#if defined(__cplusplus)
#define FOUNDATION_EXPORT extern "C"
#else
#define FOUNDATION_EXPORT extern
#endif
#endif
#endif

#import "AFServiceCenter.h"
#import "AFServiceResponse.h"
#import "AlipaySDK.h"
#import "AlipaySDKModule.h"
#import "APayAuthInfo.h"
#import "APDeductSDK.h"

FOUNDATION_EXPORT double XQAlipaySDKVersionNumber;
FOUNDATION_EXPORT const unsigned char XQAlipaySDKVersionString[];

