/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:33:48 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class HMDCameraSnapshotSessionID, HMDProcessInfo;

@interface HMDSnapshotSessionApplicationID : HMFObject <NSCopying> {

	HMDCameraSnapshotSessionID* _sessionID;
	HMDProcessInfo* _processInfo;

}

@property (nonatomic,readonly) HMDCameraSnapshotSessionID * sessionID;              //@synthesize sessionID=_sessionID - In the implementation block
@property (nonatomic,readonly) HMDProcessInfo * processInfo;                        //@synthesize processInfo=_processInfo - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(HMDCameraSnapshotSessionID *)sessionID;
-(HMDProcessInfo *)processInfo;
-(id)initWithSessionID:(id)arg1 processInfo:(id)arg2 ;
@end

