/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:33:47 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDLogEvent.h>

@class NSString;

@interface HMDActiveXPCConnectionLogEvent : HMDLogEvent {

	BOOL _activated;
	BOOL _added;
	NSString* _name;

}

@property (nonatomic,readonly) NSString * name;                      //@synthesize name=_name - In the implementation block
@property (getter=isActivated,readonly) BOOL activated;              //@synthesize activated=_activated - In the implementation block
@property (readonly) BOOL added;                                     //@synthesize added=_added - In the implementation block
+(id)identifier;
+(id)initWithNewXPCConnectionAdded:(id)arg1 ;
+(id)initWithXPCConnectionRemoved:(id)arg1 ;
-(NSString *)name;
-(BOOL)isActivated;
-(BOOL)added;
-(id)initWithXPCConnection:(id)arg1 added:(BOOL)arg2 ;
@end

