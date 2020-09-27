/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:33:24 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AudioServerApplication.framework/AudioServerApplication
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AudioServerApplication/ASAObject.h>

@protocol OS_dispatch_source, OS_dispatch_queue;
@class NSObject, NSMutableArray, NSArray;

@interface ASACoreAudio : ASAObject {

	unsigned _cadPort;
	NSObject*<OS_dispatch_source> _deathSource;
	NSObject*<OS_dispatch_queue> _deathQueue;
	NSMutableArray* _clients;
	NSMutableArray* _plugins;

}

@property (nonatomic,copy,readonly) NSArray * boxObjectIDs; 
@property (nonatomic,copy,readonly) NSArray * audioDeviceObjectIDs; 
@property (nonatomic,copy,readonly) NSArray * deviceObjectIDs; 
@property (nonatomic,copy,readonly) NSArray * clockDeviceObjectIDs; 
@property (nonatomic,copy,readonly) NSArray * pluginObjectIDs; 
@property (nonatomic,copy,readonly) NSArray * boxes; 
@property (nonatomic,copy,readonly) NSArray * audioDevices; 
@property (nonatomic,copy,readonly) NSArray * clockDevices; 
@property (nonatomic,copy,readonly) NSArray * plugins; 
+(id)sharedCoreAudioObject;
+(id)coreAudio;
-(void)dealloc;
-(NSArray *)plugins;
-(void)addPlugin:(id)arg1 ;
-(void)removeClient:(id)arg1 ;
-(void)addClient:(id)arg1 ;
-(id)audioDeviceWithUID:(id)arg1 ;
-(id)pluginWithBundleID:(id)arg1 ;
-(unsigned)audioDeviceObjectIDWithUID:(id)arg1 ;
-(id)initWithAudioObjectID:(unsigned)arg1 ;
-(id)diagnosticDescriptionWithIndent:(id)arg1 walkTree:(BOOL)arg2 ;
-(id)coreAudioClassName;
-(unsigned)pluginObjectIDWithBundleID:(id)arg1 ;
-(unsigned)boxObjectIDWithUID:(id)arg1 ;
-(unsigned)clockDeviceObjectIDWithUID:(id)arg1 ;
-(NSArray *)boxObjectIDs;
-(NSArray *)audioDeviceObjectIDs;
-(NSArray *)clockDeviceObjectIDs;
-(NSArray *)deviceObjectIDs;
-(id)boxWithUID:(id)arg1 ;
-(id)clockDeviceWithUID:(id)arg1 ;
-(NSArray *)boxes;
-(NSArray *)audioDevices;
-(NSArray *)clockDevices;
-(void)_setupDeathSource;
-(void)_teardownDeathSource;
-(unsigned)defaultInputAudioDeviceObjectID;
-(unsigned)defaultOutputAudioDeviceObjectID;
-(unsigned)defaultSystemOutputAudioDeviceObjectID;
-(unsigned)transportManagerObjectIDWithBundleID:(id)arg1 ;
-(NSArray *)pluginObjectIDs;
-(id)defaultInputAudioDevice;
-(id)defaultOutputAudioDevice;
-(void)removePlugin:(id)arg1 ;
-(id)defaultSystemOutputAudioDevice;
-(id)transportManagerWithBundleID:(id)arg1 ;
@end

