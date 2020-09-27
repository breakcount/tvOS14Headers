/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:33:39 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSUUID, NSString;

@interface HMDSettingValueSelectionItem : NSObject {

	NSUUID* _identifier;
	NSString* _selection;

}

@property (copy,readonly) NSUUID * identifier;               //@synthesize identifier=_identifier - In the implementation block
@property (copy,readonly) NSString * selection;              //@synthesize selection=_selection - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSUUID *)identifier;
-(NSString *)selection;
-(id)initWithIdentifier:(id)arg1 selection:(id)arg2 ;
@end

