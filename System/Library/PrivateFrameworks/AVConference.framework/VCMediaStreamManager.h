/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:16:02 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVConference/AVConference-Structs.h>
#import <libobjc.A.dylib/VCMediaStreamDelegate.h>

@protocol OS_dispatch_queue;
@class NSMutableArray, NSObject, NSMutableDictionary, NSString;

@interface VCMediaStreamManager : NSObject <VCMediaStreamDelegate> {

	opaque_pthread_mutex_t stateLock;
	NSMutableArray* streamArray;
	NSObject*<OS_dispatch_queue> xpcQueue;
	NSMutableDictionary* _vcMomentsCollectorDictionary;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultManager;
+(void)addNSError:(id)arg1 toXPCArgumentDictionary:(id)arg2 ;
-(id)retain;
-(oneway void)release;
-(id)allocWithZone:(NSZone*)arg1 ;
-(id)autorelease;
-(unsigned long long)retainCount;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(void)dealloc;
-(void)registerBlocksForService;
-(void)deregisterBlocksForService;
-(void)vcMediaStream:(id)arg1 updateFrequencyLevel:(id)arg2 isInputMeter:(BOOL)arg3 ;
-(void)vcMediaStreamDidInterruptionBegin:(id)arg1 ;
-(void)vcMediaStreamDidInterruptionEnd:(id)arg1 ;
-(id)textStreamWithStreamToken:(long long)arg1 ;
-(void)vcMediaStream:(id)arg1 didStartStream:(BOOL)arg2 error:(id)arg3 ;
-(void)vcMediaStreamDidStop:(id)arg1 ;
-(void)vcMediaStream:(id)arg1 didPauseStream:(BOOL)arg2 error:(id)arg3 ;
-(void)vcMediaStream:(id)arg1 didResumeStream:(BOOL)arg2 error:(id)arg3 ;
-(void)vcMediaStreamDidRTPTimeOut:(id)arg1 ;
-(void)vcMediaStreamDidRTCPTimeOut:(id)arg1 ;
-(void)vcMediaStream:(id)arg1 didReceiveRTCPPackets:(id)arg2 ;
-(void)vcMediaStream:(id)arg1 didReceiveDTMFEventWithDigit:(char)arg2 ;
-(void)vcMediaStream:(id)arg1 didReceiveTTYCharacter:(unsigned short)arg2 ;
-(void)vcMediaStream:(id)arg1 didReceiveText:(id)arg2 ;
-(void)vcMediaStream:(id)arg1 downlinkQualityDidChange:(id)arg2 ;
-(void)vcMediaStream:(id)arg1 uplinkQualityDidChange:(id)arg2 ;
-(void)vcMediaStream:(id)arg1 didUpdateVideoConfiguration:(BOOL)arg2 error:(id)arg3 dictionary:(id)arg4 ;
-(void)pauseStreams:(BOOL)arg1 ;
@end

