/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:12:15 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

typedef struct _NSZone* NSZoneRef;

typedef struct os_unfair_lock_s {
	unsigned _os_unfair_lock_opaque;
} os_unfair_lock_s;

typedef struct {
	unsigned _requestCount;
	unsigned _securityScopeCacheHitCount;
	unsigned _accessibleCacheHitCount;
	unsigned _cacheMissCount;
	unsigned _imageServiceLoadCount;
} SCD_Struct_IN2;

typedef struct {
	double width;
	double height;
} SCD_Struct_IN3;

typedef struct {
	unsigned val[8];
} SCD_Struct_IN4;

typedef struct NSRange {
	unsigned long long location;
	unsigned long long length;
} NSRange;

typedef struct __CFBundle* CFBundleRef;

typedef struct CGColor* CGColorRef;

