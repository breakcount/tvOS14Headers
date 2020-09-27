/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:29:14 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface NSCollectionLayoutSpacing : NSObject <NSCopying> {

	double _spacing;
	BOOL _isFlexible;

}

@property (nonatomic,readonly) double spacing; 
@property (nonatomic,readonly) BOOL isFlexibleSpacing; 
@property (nonatomic,readonly) BOOL isFixedSpacing; 
+(id)fixedSpacing:(double)arg1 ;
+(id)defaultSpacing;
+(id)flexibleSpacing:(double)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(double)spacing;
-(id)initWithSpacing:(double)arg1 isFlexible:(BOOL)arg2 ;
-(BOOL)isFlexibleSpacing;
-(BOOL)_hasSpacing;
-(BOOL)isFixedSpacing;
@end

