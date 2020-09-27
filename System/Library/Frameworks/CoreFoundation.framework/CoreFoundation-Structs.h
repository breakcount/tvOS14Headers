/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:02:16 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

typedef struct _NSZone* NSZoneRef;

typedef struct {
	unsigned long long field1;
	id field2;
	unsigned long long field3;
	unsigned long long field4[5];
} SCD_Struct_NS1;

typedef struct opaque_pthread_mutex_t {
	long long __sig;
	char __opaque[56];
} opaque_pthread_mutex_t;

typedef struct {
	unsigned muts;
	unsigned used;
} SCD_Struct_NS3;

typedef struct {
	id list;
	unsigned offset;
	unsigned size;
	/*function pointer*/void* state;
	unsigned long long mutations;
	SCD_Struct_NS3) ;
} SCD_Struct_NS4;

typedef struct __CFData* CFDataRef;

typedef struct __CFString* CFStringRef;

typedef struct __CFDictionary* CFDictionaryRef;

typedef struct __CFRunLoop* CFRunLoopRef;

typedef struct {
	long long field1;
	void field2;
	/*function pointer*/void* field3;
	/*function pointer*/void* field4;
	/*function pointer*/void* field5;
} SCD_Struct_NS9;

typedef struct {
	BOOL field1;
	BOOL field2;
	unsigned long long field3;
	unsigned long long field4;
	unsigned long long field5;
	unsigned field6;
} SCD_Struct_NS10;

typedef struct {
	long long field1;
	int field2;
} SCD_Struct_NS11;

typedef struct __CFAllocator* CFAllocatorRef;

typedef struct _cfobservers_t {
	id slot;
	__cfobservers_t next;
} cfobservers_t;

typedef struct {
	long long version;
	void info;
	/*function pointer*/void* retain;
	/*function pointer*/void* release;
	/*function pointer*/void* copyDescription;
} SCD_Struct_CF14;

typedef union {
	/*function pointer*/void* _rcb;
	/*function pointer*/void* _wcb;
	/*function pointer*/void* genericCallback;
	void genericPointer;
} SCD_Union_CF15;

typedef struct {
	__CFBasicHash set;
	NSMutableArray* array;
} SCD_Struct_NS16;

typedef struct os_unfair_lock_s {
	unsigned _os_unfair_lock_opaque;
} os_unfair_lock_s;

typedef struct __CFArray* CFArrayRef;

typedef struct {
	unsigned long long state;
	id itemsPtr;
	unsigned long long mutationsPtr;
	unsigned long long extra[5];
} SCD_Struct_NS19;

typedef struct {
	unsigned muts;
	unsigned used : 26;
	unsigned szidx : 6;
} SCD_Struct_NS20;

typedef struct {
	id objs;
	/*function pointer*/void* state;
	unsigned long long mutations;
	SCD_Struct_NS20) ;
} SCD_Struct_NS21;

typedef struct {
	long long field1;
	long long field2;
} SCD_Struct_NS22;

typedef struct {
	unsigned long long used;
	id list[0];
} SCD_Struct_NS23;

typedef struct ULocaleDisplayNames* ULocaleDisplayNamesRef;

typedef struct __CFSet* CFSetRef;

typedef struct {
	id field1;
	id field2;
	id field3;
	id field4;
	long long field5;
	id field6;
	id field7;
	id field8;
} SCD_Struct_NS26;

typedef struct __CFURL* CFURLRef;

typedef struct {
	unsigned field1[8];
} SCD_Struct_NS28;

typedef struct _filesec* filesecRef;

typedef struct _acl* aclRef;

typedef struct __CFBoolean* CFBooleanRef;

typedef struct __CFBag* CFBagRef;

typedef struct {
	unsigned long long buckets[64];
} SCD_Struct_CF33;

typedef struct {
	unsigned long long mutations;
} SCD_Struct_NS34;

typedef struct {
	unsigned mutbits : 31;
	unsigned copyKeys : 1;
	unsigned used : 25;
	unsigned kvo : 1;
	unsigned szidx : 6;
} SCD_Struct_NS35;

typedef struct {
	id buffer;
	/*function pointer*/void* state;
	SCD_Struct_NS34 ;
	SCD_Struct_NS3 ;
	SCD_Struct_NS35) ;
} SCD_Struct_NS36;

