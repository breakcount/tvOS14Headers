/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 7:01:14 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18J386)
                       * Image Source: /System/Library/PrivateFrameworks/Message.framework/MailServices/IMAP.framework/IMAP
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <libobjc.A.dylib/MFMessageDataSection.h>

@class MFDataHolder;

@interface _MFWholeMessageSection : NSObject <MFMessageDataSection> {

	MFDataHolder* _dataHolder;

}

@property (nonatomic,retain) MFDataHolder * dataHolder;              //@synthesize dataHolder=_dataHolder - In the implementation block
-(void)dealloc;
-(BOOL)isComplete;
-(id)partName;
-(MFDataHolder *)dataHolder;
-(BOOL)isPartial;
-(void)setDataHolder:(MFDataHolder *)arg1 ;
@end
