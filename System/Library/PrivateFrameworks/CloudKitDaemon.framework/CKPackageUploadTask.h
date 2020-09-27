/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:33:30 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CKDCancelling.h>

@protocol OS_dispatch_group;
@class NSError, CKPackage, CKDMMCSItem, NSArray, CKDProgressTracker, CKDMMCSRequestOptions, NSObject, CKDCancelTokenGroup, NSString;

@interface CKPackageUploadTask : NSObject <CKDCancelling> {

	NSError* _error;
	CKPackage* _package;
	CKDMMCSItem* _MMCSManifestItem;
	NSArray* _MMCSSectionItems;
	CKDProgressTracker* _progressTracker;
	CKDMMCSRequestOptions* _MMCSRequestOptions;
	NSObject*<OS_dispatch_group> _group;
	CKDCancelTokenGroup* _cancelTokens;

}

@property (retain) NSError * error;                                                   //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) CKPackage * package;                                   //@synthesize package=_package - In the implementation block
@property (nonatomic,retain) CKDMMCSItem * MMCSManifestItem;                          //@synthesize MMCSManifestItem=_MMCSManifestItem - In the implementation block
@property (nonatomic,retain) NSArray * MMCSSectionItems;                              //@synthesize MMCSSectionItems=_MMCSSectionItems - In the implementation block
@property (nonatomic,retain) CKDProgressTracker * progressTracker;                    //@synthesize progressTracker=_progressTracker - In the implementation block
@property (nonatomic,retain) CKDMMCSRequestOptions * MMCSRequestOptions;              //@synthesize MMCSRequestOptions=_MMCSRequestOptions - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_group> group;                      //@synthesize group=_group - In the implementation block
@property (nonatomic,retain) CKDCancelTokenGroup * cancelTokens;                      //@synthesize cancelTokens=_cancelTokens - In the implementation block
@property (nonatomic,readonly) long long storageGroupingPolicy; 
@property (nonatomic,readonly) long long uploadRank; 
@property (nonatomic,readonly) NSString * recordKey; 
-(void)setGroup:(NSObject*<OS_dispatch_group>)arg1 ;
-(NSError *)error;
-(void)cancel;
-(void)setError:(NSError *)arg1 ;
-(NSObject*<OS_dispatch_group>)group;
-(id)activityCreate;
-(NSString *)recordKey;
-(long long)uploadRank;
-(long long)storageGroupingPolicy;
-(CKDMMCSRequestOptions *)MMCSRequestOptions;
-(void)setMMCSRequestOptions:(CKDMMCSRequestOptions *)arg1 ;
-(CKPackage *)package;
-(CKDCancelTokenGroup *)cancelTokens;
-(id)initWithPackage:(id)arg1 trackProgress:(BOOL)arg2 ;
-(CKDProgressTracker *)progressTracker;
-(void)setProgressTracker:(CKDProgressTracker *)arg1 ;
-(void)setCancelTokens:(CKDCancelTokenGroup *)arg1 ;
-(void)setMMCSManifestItem:(CKDMMCSItem *)arg1 ;
-(void)setMMCSSectionItems:(NSArray *)arg1 ;
-(NSArray *)MMCSSectionItems;
-(CKDMMCSItem *)MMCSManifestItem;
@end

