/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:39:01 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AlgosScoreFramework.framework/AlgosScoreFramework
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface AlgosStreamScore : NSObject {

	void* streamData;
	double logisticScale;
	BOOL _debug;
	BOOL _enforceStreamEnd;
	BOOL _music;

}

@property (assign,nonatomic) BOOL debug;                         //@synthesize debug=_debug - In the implementation block
@property (assign,nonatomic) BOOL enforceStreamEnd;              //@synthesize enforceStreamEnd=_enforceStreamEnd - In the implementation block
@property (assign,nonatomic) BOOL music;                         //@synthesize music=_music - In the implementation block
+(id)streamScore;
-(id)init;
-(void)dealloc;
-(void)addStreamStall:(double)arg1 end:(double)arg2 quality:(double)arg3 weight:(double)arg4 params:(id)arg5 ;
-(void)addStreamEnd:(double)arg1 ;
-(id)scoreStreaming:(id)arg1 ;
-(void)addStreamTierSwitch:(double)arg1 end:(double)arg2 quality:(double)arg3 weight:(double)arg4 ;
-(void)addStreamStart:(double)arg1 play:(double)arg2 ;
-(BOOL)debug;
-(void)setDebug:(BOOL)arg1 ;
-(void)clearStreamRows;
-(void)addStreamStall:(double)arg1 end:(double)arg2 quality:(double)arg3 weight:(double)arg4 ;
-(void)addStreamStartupStall:(double)arg1 end:(double)arg2 quality:(double)arg3 weight:(double)arg4 ;
-(void)addStreamFailure:(double)arg1 weight:(double)arg2 ;
-(void)addStreamPenalty:(double)arg1 amount:(double)arg2 ;
-(void)setMusic:(BOOL)arg1 ;
-(void)addRawStreamEvent:(int)arg1 start:(double)arg2 end:(double)arg3 weight:(double)arg4 quality:(double)arg5 params:(id)arg6 ;
-(double)findTotalTime:(id)arg1 debug:(BOOL)arg2 ;
-(BOOL)music;
-(BOOL)enforceStreamEnd;
-(void)setEnforceStreamEnd:(BOOL)arg1 ;
@end

