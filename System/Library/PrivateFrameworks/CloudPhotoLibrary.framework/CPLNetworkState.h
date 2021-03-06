/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:20 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_nw_path;
@class NSObject, NSDictionary;

@interface CPLNetworkState : NSObject {

	BOOL _cellularRestricted;
	BOOL _inAirplaneMode;
	NSObject*<OS_nw_path> _networkPath;

}

@property (nonatomic,readonly) NSObject*<OS_nw_path> networkPath;                                //@synthesize networkPath=_networkPath - In the implementation block
@property (getter=isConnected,nonatomic,readonly) BOOL connected; 
@property (getter=isConstrained,nonatomic,readonly) BOOL constrained; 
@property (getter=isCellular,nonatomic,readonly) BOOL cellular; 
@property (getter=isCellularRestricted,nonatomic,readonly) BOOL cellularRestricted;              //@synthesize cellularRestricted=_cellularRestricted - In the implementation block
@property (getter=isInAirplaneMode,nonatomic,readonly) BOOL inAirplaneMode;                      //@synthesize inAirplaneMode=_inAirplaneMode - In the implementation block
@property (nonatomic,readonly) BOOL canUseNetwork; 
@property (nonatomic,readonly) NSDictionary * plistDescription; 
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)redactedDescription;
-(BOOL)isCellular;
-(BOOL)isConstrained;
-(BOOL)isConnected;
-(id)initWithNetworkPath:(id)arg1 cellularRestricted:(BOOL)arg2 inAirplaneMode:(BOOL)arg3 ;
-(BOOL)canUseNetwork;
-(NSDictionary *)plistDescription;
-(BOOL)isFunctionallyEqual:(id)arg1 ;
-(BOOL)isCellularRestricted;
-(BOOL)isInAirplaneMode;
-(NSObject*<OS_nw_path>)networkPath;
@end

