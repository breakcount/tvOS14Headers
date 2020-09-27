/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:12:43 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MRAVEndpoint.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol OS_dispatch_queue;
@class NSObject, MRAVOutputContext, NSString, NSArray, MROutputContextController;

@interface MRAVLocalEndpoint : MRAVEndpoint <NSSecureCoding> {

	NSObject*<OS_dispatch_queue> _serialQueue;
	MRAVOutputContext* _outputContext;
	NSString* _uniqueIdentifier;
	NSArray* _outputDevices;
	MROutputContextController* _outputContextController;

}

@property (nonatomic,copy) NSArray * outputDevices; 
+(BOOL)supportsSecureCoding;
+(id)sharedLocalEndpointForRoutingContextWithUID:(id)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)uniqueIdentifier;
-(long long)connectionType;
-(id)origin;
-(NSArray *)outputDevices;
-(void)outputDeviceVolume:(id)arg1 queue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)isProxyGroupPlayer;
-(id)designatedGroupLeader;
-(void)setOutputDevices:(NSArray *)arg1 ;
-(BOOL)canModifyGroupMembership;
-(void)_outputContextDevicesDidChangeNotification:(id)arg1 ;
-(void)outputContextDataSourceOutputDeviceDidChangeVolume:(id)arg1 ;
-(void)outputContextDataSourceOutputDeviceDidChangeVolumeControlCapabilities:(id)arg1 ;
-(id)personalOutputDevices;
-(void)addOutputDevices:(id)arg1 initiator:(id)arg2 withReplyQueue:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)removeOutputDevices:(id)arg1 initiator:(id)arg2 withReplyQueue:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)setOutputDevices:(id)arg1 initiator:(id)arg2 withReplyQueue:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)setOutputDeviceVolume:(float)arg1 outputDevice:(id)arg2 queue:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)volumeControlCapabilitiesForOutputDevice:(id)arg1 queue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)removeOutputDeviceFromParentGroup:(id)arg1 queue:(id)arg2 completion:(/*^block*/id)arg3 ;
@end

