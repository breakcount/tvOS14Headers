/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:38:33 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/TVServices.framework/TVServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVServices/TVProfileServiceToThirdParty.h>

@protocol OS_dispatch_queue;
@class NSObject, NSXPCConnection, NSPointerArray, NSString, NSArray;

@interface TVProfileServiceClient : NSObject <TVProfileServiceToThirdParty> {

	NSObject*<OS_dispatch_queue> _queue;
	int _updateToken;
	BOOL _isApp;
	BOOL _getDone;
	NSXPCConnection* _connection;
	NSPointerArray* _publicInstances;
	NSString* _currentUserIdentifier;
	NSArray* _userIdentifiersForCurrentProfile;

}
+(void)load;
+(id)sharedInstance;
+(id)_fromThirdPartyInterface;
+(id)_toThirdPartyInterface;
-(id)init;
-(void)_setupConnection;
-(void)setCurrentUserIdentifier:(id)arg1 updateCounter:(unsigned long long)arg2 ;
-(void)addPublicInstance:(id)arg1 ;
-(id)currentUserIdentifier;
-(id)userIdentifiersForCurrentProfile;
-(void)setUserIdentifiersForCurrentProfile:(id)arg1 ;
-(void)presentProfilePreferencePanelWithCurrentSettings:(id)arg1 availableProfiles:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)shouldStorePreferenceForCurrentUserToProfile:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

