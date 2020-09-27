/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:38:49 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFCore/AVFCore-Structs.h>
#import <AVFCore/AVOutputContextManagerImpl.h>

@class AVOutputContextManager, AVWeakReference, NSString;

@interface AVFigEndpointUIAgentOutputContextManagerImpl : NSObject <AVOutputContextManagerImpl> {

	OpaqueFigEndpointUIAgentRef _agent;
	AVWeakReference* _weakObserver;
	AVOutputContextManager* _parentManager;

}

@property (__weak) AVOutputContextManager * parentOutputContextManager;              //@synthesize parentManager=_parentManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(OpaqueFigEndpointUIAgentRef)copySharedEndpointUIAgent;
-(void)dealloc;
-(id)initWithEndpointUIAgent:(OpaqueFigEndpointUIAgentRef)arg1 ;
-(void)setParentOutputContextManager:(AVOutputContextManager *)arg1 ;
-(AVOutputContextManager *)parentOutputContextManager;
-(void)_showErrorPromptForRouteDescriptor:(CFDictionaryRef)arg1 reason:(CFStringRef)arg2 ;
@end

