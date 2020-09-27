/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:57:11 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/TVContentPartnerKitUI.framework/TVContentPartnerKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVContentPartnerKitUI/TVSSSearchAppServiceProtocol.h>

@class NSXPCConnection, NSString;

@interface TVCKSearchAppServiceConnection : NSObject <TVSSSearchAppServiceProtocol> {

	NSXPCConnection* _remoteConnection;
	NSString* _clientBundleIdentifier;

}

@property (nonatomic,retain) NSXPCConnection * remoteConnection;              //@synthesize remoteConnection=_remoteConnection - In the implementation block
@property (nonatomic,copy) NSString * clientBundleIdentifier;                 //@synthesize clientBundleIdentifier=_clientBundleIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)resume;
-(id)initWithConnection:(id)arg1 ;
-(void)setRemoteConnection:(NSXPCConnection *)arg1 ;
-(NSXPCConnection *)remoteConnection;
-(NSString *)clientBundleIdentifier;
-(void)setClientBundleIdentifier:(NSString *)arg1 ;
-(id)_clientBundleIdentifierFromConnection;
-(void)updateWithSearchResult:(id)arg1 reply:(/*^block*/id)arg2 ;
@end

