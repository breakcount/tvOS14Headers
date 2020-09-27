/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:42 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/MIME.framework/MIME
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MIME/MIME-Structs.h>
#import <MIME/MFBaseFilterDataConsumer.h>

@interface MFRangedDataFilter : MFBaseFilterDataConsumer {

	NSRange _range;
	unsigned long long _consumedLength;

}

@property (assign,nonatomic) NSRange range;              //@synthesize range=_range - In the implementation block
+(id)rangedFilterWithConsumers:(id)arg1 range:(NSRange)arg2 ;
+(id)rangedFilterWithConsumer:(id)arg1 range:(NSRange)arg2 ;
-(long long)appendData:(id)arg1 ;
-(NSRange)range;
-(void)setRange:(NSRange)arg1 ;
@end

