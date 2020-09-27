/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:33:26 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CKDCancelling.h>

@protocol OS_dispatch_group;
@class NSError, CKPackage, CKAsset, NSArray, NSIndexSet, CKDProgressTracker, CKDMMCSRequestOptions, NSObject, CKDCancelTokenGroup;

@interface CKPackageDownloadTask : NSObject <CKDCancelling> {

	NSError* _error;
	CKPackage* _package;
	CKAsset* _manifestAsset;
	NSArray* _sectionAssets;
	id _itemIndices;
	NSIndexSet* _sectionIndices;
	CKDProgressTracker* _progressTracker;
	CKDMMCSRequestOptions* _MMCSRequestOptions;
	NSObject*<OS_dispatch_group> _group;
	CKDCancelTokenGroup* _cancelTokens;

}

@property (retain) NSError * error;                                                   //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) CKPackage * package;                                   //@synthesize package=_package - In the implementation block
@property (nonatomic,retain) CKAsset * manifestAsset;                                 //@synthesize manifestAsset=_manifestAsset - In the implementation block
@property (nonatomic,retain) NSArray * sectionAssets;                                 //@synthesize sectionAssets=_sectionAssets - In the implementation block
@property (nonatomic,retain) id itemIndices;                                          //@synthesize itemIndices=_itemIndices - In the implementation block
@property (nonatomic,retain) NSIndexSet * sectionIndices;                             //@synthesize sectionIndices=_sectionIndices - In the implementation block
@property (nonatomic,retain) CKDProgressTracker * progressTracker;                    //@synthesize progressTracker=_progressTracker - In the implementation block
@property (nonatomic,retain) CKDMMCSRequestOptions * MMCSRequestOptions;              //@synthesize MMCSRequestOptions=_MMCSRequestOptions - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_group> group;                      //@synthesize group=_group - In the implementation block
@property (nonatomic,retain) CKDCancelTokenGroup * cancelTokens;                      //@synthesize cancelTokens=_cancelTokens - In the implementation block
-(void)setGroup:(NSObject*<OS_dispatch_group>)arg1 ;
-(NSError *)error;
-(void)cancel;
-(void)setError:(NSError *)arg1 ;
-(NSObject*<OS_dispatch_group>)group;
-(CKDMMCSRequestOptions *)MMCSRequestOptions;
-(void)setMMCSRequestOptions:(CKDMMCSRequestOptions *)arg1 ;
-(CKPackage *)package;
-(CKDCancelTokenGroup *)cancelTokens;
-(id)initWithPackage:(id)arg1 trackProgress:(BOOL)arg2 ;
-(void)setManifestAsset:(CKAsset *)arg1 ;
-(void)setSectionAssets:(NSArray *)arg1 ;
-(CKAsset *)manifestAsset;
-(NSArray *)sectionAssets;
-(id)itemIndices;
-(void)setItemIndices:(id)arg1 ;
-(NSIndexSet *)sectionIndices;
-(void)setSectionIndices:(NSIndexSet *)arg1 ;
-(CKDProgressTracker *)progressTracker;
-(void)setProgressTracker:(CKDProgressTracker *)arg1 ;
-(void)setCancelTokens:(CKDCancelTokenGroup *)arg1 ;
@end

