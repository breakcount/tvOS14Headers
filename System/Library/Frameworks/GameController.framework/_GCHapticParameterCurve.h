/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:30:47 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <GameController/GameController-Structs.h>
@class NSMutableArray;

@interface _GCHapticParameterCurve : NSObject {

	NSMutableArray* _curve;

}

@property (nonatomic,retain) NSMutableArray * curve;              //@synthesize curve=_curve - In the implementation block
-(NSMutableArray *)curve;
-(void)setCurve:(NSMutableArray *)arg1 ;
-(id)initWithHapticCommand:(const HapticCommand*)arg1 ;
@end

