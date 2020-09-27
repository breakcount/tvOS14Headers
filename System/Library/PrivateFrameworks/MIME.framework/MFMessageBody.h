/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:42 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MFMessage;

@interface MFMessageBody : NSObject {

	MFMessage* _message;

}
-(void)dealloc;
-(id)attachments;
-(id)message;
-(void)setMessage:(id)arg1 ;
-(id)rawData;
-(id)contentToOffset:(unsigned long long)arg1 resultOffset:(unsigned long long*)arg2 asHTML:(BOOL)arg3 isComplete:(BOOL*)arg4 ;
-(id)contentToOffset:(unsigned long long)arg1 resultOffset:(unsigned long long*)arg2 asHTML:(BOOL)arg3 ;
-(id)htmlContentToOffset:(unsigned long long)arg1 resultOffset:(unsigned long long*)arg2 ;
-(id)htmlContent;
-(BOOL)isHTML;
-(BOOL)isRich;
-(unsigned)numberOfAttachmentsSigned:(BOOL*)arg1 encrypted:(BOOL*)arg2 ;
-(id)attachmentURLs;
-(id)textHtmlPart;
@end

