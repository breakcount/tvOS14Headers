/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:33:28 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CKDOperation.h>

@class NSArray;

@interface CKDFetchWhitelistedBundleIDsOperation : CKDOperation {

	NSArray* _bundleIDs;

}

@property (nonatomic,copy) NSArray * bundleIDs;                                                                           //@synthesize bundleIDs=_bundleIDs - In the implementation block
@property (nonatomic,retain) id<CKFetchWhitelistedBundleIDsOperationCallbacks> clientOperationCallbackProxy; 
-(void)main;
-(int)operationType;
-(NSArray *)bundleIDs;
-(void)setBundleIDs:(NSArray *)arg1 ;
-(id)activityCreate;
-(id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2 ;
@end
