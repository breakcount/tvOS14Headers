/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:33:47 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMDXPCActivityInterfacing.h>

@class NSString;

@interface HMDXPCActivityInterface : HMFObject <HMDXPCActivityInterfacing>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)stateForXPCActivity:(id)arg1 ;
-(void)registerXPCActivityWithActivityIdentifier:(id)arg1 criteria:(id)arg2 activityBlock:(/*^block*/id)arg3 ;
-(id)criteriaForXPCActivity:(id)arg1 ;
-(void)setCriteria:(id)arg1 forXPCActivity:(id)arg2 ;
-(BOOL)setState:(long long)arg1 forXPCActivity:(id)arg2 ;
-(void)unregisterXPCActivityWithActivityIdentifier:(id)arg1 ;
@end

