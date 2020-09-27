/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:03:02 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSImage.framework/MPSImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSData, NSMutableData, <MTLBuffer>, <MTLTexture>;

typedef struct _NSZone* NSZoneRef;

typedef struct AutotuningState {
	BOOL enabled;
	NSDictionary* copyConfigs;
	NSDictionary* upsampleConfigs;
	unsigned long long copyConfigID;
	unsigned long long upsampleConfigID;
} AutotuningState;

typedef struct HighlevelState {
	unsigned long long filterHeight;
	unsigned long long filterWidth;
	NSData* weights;
	BOOL isPyramidAdd;
	float laplacianBias;
	float laplacianScale;
} HighlevelState;

typedef struct LinearScale<float> {
	float offset;
	float factor;
} LinearScale<float>;

typedef struct LinearScale<__fp16> {
	  offset;
	  factor;
} LinearScale<__fp16>;

typedef struct DerivedState {
	unsigned long long padHeight;
	unsigned long long padWidth;
	NSMutableData* h_WeightsRawFull;
	NSMutableData* h_WeightsRawHalf;
	<MTLBuffer>* d_WeightsRawFull;
	<MTLBuffer>* d_WeightsRawHalf;
	LinearScale<float> linearScaleFull;
	LinearScale<__fp16> linearScaleHalf;
} DerivedState;

typedef struct {
	long long field1;
	long long field2;
	long long field3;
} SCD_Struct_MP6;

typedef struct {
	unsigned long long field1;
	unsigned long long field2;
	unsigned long long field3;
} SCD_Struct_MP7;

typedef struct {
	SCD_Struct_MP7 field1;
	SCD_Struct_MP7 field2;
} SCD_Struct_MP8;

typedef struct {
	unsigned long long x;
	unsigned long long y;
	unsigned long long z;
} SCD_Struct_MP9;

typedef struct {
	SCD_Struct_MP9 origin;
	SCD_Struct_MP9 size;
} SCD_Struct_MP10;

typedef struct MPSScaleTransform {
	double scaleX;
	double scaleY;
	double translateX;
	double translateY;
} MPSScaleTransform;

typedef struct {
	unsigned long long field1;
	BOOL field2;
} SCD_Struct_MP12;

typedef struct {
	long long x;
	long long y;
	long long z;
} SCD_Struct_MP13;

typedef struct ConversionInfo_s {
	float bgColor[4];
	unsigned nData;
	unsigned nFData;
	int nStages;
	int nMatrices;
	int nLuts;
	int nTRCs;
	int nLuminanceScales;
	int nCHIn;
	int nCHOut;
	int containsATableTRC;
	unsigned stagesClampFlags;
	unsigned trcFCFlags;
	unsigned stageTypesFC;
} ConversionInfo_s;

typedef struct ConversionInfoPtrs_s {
	StageData_s stages;
	int data;
	float fData;
	id texLUTs;
	id trcLUTs;
	id dummyLUTs;
	id devFloatData;
	 <MTLBuffer>;
	unsigned long long offsetToStageClampValues;
} ConversionInfoPtrs_s;

typedef const struct CGColorConversionInfo* CGColorConversionInfoRef;

typedef struct {
	<MTLTexture>* weights;
	double scale;
	double offset;
	unsigned limit;
	unsigned phaseCount;
	float phaseStride;
	float kernelTaps;
	unsigned phaseMask;
	unsigned kernelSize;
} SCD_Struct_MP17;

typedef struct {
	float threshold_value;
	float max_value;
	float matrix[3];
} SCD_Struct_MP18;

typedef struct {
	unsigned long long maximumKeypoints;
	float minimumThresholdValue;
} SCD_Struct_MP19;

