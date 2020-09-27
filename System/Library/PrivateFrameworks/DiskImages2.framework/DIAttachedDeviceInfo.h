/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:43:58 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/DiskImages2.framework/DiskImages2
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSURL;

@interface DIAttachedDeviceInfo : NSObject {

	NSString* _BSDname;
	NSURL* _imageURL;

}

@property (readonly) NSString * BSDname;              //@synthesize BSDname=_BSDname - In the implementation block
@property (readonly) NSURL * imageURL;                //@synthesize imageURL=_imageURL - In the implementation block
+(id)newDevicesArrayWithError:(id*)arg1 ;
+(id)copyImageURLFromDevice:(id)arg1 error:(id*)arg2 ;
-(id)description;
-(NSURL *)imageURL;
-(id)initWithService:(unsigned)arg1 error:(id*)arg2 ;
-(NSString *)BSDname;
@end

