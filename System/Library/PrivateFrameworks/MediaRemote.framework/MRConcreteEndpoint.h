/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:12:42 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MRAVEndpoint.h>

@protocol OS_dispatch_queue;
@class NSString, NSArray, MRExternalDevice, MRAVOutputDevice, NSObject;

@interface MRConcreteEndpoint : MRAVEndpoint {

	NSString* _uniqueIdentifier;
	NSArray* _outputDevices;
	MRExternalDevice* _externalDevice;
	MRAVOutputDevice* _designatedGroupLeader;
	long long _connectionType;
	NSObject*<OS_dispatch_queue> _serialQueue;

}

@property (nonatomic,copy) NSArray * outputDevices; 
-(id)uniqueIdentifier;
-(long long)connectionType;
-(NSArray *)outputDevices;
-(id)externalDevice;
-(void)setExternalDevice:(id)arg1 ;
-(BOOL)isProxyGroupPlayer;
-(id)designatedGroupLeader;
-(id)initWithDesignatedGroupLeader:(id)arg1 outputDevices:(id)arg2 ;
-(void)setOutputDevices:(NSArray *)arg1 ;
-(BOOL)canModifyGroupMembership;
@end

