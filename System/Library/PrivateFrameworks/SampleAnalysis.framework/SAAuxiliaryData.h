/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:56:28 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/SampleAnalysis.framework/SampleAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SampleAnalysis/SampleAnalysis-Structs.h>
@class SAFanSpeed, SATimestamp;

@interface SAAuxiliaryData : NSObject {

	SAFanSpeed* _fanSpeed;
	/*function pointer*/void** _mountStatus;
	SATimestamp* _timestamp;

}
+(id)auxiliaryDataForTimestamp:(id)arg1 ;
-(void)dealloc;
@end

