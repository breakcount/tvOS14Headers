/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:02:59 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/CoreBrightness.framework/CoreBrightness
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class BrightnessSystemClient, CBBlueLightClient, CBAdaptationClient;

@interface CBClient : NSObject {

	BrightnessSystemClient* bsc;
	CBBlueLightClient* _blueLightClient;
	CBAdaptationClient* _adaptationClient;

}

@property (readonly) CBBlueLightClient * blueLightClient;                //@synthesize blueLightClient=_blueLightClient - In the implementation block
@property (readonly) CBAdaptationClient * adaptationClient;              //@synthesize adaptationClient=_adaptationClient - In the implementation block
+(BOOL)supportsBlueLightReduction;
+(BOOL)supportsAdaptation;
-(id)init;
-(void)dealloc;
-(CBBlueLightClient *)blueLightClient;
-(CBAdaptationClient *)adaptationClient;
@end

