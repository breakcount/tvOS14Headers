/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:57 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSXPCListener.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/NRNSXPCListenerProtocol.h>

@protocol NRNSXPCListenerDelegate;
@class NSString;

@interface NRNSXPCListener : NSXPCListener <NSXPCListenerDelegate, NRNSXPCListenerProtocol> {

	id<NRNSXPCListenerDelegate> _listenerDelegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) id<NRNSXPCListenerDelegate> delegate; 
-(void)setDelegate:(id<NRNSXPCListenerDelegate>)arg1 ;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
@end

