/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:40:38 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AudioToolboxCore.framework/AudioToolboxCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AudioToolboxCore/AudioToolboxCore-Structs.h>
#import <libobjc.A.dylib/AUPBRegistrarListening.h>
#import <libobjc.A.dylib/AUPBInspecting.h>

@protocol AUPBRegistrarHosting, OS_dispatch_queue;
@class NSXPCConnection, NSMutableArray, NSObject, NSString;

@interface AUPBClientManager : NSObject <AUPBRegistrarListening, AUPBInspecting> {

	NSXPCConnection* mRegistrarConnection;
	id<AUPBRegistrarHosting> mProxyInterface;
	NSMutableArray* mRemoteServers;
	vector<PropertyListener, std::__1::allocator<PropertyListener> >* mPropertyListeners;
	vector<NewServerListener, std::__1::allocator<NewServerListener> >* mNewServerListeners;
	unsigned mServerRefCounter;
	NSObject*<OS_dispatch_queue> mTouchServersQueue;
	int mNotifyToken;
	BOOL mValidToken;
	BOOL mConnectionAcknowledged;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)sharedInstance;
-(id)retain;
-(oneway void)release;
-(id)autorelease;
-(unsigned long long)retainCount;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(void)dealloc;
-(void)handleRegistrarCrash;
-(OpaqueRemoteAudioUnitRef)auRefFromHandle:(unsigned)arg1 ;
-(unsigned)auHandleFromRef:(OpaqueRemoteAudioUnitRef)arg1 ;
-(void)processingBlock:(unsigned)arg1 propertiesChanged:(id)arg2 withQualifierData:(id)arg3 ;
-(void)processingBlock:(unsigned)arg1 propertyChanged:(unsigned)arg2 ;
-(void)newServerAdded:(id)arg1 ;
-(void)startRegistarConnection;
-(OpaqueAUPBRef)aupbRefFromHandle:(unsigned)arg1 ;
-(id)serverFromRef:(OpaqueAUPBServerRef)arg1 ;
-(int)addNewServerListener:(/*function pointer*/void*)arg1 withUserData:(void*)arg2 ;
-(int)removeServerListener:(/*function pointer*/void*)arg1 withUserData:(void*)arg2 ;
-(int)addPropertyListener:(/*function pointer*/void*)arg1 onServer:(OpaqueAUPBServerRef)arg2 block:(OpaqueAUPBRef)arg3 property:(unsigned)arg4 withUserData:(void*)arg5 ;
-(int)removePropertyListener:(/*function pointer*/void*)arg1 onServer:(OpaqueAUPBServerRef)arg2 block:(OpaqueAUPBRef)arg3 property:(unsigned)arg4 withUserData:(void*)arg5 ;
-(int)removePropertyListenersForServer:(OpaqueAUPBServerRef)arg1 ;
-(int)copyPBProperty:(unsigned)arg1 onServer:(OpaqueAUPBServerRef)arg2 block:(OpaqueAUPBRef)arg3 intoValue:(const void*)arg4 ;
-(int)setPBProperty:(unsigned)arg1 onServer:(OpaqueAUPBServerRef)arg2 block:(OpaqueAUPBRef)arg3 value:(void*)arg4 ;
-(int)getAUPropertyInfo:(unsigned)arg1 onServer:(OpaqueAUPBServerRef)arg2 audioUnit:(OpaqueRemoteAudioUnitRef)arg3 scope:(unsigned)arg4 element:(unsigned)arg5 intoDataSize:(unsigned*)arg6 writeable:(char*)arg7 ;
-(int)getAUProperty:(unsigned)arg1 onServer:(OpaqueAUPBServerRef)arg2 audioUnit:(OpaqueRemoteAudioUnitRef)arg3 scope:(unsigned)arg4 element:(unsigned)arg5 copiedIntoBufer:(void*)arg6 withSize:(unsigned*)arg7 ;
-(int)setAUProperty:(unsigned)arg1 onServer:(OpaqueAUPBServerRef)arg2 audioUnit:(OpaqueRemoteAudioUnitRef)arg3 scope:(unsigned)arg4 element:(unsigned)arg5 withValue:(const void*)arg6 size:(unsigned)arg7 ;
-(int)getAUParameter:(unsigned)arg1 onServer:(OpaqueAUPBServerRef)arg2 audioUnit:(OpaqueRemoteAudioUnitRef)arg3 scope:(unsigned)arg4 element:(unsigned)arg5 copiedIntoValue:(float*)arg6 ;
-(int)setAUParameter:(unsigned)arg1 onServer:(OpaqueAUPBServerRef)arg2 audioUnit:(OpaqueRemoteAudioUnitRef)arg3 scope:(unsigned)arg4 element:(unsigned)arg5 value:(float)arg6 ;
-(int)getSerialAUProperty:(unsigned)arg1 onServer:(OpaqueAUPBServerRef)arg2 audioUnit:(OpaqueRemoteAudioUnitRef)arg3 scope:(unsigned)arg4 element:(unsigned)arg5 inData:(id*)arg6 ;
-(int)setSerialAUProperty:(unsigned)arg1 onServer:(OpaqueAUPBServerRef)arg2 audioUnit:(OpaqueRemoteAudioUnitRef)arg3 scope:(unsigned)arg4 element:(unsigned)arg5 toData:(id)arg6 ;
@end

