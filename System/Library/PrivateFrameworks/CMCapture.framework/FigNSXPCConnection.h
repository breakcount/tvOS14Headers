/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:40:45 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSXPCConnection.h>

@protocol OS_dispatch_group;
@class NSObject;

@interface FigNSXPCConnection : NSXPCConnection {

	NSObject*<OS_dispatch_group> _connectionRunningGroup;
	BOOL _explicitlyInvalidated;

}

@property (nonatomic,readonly) BOOL explicitlyInvalidated;              //@synthesize explicitlyInvalidated=_explicitlyInvalidated - In the implementation block
-(void)dealloc;
-(void)invalidate;
-(void)resume;
-(void)setInvalidationHandler:(/*^block*/id)arg1 ;
-(void)blockUntilInvalidateHandlerHasBeenCalled;
-(BOOL)explicitlyInvalidated;
@end

