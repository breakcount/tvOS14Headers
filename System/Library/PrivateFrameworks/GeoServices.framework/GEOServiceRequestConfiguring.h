/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:11:21 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol GEOServiceRequestConfiguring <NSObject>
@optional
-(unsigned long long)multipathServiceType;
-(double)timeout;
-(id)additionalStatesForNetworkEvent;

@required
-(unsigned long long)urlType;
-(SCD_Struct_GE4*)dataRequestKindForRequest:(id)arg1 traits:(id)arg2;
-(id)additionalURLQueryItems;
-(id)additionalHTTPHeaders;
-(id)debugRequestName;
-(id)serviceTypeNumber;

@end

