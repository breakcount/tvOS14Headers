/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:21 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CPLDiffTracker, NSArray;

@interface CPLRecordChangeDiffTracker : NSObject {

	CPLDiffTracker* _diffTracker;
	unsigned long long _trackingChangeType;

}

@property (nonatomic,readonly) NSArray * updatedProperties; 
-(id)description;
-(id)init;
-(id)redactedDescription;
-(NSArray *)updatedProperties;
-(void)withTrackerForChangeType:(unsigned long long)arg1 block:(/*^block*/id)arg2 ;
-(id)initWithTrackingChangeTypeMask:(unsigned long long)arg1 ;
-(BOOL)areObjectsDifferentOnProperty:(id)arg1 changeType:(unsigned long long)arg2 ;
@end
