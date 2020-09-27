/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:14 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/AdSupport.framework/AdSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSUUID;

@interface ASIdentifierManager : NSObject

@property (nonatomic,readonly) NSUUID * advertisingIdentifier; 
@property (getter=isAdvertisingTrackingEnabled,nonatomic,readonly) BOOL advertisingTrackingEnabled; 
+(id)sharedManager;
-(void)clearAdvertisingIdentifier;
-(BOOL)isAdvertisingTrackingEnabled;
-(NSUUID *)advertisingIdentifier;
@end

