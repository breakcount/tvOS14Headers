/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:58 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

typedef struct os_unfair_lock_s {
	unsigned _os_unfair_lock_opaque;
} os_unfair_lock_s;

typedef struct _NSZone* NSZoneRef;

typedef struct {
	unsigned startIndex : 1;
} SCD_Struct_NR2;

typedef struct {
	unsigned isDate : 1;
	unsigned isError : 1;
	unsigned isMiniUUIDSet : 1;
	unsigned isSecurePropertyValue : 1;
	unsigned isSet : 1;
} SCD_Struct_NR3;

typedef struct {
	unsigned dateTimeInterval : 1;
	unsigned switchIndex : 1;
} SCD_Struct_NR4;

typedef struct _compressed_pair<unsigned int *, std::__1::allocator<unsigned int> > {
	unsigned __value_;
} compressed_pair<unsigned int *, std::__1::allocator<unsigned int> >;

typedef struct vector<unsigned int, std::__1::allocator<unsigned int> > {
	unsigned __begin_;
	unsigned __end_;
	compressed_pair<unsigned int *, std::__1::allocator<unsigned int> > __end_cap_;
} vector<unsigned int, std::__1::allocator<unsigned int> >;

typedef struct {
	unsigned doubleValue : 1;
	unsigned int64Value : 1;
	unsigned floatValue : 1;
	unsigned int32Value : 1;
	unsigned boolValue : 1;
	unsigned isShortOrChar : 1;
	unsigned isUnsigned : 1;
} SCD_Struct_NR7;

typedef struct mach_timebase_info {
	unsigned numer;
	unsigned denom;
} mach_timebase_info;

typedef struct {
	unsigned long long field1;
	id field2;
	unsigned long long field3;
	unsigned long long field4[5];
} SCD_Struct_NR9;

typedef struct {
	unsigned eventDate : 1;
	unsigned eventType : 1;
	unsigned presentationLocation : 1;
} SCD_Struct_NR10;

