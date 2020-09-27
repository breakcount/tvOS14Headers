/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:03:10 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CoreImage-Structs.h>
#import <CoreImage/CIDetector.h>

@class CIContext, NSMutableDictionary, FCRFaceDetector;

@interface CIFaceCoreDetector : CIDetector {

	CIContext* context;
	NSMutableDictionary* featureOptions;
	BOOL _tracking;
	FCRFaceDetector* faceCoreDetector;

}

@property (nonatomic,retain) CIContext * context; 
@property (retain) FCRFaceDetector * faceCoreDetector; 
-(void)dealloc;
-(void)finalize;
-(CIContext *)context;
-(void)setContext:(CIContext *)arg1 ;
-(id)featuresInImage:(id)arg1 options:(id)arg2 ;
-(id)initWithContext:(id)arg1 options:(id)arg2 ;
-(id)featuresInImage:(id)arg1 ;
-(void)setFaceCoreDetector:(FCRFaceDetector *)arg1 ;
-(id)adjustedImageFromImage:(id)arg1 orientation:(int)arg2 inverseCTM:(CGAffineTransform*)arg3 ;
-(id)createFaceCoreDataFromCIImage:(id)arg1 width:(unsigned long long*)arg2 height:(unsigned long long*)arg3 ;
-(FCRFaceDetector *)faceCoreDetector;
-(CGAffineTransform)ctmForImageWithBounds:(CGRect)arg1 orientation:(int)arg2 ;
@end

