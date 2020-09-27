/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:33:44 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AVCAudioStreamDelegate <NSObject>
@optional
-(void)streamDidInterruptionBegin:(id)arg1;
-(void)streamDidInterruptionEnd:(id)arg1;
-(void)streamDidServerDie:(id)arg1;
-(void)streamDidStop:(id)arg1;
-(void)stream:(id)arg1 didPause:(BOOL)arg2 error:(id)arg3;
-(void)stream:(id)arg1 didResume:(BOOL)arg2 error:(id)arg3;
-(void)stream:(id)arg1 didStartSynchronizer:(BOOL)arg2 error:(id)arg3;
-(void)streamDidRTPTimeOut:(id)arg1;
-(void)streamDidRTCPTimeOut:(id)arg1;
-(void)stream:(id)arg1 didReceiveDTMFEventWithDigit:(char)arg2;
-(void)stream:(id)arg1 didReceiveRTCPPackets:(id)arg2;
-(void)stream:(id)arg1 updateInputFrequencyLevel:(id)arg2;
-(void)stream:(id)arg1 updateOutputFrequencyLevel:(id)arg2;

@required
-(void)stream:(id)arg1 didStart:(BOOL)arg2 error:(id)arg3;

@end

