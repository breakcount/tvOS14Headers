/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:02:43 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CoreTelephonyClient;

@interface CTCellularPlanProvisioning : NSObject {

	CoreTelephonyClient* _client;

}
-(id)init;
-(void)addPlanWith:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)supportsCellularPlan;
@end

