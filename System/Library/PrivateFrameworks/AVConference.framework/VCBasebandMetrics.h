/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:16:03 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVConference/AVConference-Structs.h>
@class VCRateControlMediaController;

@interface VCBasebandMetrics : NSObject {

	VCRateControlMediaController* _mediaController;
	SCD_Struct_VC118 _lastBasebandNotification;
	double _bdcd;
	double _normalizedBDCD;
	double _normalizedDelay;
	BOOL _isBDCDListReady;
	SCD_Struct_VC119 _bdcdList;
	SCD_Struct_VC120 _infoList;
	unsigned _targetBitrate;
	unsigned _txBitrate;
	unsigned _averageBitrate;
	unsigned _previousAverageBitrate;
	unsigned _averageBitrateLong;
	double _expectedQueuingDelay;
	double _expectedQueuingDelayLong;
	BOOL _isTargetBitrateStabilized;
	BOOL _resetAverageBitrateLong;
	void* _logBasebandDump;

}

@property (assign,nonatomic) unsigned targetBitrate;                                      //@synthesize targetBitrate=_targetBitrate - In the implementation block
@property (assign,nonatomic) BOOL isTargetBitrateStabilized;                              //@synthesize isTargetBitrateStabilized=_isTargetBitrateStabilized - In the implementation block
@property (nonatomic,retain) VCRateControlMediaController * mediaController;              //@synthesize mediaController=_mediaController - In the implementation block
-(void)dealloc;
-(VCRateControlMediaController *)mediaController;
-(unsigned)targetBitrate;
-(void)setMediaController:(VCRateControlMediaController *)arg1 ;
-(void)setIsTargetBitrateStabilized:(BOOL)arg1 ;
-(void)setTargetBitrate:(unsigned)arg1 ;
-(void)enableBasebandLogDump:(void*)arg1 ;
-(void)addInfoListWithNotification:(SCD_Struct_VC121*)arg1 ;
-(void)calculateBitratesAndDelaysWithTotalQueueDepth:(unsigned)arg1 ;
-(void)normalizeBDCD:(double)arg1 ;
-(void)addBDCDListWithNotificationArrivalTime:(double)arg1 bdcd:(double)arg2 queuingDelay:(double)arg3 ;
-(void)resetBDCDList;
-(SCD_Struct_AV32)getBasebandMetricsWithNotification:(SCD_Struct_VC121*)arg1 ;
-(void)resetBBNoteHistoryList;
-(BOOL)isTargetBitrateStabilized;
@end

