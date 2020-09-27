/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:36:44 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/MLCompute.framework/MLCompute
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MLCompute/MLCompute-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface MLCActivationDescriptor : NSObject <NSCopying> {

	int _activationType;
	float _a;
	float _b;
	float _c;

}

@property (nonatomic,readonly) int activationType;              //@synthesize activationType=_activationType - In the implementation block
@property (a,nonatomic,readonly) float a;                       //@synthesize a=_a - In the implementation block
@property (b,nonatomic,readonly) float b;                       //@synthesize b=_b - In the implementation block
@property (c,nonatomic,readonly) float c;                       //@synthesize c=_c - In the implementation block
+(2)defaultParametersForType:(int)arg1 ;
+(id)descriptorWithType:(int)arg1 ;
+(id)descriptorWithType:(int)arg1 a:(float)arg2 ;
+(id)descriptorWithType:(int)arg1 a:(float)arg2 b:(float)arg3 ;
+(id)descriptorWithType:(int)arg1 a:(float)arg2 b:(float)arg3 c:(float)arg4 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(float)c;
-(float)a;
-(float)b;
-(id)initWithType:(int)arg1 a:(float)arg2 b:(float)arg3 c:(float)arg4 ;
-(int)activationType;
@end

