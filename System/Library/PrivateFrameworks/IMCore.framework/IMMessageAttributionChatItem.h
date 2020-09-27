/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:33 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMCore/IMMessageStatusChatItem.h>

@class NSDictionary, NSString;

@interface IMMessageAttributionChatItem : IMMessageStatusChatItem {

	BOOL _showsLearnMoreLink;
	NSDictionary* _attributionInfo;
	long long _attributionType;

}

@property (nonatomic,copy,readonly) NSDictionary * attributionInfo;              //@synthesize attributionInfo=_attributionInfo - In the implementation block
@property (nonatomic,readonly) long long attributionType;                        //@synthesize attributionType=_attributionType - In the implementation block
@property (nonatomic,copy,readonly) NSString * bundleID; 
@property (nonatomic,readonly) BOOL showsLearnMoreLink;                          //@synthesize showsLearnMoreLink=_showsLearnMoreLink - In the implementation block
-(NSString *)bundleID;
-(long long)attributionType;
-(NSDictionary *)attributionInfo;
-(id)_initWithItem:(id)arg1 attributionInfo:(id)arg2 attributionType:(long long)arg3 showsLearnMoreLink:(BOOL)arg4 ;
-(BOOL)showsLearnMoreLink;
@end

