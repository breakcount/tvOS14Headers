/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:54:54 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeAI/HomeAI-Structs.h>
#import <HMFoundation/HMFObject.h>

@class NSData, NSArray;

@interface HMIDESDatasetSample : HMFObject {

	float* _boxesTensorData;
	float* _weightsTensorData;
	float* _classesTensorData;
	NSData* _imageData;
	NSArray* _detections;
	CGRect _regionOfInterest;

}

@property (readonly) NSData * imageData;                   //@synthesize imageData=_imageData - In the implementation block
@property (readonly) NSArray * detections;                 //@synthesize detections=_detections - In the implementation block
@property (readonly) CGRect regionOfInterest;              //@synthesize regionOfInterest=_regionOfInterest - In the implementation block
+(void)saveDESRecordWithVideoFrame:(id)arg1 recordInfo:(id)arg2 ;
-(void)dealloc;
-(NSData *)imageData;
-(CGRect)regionOfInterest;
-(id)initWithImageData:(id)arg1 regionOfInterest:(CGRect)arg2 detections:(id)arg3 ;
-(id)augmentWithOptions:(id)arg1 ;
-(NSArray *)detections;
-(CVBufferRef)createRegionOfInterestPixelBufferWithError:(id*)arg1 ;
-(id)createImageTensorWithError:(id*)arg1 ;
-(id)createBoxesTensorWithError:(id*)arg1 ;
-(id)createClassesTensorWithError:(id*)arg1 ;
-(id)createWeightsTensorWithError:(id*)arg1 ;
@end

