/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:33:31 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/CoreDuetStatistics.framework/CoreDuetStatistics
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate, NSString;

@interface CDSBasisObject : NSObject {

	unsigned long long _localTime;
	NSDate* _creationDate;
	NSString* _basisValueString;
	unsigned long long _basisUint64Value;
	double _basisDoubleValue;
	unsigned long long _attributeId;
	BOOL _risingEdge;
	BOOL _fallingEdge;
	double _duration;
	long long _type;

}

@property (assign,nonatomic) unsigned long long localTime;                     //@synthesize localTime=_localTime - In the implementation block
@property (nonatomic,retain) NSDate * creationDate;                            //@synthesize creationDate=_creationDate - In the implementation block
@property (nonatomic,retain) NSString * basisValueString;                      //@synthesize basisValueString=_basisValueString - In the implementation block
@property (assign,nonatomic) unsigned long long basisUint64Value;              //@synthesize basisUint64Value=_basisUint64Value - In the implementation block
@property (assign,nonatomic) double basisDoubleValue;                          //@synthesize basisDoubleValue=_basisDoubleValue - In the implementation block
@property (assign,nonatomic) BOOL risingEdge;                                  //@synthesize risingEdge=_risingEdge - In the implementation block
@property (assign,nonatomic) BOOL fallingEdge;                                 //@synthesize fallingEdge=_fallingEdge - In the implementation block
@property (assign,nonatomic) double duration;                                  //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) unsigned long long attributeId;                   //@synthesize attributeId=_attributeId - In the implementation block
@property (assign,nonatomic) long long type;                                   //@synthesize type=_type - In the implementation block
-(void)setType:(long long)arg1 ;
-(long long)type;
-(NSDate *)creationDate;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(void)setCreationDate:(NSDate *)arg1 ;
-(BOOL)risingEdge;
-(BOOL)fallingEdge;
-(id)initWithLocalTime:(unsigned long long)arg1 creationDate:(id)arg2 basisValueString:(id)arg3 basisUint64Value:(unsigned long long)arg4 basisDoubleValue:(double)arg5 risingEdge:(BOOL)arg6 fallingEdge:(BOOL)arg7 duration:(double)arg8 attributeId:(unsigned long long)arg9 type:(long long)arg10 ;
-(unsigned long long)localTime;
-(void)setLocalTime:(unsigned long long)arg1 ;
-(NSString *)basisValueString;
-(void)setBasisValueString:(NSString *)arg1 ;
-(unsigned long long)basisUint64Value;
-(void)setBasisUint64Value:(unsigned long long)arg1 ;
-(double)basisDoubleValue;
-(void)setBasisDoubleValue:(double)arg1 ;
-(void)setRisingEdge:(BOOL)arg1 ;
-(void)setFallingEdge:(BOOL)arg1 ;
-(unsigned long long)attributeId;
-(void)setAttributeId:(unsigned long long)arg1 ;
@end

