/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:29:22 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, UIColor;

@interface _UIImageSystemImageCacheKey : NSObject <NSCopying> {

	NSString* _identifier;
	UIColor* _tintColor;

}

@property (nonatomic,readonly) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) UIColor * tintColor;                //@synthesize tintColor=_tintColor - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)identifier;
-(UIColor *)tintColor;
-(id)initWithType:(id)arg1 tintColor:(id)arg2 ;
@end

