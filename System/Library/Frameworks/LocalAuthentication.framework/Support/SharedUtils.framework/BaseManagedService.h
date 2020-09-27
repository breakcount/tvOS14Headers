/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:55 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/LocalAuthentication.framework/Support/SharedUtils.framework/SharedUtils
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/Service.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@protocol ServiceManager, OS_dispatch_queue;
@class NSMutableDictionary, NSXPCListener, NSString, NSXPCListenerEndpoint, NSObject;

@interface BaseManagedService : NSObject <Service, NSXPCListenerDelegate> {

	NSMutableDictionary* _clients;
	BOOL _terminating;
	NSXPCListener* _listener;
	id<ServiceManager> manager;
	NSString* _serviceID;
	NSXPCListenerEndpoint* _endpoint;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (assign,nonatomic,__weak) id<ServiceManager> manager; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) NSString * serviceID;                            //@synthesize serviceID=_serviceID - In the implementation block
@property (nonatomic,readonly) NSXPCListenerEndpoint * endpoint;                //@synthesize endpoint=_endpoint - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)exportedInterface;
-(id)init;
-(void)dealloc;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(NSXPCListenerEndpoint *)endpoint;
-(NSObject*<OS_dispatch_queue>)queue;
-(id<ServiceManager>)manager;
-(void)setManager:(id<ServiceManager>)arg1 ;
-(NSString *)serviceID;
-(void)_disconnectClient:(id)arg1 ;
@end

