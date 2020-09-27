/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:33:50 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@class NSString;

@interface HMDSyncOperationOptions : HMFObject {

	BOOL _cloudConflict;
	BOOL _delayRespected;
	unsigned long long _operationType;
	NSString* _zoneName;

}

@property (nonatomic,readonly) unsigned long long operationType;                       //@synthesize operationType=_operationType - In the implementation block
@property (nonatomic,readonly) NSString * zoneName;                                    //@synthesize zoneName=_zoneName - In the implementation block
@property (assign,getter=isCloudConflict,nonatomic) BOOL cloudConflict;                //@synthesize cloudConflict=_cloudConflict - In the implementation block
@property (assign,getter=isDelayRespected,nonatomic) BOOL delayRespected;              //@synthesize delayRespected=_delayRespected - In the implementation block
-(id)description;
-(NSString *)zoneName;
-(unsigned long long)operationType;
-(BOOL)isDelayRespected;
-(BOOL)isCloudConflict;
-(void)setCloudConflict:(BOOL)arg1 ;
-(void)setDelayRespected:(BOOL)arg1 ;
-(id)initWithOperationType:(unsigned long long)arg1 zoneName:(id)arg2 cloudConflict:(BOOL)arg3 delayRespected:(BOOL)arg4 ;
-(id)initWithOperationType:(unsigned long long)arg1 zoneName:(id)arg2 delayRespected:(BOOL)arg3 ;
@end

