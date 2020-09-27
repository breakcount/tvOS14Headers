/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:51 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSURL, NSArray;

@interface MFAttachmentCompositionContext : NSObject {

	NSString* _contextID;
	NSURL* _attachmentsBaseURL;

}

@property (nonatomic,readonly) NSString * contextID;                //@synthesize contextID=_contextID - In the implementation block
@property (nonatomic,copy) NSURL * attachmentsBaseURL;              //@synthesize attachmentsBaseURL=_attachmentsBaseURL - In the implementation block
@property (nonatomic,readonly) NSArray * attachments; 
-(id)init;
-(void)dealloc;
-(NSArray *)attachments;
-(NSString *)contextID;
-(NSURL *)attachmentsBaseURL;
-(id)initWithContextID:(id)arg1 ;
-(void)setAttachmentsBaseURL:(NSURL *)arg1 ;
@end

