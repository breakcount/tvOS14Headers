/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:23 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <EventKit/EventKit-Structs.h>
@interface EKCompatibility : NSObject
+(BOOL)isProgramSDKAtLeast:(SCD_Struct_EK2)arg1 ;
+(BOOL)simulateLegacyBehaviors;
+(void)perform:(/*^block*/id)arg1 whileSimulatingLegacyBehaviors:(BOOL)arg2 ;
+(void)setSimulateLegacyBehaviors:(BOOL)arg1 ;
+(void)performWhileSimulatingLegacyBehaviors:(/*^block*/id)arg1 ;
@end

