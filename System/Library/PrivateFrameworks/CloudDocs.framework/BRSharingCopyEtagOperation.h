/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:25:46 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudDocs/BROperation.h>

@class NSURL;

@interface BRSharingCopyEtagOperation : BROperation {

	NSURL* _fileURL;
	/*^block*/id _sharingEtagCompletionBlock;

}

@property (copy) id sharingEtagCompletionBlock;              //@synthesize sharingEtagCompletionBlock=_sharingEtagCompletionBlock - In the implementation block
-(id)initWithURL:(id)arg1 ;
-(void)main;
-(void)finishWithResult:(id)arg1 error:(id)arg2 ;
-(id)sharingEtagCompletionBlock;
-(void)setSharingEtagCompletionBlock:(id)arg1 ;
@end

