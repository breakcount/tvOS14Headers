/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:12:48 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/ProactiveEventTracker.framework/ProactiveEventTracker
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

typedef struct NSRange {
	unsigned long long location;
	unsigned long long length;
} NSRange;

typedef struct _NSZone* NSZoneRef;

typedef struct {
	unsigned max : 1;
	unsigned mean : 1;
	unsigned min : 1;
	unsigned variance : 1;
} SCD_Struct_PE2;

typedef struct opaque_pthread_mutex_t {
	long long __sig;
	char __opaque[56];
} opaque_pthread_mutex_t;

typedef struct {
	unsigned bucket : 1;
	unsigned datestamp : 1;
	unsigned type : 1;
} SCD_Struct_PE4;

typedef struct {
	unsigned isCompressed : 1;
} SCD_Struct_PE5;

typedef struct {
	unsigned uploadTime : 1;
	unsigned configVersion : 1;
	unsigned isConfigEnabled : 1;
	unsigned isGm : 1;
	unsigned isInternal : 1;
	unsigned isInternalCarry : 1;
	unsigned isSeed : 1;
	unsigned isTestingData : 1;
	unsigned isTrialUpload : 1;
} SCD_Struct_PE6;

typedef struct {
	unsigned long long s[2];
} SCD_Struct_PE7;

typedef struct {
	unsigned field1;
	unsigned field2;
	unsigned field3;
	unsigned field4;
	chunk_s field5[0];
} SCD_Struct_PE8;

