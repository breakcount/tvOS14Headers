/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:35 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

typedef struct _NSZone* NSZoneRef;

typedef struct __CFRunLoopObserver* CFRunLoopObserverRef;

typedef struct __CFArray* CFArrayRef;

typedef struct os_unfair_lock_s {
	unsigned _os_unfair_lock_opaque;
} os_unfair_lock_s;

typedef struct os_unfair_recursive_lock_s {
	os_unfair_lock_s ourl_lock;
	unsigned ourl_count;
} os_unfair_recursive_lock_s;

typedef struct __CFRunLoopSource* CFRunLoopSourceRef;

typedef struct NSRange {
	unsigned long long location;
	unsigned long long length;
} NSRange;

typedef struct IMAssociatedMessageGeometryDescriptor {
	unsigned long long layoutIntent;
	unsigned long long associatedLayoutIntent;
	float parentPreviewWidth;
	float xScalar;
	float yScalar;
	float scale;
	float rotation;
} IMAssociatedMessageGeometryDescriptor;

typedef struct __CFPhoneNumber* CFPhoneNumberRef;

typedef struct {
	unsigned long long field1;
	id field2;
	unsigned long long field3;
	unsigned long long field4[5];
} SCD_Struct_IM9;

typedef struct __DDScanner* DDScannerRef;

typedef struct _IMDChatRecordStruct* IMDChatRecordStructRef;

