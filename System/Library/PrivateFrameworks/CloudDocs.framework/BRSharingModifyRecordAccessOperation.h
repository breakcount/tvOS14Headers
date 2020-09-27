/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:25:46 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudDocs/BROperation.h>

@class NSURL;

@interface BRSharingModifyRecordAccessOperation : BROperation {

	NSURL* _fileURL;
	BOOL _allowAccess;
	/*^block*/id _allowAccessCompletionBlock;
	/*^block*/id _accessAllowedCompletionBlock;

}

@property (copy) id allowAccessCompletionBlock;                //@synthesize allowAccessCompletionBlock=_allowAccessCompletionBlock - In the implementation block
@property (copy) id accessAllowedCompletionBlock;              //@synthesize accessAllowedCompletionBlock=_accessAllowedCompletionBlock - In the implementation block
-(void)main;
-(void)finishWithResult:(id)arg1 error:(id)arg2 ;
-(id)allowAccessCompletionBlock;
-(void)setAllowAccessCompletionBlock:(id)arg1 ;
-(id)accessAllowedCompletionBlock;
-(void)setAccessAllowedCompletionBlock:(id)arg1 ;
-(id)initWithURL:(id)arg1 allowAccess:(BOOL)arg2 ;
@end

