/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:36:20 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomNetworkUsage.framework/SymptomNetworkUsage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface NWInterfaceSource : NSObject {

	unsigned _ifIndex;
	unsigned long long _srcRef;
	unsigned long long _threshold;

}

@property (assign) unsigned long long srcRef;                 //@synthesize srcRef=_srcRef - In the implementation block
@property (assign) unsigned long long threshold;              //@synthesize threshold=_threshold - In the implementation block
@property (assign) unsigned ifIndex;                          //@synthesize ifIndex=_ifIndex - In the implementation block
-(void)setThreshold:(unsigned long long)arg1 ;
-(unsigned long long)threshold;
-(unsigned)ifIndex;
-(void)setIfIndex:(unsigned)arg1 ;
-(unsigned long long)srcRef;
-(void)setSrcRef:(unsigned long long)arg1 ;
@end
