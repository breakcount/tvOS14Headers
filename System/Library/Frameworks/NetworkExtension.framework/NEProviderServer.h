/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:12:53 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@class NSMutableArray, NEExtensionProviderContext, NSString;

@interface NEProviderServer : NSObject <NSXPCListenerDelegate> {

	NSMutableArray* _listeners;
	NSMutableArray* _contexts;

}

@property (nonatomic,readonly) NSMutableArray * listeners;                   //@synthesize listeners=_listeners - In the implementation block
@property (nonatomic,readonly) NSMutableArray * contexts;                    //@synthesize contexts=_contexts - In the implementation block
@property (readonly) NEExtensionProviderContext * firstContext; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedServer;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)start;
-(NSMutableArray *)contexts;
-(NSMutableArray *)listeners;
-(void)removeProviderContext:(id)arg1 ;
-(id)getListenerForExtensionPoint:(id)arg1 ;
-(void)generateProviderEndpointInfoInMessage:(id)arg1 extensionPoint:(id)arg2 ;
-(NEExtensionProviderContext *)firstContext;
@end

