/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:56:05 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PodcastsUI.framework/PodcastsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

typedef struct {
	unsigned field1 : 1;
	unsigned field2 : 1;
	unsigned field3 : 1;
	unsigned field4 : 1;
	unsigned field5 : 1;
	unsigned field6 : 1;
	unsigned field7 : 1;
	unsigned field8 : 1;
	unsigned field9 : 1;
	unsigned field10 : 1;
	unsigned field11 : 1;
	unsigned field12 : 1;
} SCD_Struct_IM0;

typedef struct {
	long long field1;
	int field2;
	unsigned field3;
	long long field4;
} SCD_Struct_IM1;

typedef struct {
	SCD_Struct_IM1 field1;
	SCD_Struct_IM1 field2;
} SCD_Struct_IM2;

typedef struct {
	CGRect field1;
	CGRect field2;
} SCD_Struct_MT3;

typedef struct _NSZone* NSZoneRef;

typedef struct _compressed_pair<MTMPU::LayoutInterpolator::EntriesContainer *, std::__1::allocator<MTMPU::LayoutInterpolator::EntriesContainer> > {
	EntriesContainer __value_;
} compressed_pair<MTMPU::LayoutInterpolator::EntriesContainer *, std::__1::allocator<MTMPU::LayoutInterpolator::EntriesContainer> >;

typedef struct vector<MTMPU::LayoutInterpolator::EntriesContainer, std::__1::allocator<MTMPU::LayoutInterpolator::EntriesContainer> > {
	EntriesContainer __begin_;
	EntriesContainer __end_;
	compressed_pair<MTMPU::LayoutInterpolator::EntriesContainer *, std::__1::allocator<MTMPU::LayoutInterpolator::EntriesContainer> > __end_cap_;
} vector<MTMPU::LayoutInterpolator::EntriesContainer, std::__1::allocator<MTMPU::LayoutInterpolator::EntriesContainer> >;

typedef struct UIEdgeInsets {
	double top;
	double left;
	double bottom;
	double right;
} UIEdgeInsets;

typedef struct {
	long long value;
	int timescale;
	unsigned flags;
	long long epoch;
} SCD_Struct_IM8;

typedef struct {
	SCD_Struct_IM8 start;
	SCD_Struct_IM8 duration;
} SCD_Struct_IM9;

typedef struct __CFArray* CFArrayRef;

typedef struct {
	double ascender;
	BOOL isAscenderInitialized;
	double bodyLeading;
	BOOL isBodyLeadingInitialized;
	double capHeight;
	BOOL isCapHeightInitialized;
	double descender;
	BOOL isDescenderInitialized;
	double lineHeight;
	BOOL isLineHeightInitialized;
} SCD_Struct_MT11;

typedef struct __CFString* CFStringRef;

typedef struct CGSize {
	double width;
	double height;
} CGSize;

typedef struct CGImageSource* CGImageSourceRef;

typedef struct objc_method* objc_methodRef;

