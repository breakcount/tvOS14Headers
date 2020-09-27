/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:55:05 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/InAppMessages.framework/InAppMessages
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/IAMTriggerContext.h>

@protocol IAMEventProtocol;
@class NSString;

@interface IAMReceivedEventTriggerContext : NSObject <IAMTriggerContext> {

	NSString* _bundleIdentifier;
	id<IAMEventProtocol> _event;

}

@property (nonatomic,readonly) NSString * bundleIdentifier;              //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,readonly) id<IAMEventProtocol> event;               //@synthesize event=_event - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)bundleIdentifier;
-(id<IAMEventProtocol>)event;
-(BOOL)satisfiesPresentationTrigger:(id)arg1 ;
-(id)initWithEvent:(id)arg1 bundleIdentifier:(id)arg2 ;
@end

