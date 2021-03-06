/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:25:42 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameplayKit/GKCoherentNoiseSource.h>

@interface GKPerlinNoiseSource : GKCoherentNoiseSource {

	double _persistence;

}

@property (assign,nonatomic) double persistence;              //@synthesize persistence=_persistence - In the implementation block
+(id)perlinNoiseSourceWithFrequency:(double)arg1 octaveCount:(long long)arg2 persistence:(double)arg3 lacunarity:(double)arg4 seed:(int)arg5 ;
-(id)init;
-(double)persistence;
-(void)setPersistence:(double)arg1 ;
-(double)valueAt:;
-(id)cloneModule;
-(id)initWithFrequency:(double)arg1 octaveCount:(long long)arg2 persistence:(double)arg3 lacunarity:(double)arg4 seed:(int)arg5 ;
@end

