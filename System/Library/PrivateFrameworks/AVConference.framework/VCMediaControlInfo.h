/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:16:06 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol VCMediaControlInfoDelegate;
#import <AVConference/AVConference-Structs.h>
@interface VCMediaControlInfo : NSObject {

	unsigned short _bitmap;
	unsigned long long _serializedSize;
	id<VCMediaControlInfoDelegate> _delegate;
	unsigned char _version;
	unsigned char _fecFeedbackVersion;

}

@property (readonly) unsigned long long serializedSize;                  //@synthesize serializedSize=_serializedSize - In the implementation block
@property (assign) id<VCMediaControlInfoDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign) unsigned char version;                                //@synthesize version=_version - In the implementation block
@property (assign) unsigned char fecFeedbackVersion;                     //@synthesize fecFeedbackVersion=_fecFeedbackVersion - In the implementation block
-(void)invalidate;
-(id<VCMediaControlInfoDelegate>)delegate;
-(void)setDelegate:(id<VCMediaControlInfoDelegate>)arg1 ;
-(unsigned char)version;
-(void)setVersion:(unsigned char)arg1 ;
-(void)dispose;
-(id)initWithBuffer:(const char*)arg1 length:(unsigned long long)arg2 optionalControlInfo:(SCD_Struct_VC90*)arg3 version:(unsigned char)arg4 ;
-(int)configureWithBuffer:(const char*)arg1 length:(unsigned long long)arg2 optionalControlInfo:(SCD_Struct_VC90*)arg3 ;
-(void)setFecFeedbackVersion:(unsigned char)arg1 ;
-(unsigned char)fecFeedbackVersion;
-(int)setInfo:(void*)arg1 size:(unsigned long long)arg2 type:(unsigned)arg3 ;
-(int)setInfoUnserialized:(SCD_Struct_VC191*)arg1 type:(unsigned)arg2 ;
-(BOOL)hasInfoType:(unsigned)arg1 ;
-(int)getInfo:(void*)arg1 bufferLength:(unsigned long long)arg2 infoSize:(unsigned long long*)arg3 type:(unsigned)arg4 ;
-(int)getInfoUnserialized:(SCD_Struct_VC191*)arg1 type:(unsigned)arg2 ;
-(int)serializeToBuffer:(char*)arg1 bufferLength:(unsigned long long)arg2 blobLength:(unsigned long long*)arg3 ;
-(unsigned long long)serializedSize;
@end

