/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:16:09 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFoundation-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/NSNetServiceBrowserDelegate.h>

@protocol HMFNetServiceBrowserDelegate, OS_dispatch_queue;
@class NSHashTable, NSMutableOrderedSet, NSString, NSObject, NSNetServiceBrowser, NSArray;

@interface HMFNetServiceBrowser : HMFObject <NSNetServiceBrowserDelegate> {

	os_unfair_lock_s _lock;
	NSHashTable* _netServices;
	NSMutableOrderedSet* _cachedNetServices;
	BOOL _browsing;
	id<HMFNetServiceBrowserDelegate> _delegate;
	NSString* _domain;
	NSString* _serviceType;
	NSObject*<OS_dispatch_queue> _clientQueue;
	NSNetServiceBrowser* _internal;
	/*^block*/id _browseBlock;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> clientQueue;              //@synthesize clientQueue=_clientQueue - In the implementation block
@property (nonatomic,readonly) NSNetServiceBrowser * internal;                        //@synthesize internal=_internal - In the implementation block
@property (assign,getter=isBrowsing,nonatomic) BOOL browsing;                         //@synthesize browsing=_browsing - In the implementation block
@property (nonatomic,copy) id browseBlock;                                            //@synthesize browseBlock=_browseBlock - In the implementation block
@property (__weak) id<HMFNetServiceBrowserDelegate> delegate;                         //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy,readonly) NSString * domain;                                //@synthesize domain=_domain - In the implementation block
@property (nonatomic,copy,readonly) NSString * serviceType;                           //@synthesize serviceType=_serviceType - In the implementation block
@property (assign,nonatomic) BOOL shouldCache; 
@property (nonatomic,copy,readonly) NSArray * cachedNetServices; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)shortDescription;
+(id)logCategory;
-(NSString *)debugDescription;
-(NSString *)description;
-(id)init;
-(void)dealloc;
-(NSString *)domain;
-(id<HMFNetServiceBrowserDelegate>)delegate;
-(void)setDelegate:(id<HMFNetServiceBrowserDelegate>)arg1 ;
-(NSString *)serviceType;
-(void)netServiceBrowser:(id)arg1 didNotSearch:(id)arg2 ;
-(void)netServiceBrowserDidStopSearch:(id)arg1 ;
-(void)netServiceBrowser:(id)arg1 didRemoveService:(id)arg2 moreComing:(BOOL)arg3 ;
-(void)netServiceBrowser:(id)arg1 didRemoveDomain:(id)arg2 moreComing:(BOOL)arg3 ;
-(void)netServiceBrowser:(id)arg1 didFindService:(id)arg2 moreComing:(BOOL)arg3 ;
-(void)netServiceBrowserWillSearch:(id)arg1 ;
-(id)shortDescription;
-(NSObject*<OS_dispatch_queue>)clientQueue;
-(NSNetServiceBrowser *)internal;
-(BOOL)shouldCache;
-(void)setShouldCache:(BOOL)arg1 ;
-(void)setBrowsing:(BOOL)arg1 ;
-(void)stopBrowsing;
-(id)logIdentifier;
-(id)descriptionWithPointer:(BOOL)arg1 ;
-(BOOL)isBrowsing;
-(void)setBrowseBlock:(id)arg1 ;
-(void)_stopBrowsingWithError:(id)arg1 ;
-(id)browseBlock;
-(void)addNetServiceToCache:(id)arg1 ;
-(id)initWithDomain:(id)arg1 serviceType:(id)arg2 ;
-(NSArray *)cachedNetServices;
-(void)startBrowsingWithCompletionHandler:(/*^block*/id)arg1 ;
@end

