/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:54:53 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFOperation.h>

@protocol HMIHomePersonManagerDataSource;
@class HMIFaceprint;

@interface HMIStoreFaceprintOperation : HMFOperation {

	id<HMIHomePersonManagerDataSource> _dataSource;
	HMIFaceprint* _faceprint;

}

@property (readonly) id<HMIHomePersonManagerDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (readonly) HMIFaceprint * faceprint;                                   //@synthesize faceprint=_faceprint - In the implementation block
+(id)logCategory;
-(void)main;
-(id<HMIHomePersonManagerDataSource>)dataSource;
-(HMIFaceprint *)faceprint;
-(id)initWithDataSource:(id)arg1 faceprint:(id)arg2 ;
@end

