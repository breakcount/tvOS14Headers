/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:12:36 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AccountsDaemon/AccountsDaemon-Structs.h>
@class NSXPCConnection, NSString, NSNumber, NSMutableDictionary, ACDAccountStoreFilter, NSSet;

@interface ACDClient : NSObject {

	NSXPCConnection* _connection;
	CFBundleRef _bundle;
	NSString* _bundleID;
	BOOL _didManuallySetBundleID;
	NSNumber* _pid;
	NSString* _localizedAppName;
	NSString* _name;
	NSMutableDictionary* _entitlementChecks;
	ACDAccountStoreFilter* _filter;
	NSSet* _monitoredAccountTypes;

}

@property (nonatomic,retain) NSString * bundleID; 
@property (nonatomic,readonly) CFBundleRef bundle; 
@property (nonatomic,readonly) NSString * localizedAppName; 
@property (nonatomic,readonly) NSString * adamOrDisplayID; 
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSNumber * pid; 
@property (nonatomic,readonly) NSXPCConnection * connection;              //@synthesize connection=_connection - In the implementation block
@property (nonatomic,retain) ACDAccountStoreFilter * filter;              //@synthesize filter=_filter - In the implementation block
@property (nonatomic,retain) NSSet * monitoredAccountTypes;               //@synthesize monitoredAccountTypes=_monitoredAccountTypes - In the implementation block
+(id)clientWithBundleID:(id)arg1 ;
+(id)_bundleForNonPlugInPID:(int)arg1 ;
+(id)_bundleIDForPID:(int)arg1 ;
+(id)_bundleForPID:(int)arg1 ;
-(NSString *)name;
-(id)description;
-(id)init;
-(void)dealloc;
-(NSString *)bundleID;
-(void)setBundleID:(NSString *)arg1 ;
-(CFBundleRef)bundle;
-(NSXPCConnection *)connection;
-(id)initWithConnection:(id)arg1 ;
-(NSNumber *)pid;
-(ACDAccountStoreFilter *)filter;
-(BOOL)hasEntitlement:(id)arg1 ;
-(void)setFilter:(ACDAccountStoreFilter *)arg1 ;
-(NSString *)localizedAppName;
-(void)setMonitoredAccountTypes:(NSSet *)arg1 ;
-(NSString *)adamOrDisplayID;
-(NSSet *)monitoredAccountTypes;
-(id)_displayNameFromLaunchServicesForPID:(int)arg1 ;
-(id)_displayNameFromBundleInfoDictionaryForPID:(int)arg1 ;
-(id)_rawValueForEntitlement:(id)arg1 ;
@end
