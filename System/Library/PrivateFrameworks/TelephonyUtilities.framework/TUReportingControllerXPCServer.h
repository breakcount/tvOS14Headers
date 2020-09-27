/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:45 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TUReportingControllerXPCServer <NSObject>
@required
-(oneway void)registeredStream:(long long)arg1 withAvailability:(int)arg2 reply:(/*^block*/id)arg3;
-(oneway void)didCleanUpForStream:(long long)arg1 reply:(/*^block*/id)arg2;
-(oneway void)didStartRequestForStream:(long long)arg1 withTransactionID:(id)arg2 reply:(/*^block*/id)arg3;
-(oneway void)didReceiveResultsForStream:(long long)arg1 withTransactionID:(id)arg2 reply:(/*^block*/id)arg3;

@end

