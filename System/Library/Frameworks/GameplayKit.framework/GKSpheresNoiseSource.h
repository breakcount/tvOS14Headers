/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:25:42 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameplayKit/GKNoiseSource.h>

@interface GKSpheresNoiseSource : GKNoiseSource {

	double _frequency;

}

@property (assign,nonatomic) double frequency;              //@synthesize frequency=_frequency - In the implementation block
+(id)spheresNoiseWithFrequency:(double)arg1 ;
-(id)init;
-(void)setFrequency:(double)arg1 ;
-(double)frequency;
-(id)initWithFrequency:(double)arg1 ;
-(double)valueAt:;
-(id)cloneModule;
@end
