/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:11:51 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary;

@interface TIInputModeLocaleIdentifierOverrideMapping : NSObject {

	NSDictionary* _overrideMapping;

}

@property (nonatomic,readonly) NSDictionary * overrideMapping;              //@synthesize overrideMapping=_overrideMapping - In the implementation block
+(id)sharedInstance;
-(unsigned char)localeIdentifierHasOverride:(id)arg1 ;
-(id)overrideLocaleForIdentifier:(id)arg1 ;
-(NSDictionary *)overrideMapping;
@end

