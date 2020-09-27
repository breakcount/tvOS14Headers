/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:29:50 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface _UITextFieldBackgroundCacheKey : NSObject <NSCopying> {

	NSString* _className;
	double _scale;
	double _cornerRadius;
	double _lineWidth;
	CGColorRef _strokeColor;
	CGColorRef _fillColor;

}
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(BOOL)isEqualToCacheKey:(id)arg1 ;
-(id)initWithClassName:(id)arg1 scale:(double)arg2 cornerRadius:(double)arg3 lineWidth:(double)arg4 strokeColor:(CGColorRef)arg5 fillColor:(CGColorRef)arg6 ;
@end

