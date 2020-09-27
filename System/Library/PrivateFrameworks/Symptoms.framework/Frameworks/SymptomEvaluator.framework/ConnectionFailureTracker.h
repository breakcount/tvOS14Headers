/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:36:19 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSData, NSMutableArray;

@interface ConnectionFailureTracker : NSObject {

	BOOL _isIPv6;
	int _numConsecutiveFailures;
	unsigned _ifIndex;
	double _firstConnectionFailTime;
	double _lastConnectionFailTime;
	NSString* _processName;
	long long _ifType;
	NSData* _destinationAddress;
	NSMutableArray* _failedFlows;

}

@property (assign,nonatomic) int numConsecutiveFailures;                  //@synthesize numConsecutiveFailures=_numConsecutiveFailures - In the implementation block
@property (assign,nonatomic) double firstConnectionFailTime;              //@synthesize firstConnectionFailTime=_firstConnectionFailTime - In the implementation block
@property (assign,nonatomic) double lastConnectionFailTime;               //@synthesize lastConnectionFailTime=_lastConnectionFailTime - In the implementation block
@property (nonatomic,retain) NSString * processName;                      //@synthesize processName=_processName - In the implementation block
@property (assign,nonatomic) BOOL isIPv6;                                 //@synthesize isIPv6=_isIPv6 - In the implementation block
@property (assign,nonatomic) unsigned ifIndex;                            //@synthesize ifIndex=_ifIndex - In the implementation block
@property (assign,nonatomic) long long ifType;                            //@synthesize ifType=_ifType - In the implementation block
@property (nonatomic,retain) NSData * destinationAddress;                 //@synthesize destinationAddress=_destinationAddress - In the implementation block
@property (nonatomic,retain) NSMutableArray * failedFlows;                //@synthesize failedFlows=_failedFlows - In the implementation block
-(id)description;
-(NSString *)processName;
-(void)setProcessName:(NSString *)arg1 ;
-(NSData *)destinationAddress;
-(void)setDestinationAddress:(NSData *)arg1 ;
-(unsigned)ifIndex;
-(void)setIfIndex:(unsigned)arg1 ;
-(BOOL)isIPv6;
-(void)setIsIPv6:(BOOL)arg1 ;
-(long long)ifType;
-(double)lastConnectionFailTime;
-(int)numConsecutiveFailures;
-(NSMutableArray *)failedFlows;
-(double)firstConnectionFailTime;
-(void)setFailedFlows:(NSMutableArray *)arg1 ;
-(void)setIfType:(long long)arg1 ;
-(void)setNumConsecutiveFailures:(int)arg1 ;
-(void)setFirstConnectionFailTime:(double)arg1 ;
-(void)setLastConnectionFailTime:(double)arg1 ;
-(void)_logFailure;
-(void)_reportFailure:(unsigned long long)arg1 owner:(id)arg2 ;
-(BOOL)noteInitialSnapshot:(id)arg1 ;
@end

