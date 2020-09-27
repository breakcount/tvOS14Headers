/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:36:20 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSUUID;

@interface NWUUIDMapper : NSObject {

	double _lastAccessDate;
	NSUUID* _externalUUID;
	unsigned long long _usageFlags;

}

@property (assign,nonatomic) double lastAccessDate;                      //@synthesize lastAccessDate=_lastAccessDate - In the implementation block
@property (nonatomic,retain) NSUUID * externalUUID;                      //@synthesize externalUUID=_externalUUID - In the implementation block
@property (assign,nonatomic) unsigned long long usageFlags;              //@synthesize usageFlags=_usageFlags - In the implementation block
-(id)description;
-(unsigned long long)usageFlags;
-(NSUUID *)externalUUID;
-(void)setExternalUUID:(NSUUID *)arg1 ;
-(double)lastAccessDate;
-(void)setLastAccessDate:(double)arg1 ;
-(void)setUsageFlags:(unsigned long long)arg1 ;
@end
