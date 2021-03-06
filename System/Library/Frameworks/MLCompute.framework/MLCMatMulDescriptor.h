/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:36:45 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/MLCompute.framework/MLCompute
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MLCompute/MLCompute-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface MLCMatMulDescriptor : NSObject <NSCopying> {

	BOOL _transposesX;
	BOOL _transposesY;
	float _alpha;

}

@property (nonatomic,readonly) float alpha;                   //@synthesize alpha=_alpha - In the implementation block
@property (nonatomic,readonly) BOOL transposesX;              //@synthesize transposesX=_transposesX - In the implementation block
@property (nonatomic,readonly) BOOL transposesY;              //@synthesize transposesY=_transposesY - In the implementation block
+(id)descriptor;
+(id)descriptorWithAlpha:(float)arg1 transposesX:(BOOL)arg2 transposesY:(BOOL)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(float)alpha;
-(BOOL)transposesX;
-(BOOL)transposesY;
-(id)initWithAlpha:(float)arg1 transposesX:(BOOL)arg2 transposesY:(BOOL)arg3 ;
@end

