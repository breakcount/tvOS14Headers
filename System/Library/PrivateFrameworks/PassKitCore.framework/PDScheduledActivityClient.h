/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:11 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol PDScheduledActivityClient, OS_dispatch_queue;
@class NSObject, NSMutableDictionary;

@interface PDScheduledActivityClient : NSObject <NSSecureCoding> {

	id<PDScheduledActivityClient> _clientInstance;
	NSObject*<OS_dispatch_queue> _activityQueue;
	NSMutableDictionary* _activityRegistrations;

}

@property (assign,nonatomic,__weak) id<PDScheduledActivityClient> clientInstance;              //@synthesize clientInstance=_clientInstance - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> activityQueue;                       //@synthesize activityQueue=_activityQueue - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * activityRegistrations;                      //@synthesize activityRegistrations=_activityRegistrations - In the implementation block
@property (nonatomic,readonly) BOOL isValid; 
+(BOOL)supportsSecureCoding;
-(BOOL)isValid;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)activityQueue;
-(id)initWithClientInstance:(id)arg1 activityQueue:(id)arg2 ;
-(id<PDScheduledActivityClient>)clientInstance;
-(void)setClientInstance:(id<PDScheduledActivityClient>)arg1 ;
-(void)setActivityQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSMutableDictionary *)activityRegistrations;
-(void)setActivityRegistrations:(NSMutableDictionary *)arg1 ;
@end

