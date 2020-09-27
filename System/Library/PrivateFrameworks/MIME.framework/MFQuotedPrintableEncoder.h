/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:42 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MIME/MFBaseFilterDataConsumer.h>

@interface MFQuotedPrintableEncoder : MFBaseFilterDataConsumer {

	unsigned long long _line;
	unsigned long long _matchedFrom;
	unsigned char _lastHorizontalWhitespace;
	BOOL _forTextPart;
	BOOL _lastWasNewLine;
	BOOL _forHeader;

}

@property (assign,nonatomic) BOOL forTextPart;              //@synthesize forTextPart=_forTextPart - In the implementation block
@property (assign,nonatomic) BOOL forHeader;                //@synthesize forHeader=_forHeader - In the implementation block
+(unsigned long long)requiredSizeToEncodeHeaderBytes:(const char*)arg1 length:(unsigned long long)arg2 ;
-(long long)appendData:(id)arg1 ;
-(void)done;
-(void)setForTextPart:(BOOL)arg1 ;
-(void)setForHeader:(BOOL)arg1 ;
-(BOOL)forTextPart;
-(BOOL)forHeader;
@end

