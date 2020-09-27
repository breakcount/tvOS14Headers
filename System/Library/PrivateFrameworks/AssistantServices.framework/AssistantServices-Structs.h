/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:13 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

typedef struct _NSZone* NSZoneRef;

typedef struct {
	unsigned long long field1;
	id field2;
	unsigned long long field3;
	unsigned long long field4[5];
} SCD_Struct_AF1;

typedef struct os_unfair_lock_s {
	unsigned _os_unfair_lock_opaque;
} os_unfair_lock_s;

typedef struct __CFArray* CFArrayRef;

typedef struct {
	long long field1;
	long long field2;
} SCD_Struct_AF4;

typedef struct {
	unsigned short field1[64];
	__CFString field2;
	unsigned short field3;
	char* field4;
	SCD_Struct_AF4 field5;
	long long field6;
	long long field7;
} SCD_Struct_AF5;

typedef struct OpaqueAudioComponentInstance* OpaqueAudioComponentInstanceRef;

typedef struct AvailabilityState {
	unsigned availabilityIsKnown : 1;
	unsigned isAvailable : 1;
} AvailabilityState;

typedef struct atomic_flag {
	AB _Value;
} atomic_flag;

typedef struct __CFNotificationCenter* CFNotificationCenterRef;

typedef struct {
	BOOL didRequestForBTLEScan;
	BOOL didRequestForBTLEAdvertisement;
} SCD_Struct_AF10;

typedef struct {
	unsigned eventType : 1;
} SCD_Struct_SI11;

