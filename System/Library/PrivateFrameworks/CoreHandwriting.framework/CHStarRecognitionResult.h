/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:29 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreHandwriting/CoreHandwriting-Structs.h>
#import <CoreHandwriting/CHSketchRecognitionResult.h>

@interface CHStarRecognitionResult : CHSketchRecognitionResult {

	CGPoint _center;
	CGSize _size;

}

@property (readonly) CGPoint center;              //@synthesize center=_center - In the implementation block
@property (readonly) CGSize size;                 //@synthesize size=_size - In the implementation block
-(CGSize)size;
-(CGPoint)center;
-(id)initWithString:(id)arg1 score:(double)arg2 rotation:(double)arg3 center:(CGPoint)arg4 size:(CGSize)arg5 ;
@end

