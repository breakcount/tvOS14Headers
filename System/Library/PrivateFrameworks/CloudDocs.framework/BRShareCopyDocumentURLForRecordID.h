/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:25:46 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudDocs/BROperation.h>

@class CKRecordID;

@interface BRShareCopyDocumentURLForRecordID : BROperation {

	CKRecordID* _recordID;
	BOOL _withServerLookup;
	/*^block*/id _copyDocumentURLCompletionBlock;

}

@property (copy) id copyDocumentURLCompletionBlock;              //@synthesize copyDocumentURLCompletionBlock=_copyDocumentURLCompletionBlock - In the implementation block
-(void)main;
-(void)finishWithResult:(id)arg1 error:(id)arg2 ;
-(id)copyDocumentURLCompletionBlock;
-(void)setCopyDocumentURLCompletionBlock:(id)arg1 ;
-(id)initWithRecordID:(id)arg1 withServerLookup:(BOOL)arg2 ;
@end

