/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:11:58 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AKFollowUpItemFactory.h>

@class NSString;

@interface AKFollowUpFactoryImpl : NSObject <AKFollowUpItemFactory> {

	NSString* _extensionIdentifier;
	NSString* _representingBundlePath;
	NSString* _bundleIconName;

}

@property (nonatomic,copy) NSString * extensionIdentifier;                 //@synthesize extensionIdentifier=_extensionIdentifier - In the implementation block
@property (nonatomic,copy) NSString * representingBundlePath;              //@synthesize representingBundlePath=_representingBundlePath - In the implementation block
@property (nonatomic,copy) NSString * bundleIconName;                      //@synthesize bundleIconName=_bundleIconName - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)extensionIdentifier;
-(id)_clearAction;
-(id)_itemFromPayload:(id)arg1 withAltDSID:(id)arg2 ;
-(void)setExtensionIdentifier:(NSString *)arg1 ;
-(id)_actionsFromPayload:(id)arg1 ;
-(id)_notificationFromPayload:(id)arg1 ;
-(void)setRepresentingBundlePath:(NSString *)arg1 ;
-(void)setBundleIconName:(NSString *)arg1 ;
-(id)_actionFromInfo:(id)arg1 ;
-(id)actionWithTitle:(id)arg1 andActionKey:(id)arg2 ;
-(id)itemsForAltDSID:(id)arg1 fromIDMSPayload:(id)arg2 ;
-(id)itemIdentifiersRequiringNotificationClearFromPayload:(id)arg1 ;
-(BOOL)IsFollowUpItemNotificationForced:(id)arg1 ;
-(NSString *)representingBundlePath;
-(NSString *)bundleIconName;
@end

