/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:29:30 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@class UITraitCollection;

@interface _UIAttributeTraitStorageRecord : NSObject <NSCoding> {

	UITraitCollection* _traitCollection;
	id _value;

}

@property (nonatomic,readonly) UITraitCollection * traitCollection;              //@synthesize traitCollection=_traitCollection - In the implementation block
@property (nonatomic,readonly) id value;                                         //@synthesize value=_value - In the implementation block
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)value;
-(UITraitCollection *)traitCollection;
-(id)initWithTraitCollection:(id)arg1 value:(id)arg2 ;
@end

