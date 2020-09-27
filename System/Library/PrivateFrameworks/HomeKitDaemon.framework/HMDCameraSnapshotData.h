/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:33:50 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@class NSData, HMFOSTransaction, HMDVideoResolution;

@interface HMDCameraSnapshotData : HMFObject {

	NSData* _snapshotData;
	HMFOSTransaction* _snapshotDataTrasaction;
	HMDVideoResolution* _videoResolution;

}

@property (readonly) NSData * snapshotData;                                  //@synthesize snapshotData=_snapshotData - In the implementation block
@property (readonly) HMFOSTransaction * snapshotDataTrasaction;              //@synthesize snapshotDataTrasaction=_snapshotDataTrasaction - In the implementation block
@property (readonly) HMDVideoResolution * videoResolution;                   //@synthesize videoResolution=_videoResolution - In the implementation block
-(void)dealloc;
-(HMDVideoResolution *)videoResolution;
-(NSData *)snapshotData;
-(HMFOSTransaction *)snapshotDataTrasaction;
-(id)initWithSnapshotData:(id)arg1 videoResolution:(id)arg2 snapshotDataTrasaction:(id)arg3 ;
-(id)initWithSnapshotFile:(id)arg1 videoResolution:(id)arg2 ;
@end
