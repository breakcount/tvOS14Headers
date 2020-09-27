/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:54 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData;

@interface MNGuidanceJunctionViewImage : NSObject <NSSecureCoding> {

	unsigned long long _imageID;
	NSData* _imageData;

}

@property (nonatomic,readonly) unsigned long long imageID;              //@synthesize imageID=_imageID - In the implementation block
@property (nonatomic,readonly) NSData * imageData;                      //@synthesize imageData=_imageData - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSData *)imageData;
-(void)setImageData:(NSData *)arg1 ;
-(unsigned long long)imageID;
-(void)setImageID:(unsigned long long)arg1 ;
@end

