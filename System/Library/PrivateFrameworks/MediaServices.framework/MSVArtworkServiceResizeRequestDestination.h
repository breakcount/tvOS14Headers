/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:12:42 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaServices/MediaServices-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSURL;

@interface MSVArtworkServiceResizeRequestDestination : NSObject <NSSecureCoding> {

	long long _format;
	NSURL* _destinationURL;
	double _compressionQuality;
	CGSize _size;

}

@property (nonatomic,readonly) long long format;                       //@synthesize format=_format - In the implementation block
@property (nonatomic,readonly) CGSize size;                            //@synthesize size=_size - In the implementation block
@property (nonatomic,readonly) NSURL * destinationURL;                 //@synthesize destinationURL=_destinationURL - In the implementation block
@property (nonatomic,readonly) double compressionQuality;              //@synthesize compressionQuality=_compressionQuality - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)destinationWithFormat:(long long)arg1 size:(CGSize)arg2 url:(id)arg3 ;
+(id)jpegDestinationWithSize:(CGSize)arg1 compressionQuality:(double)arg2 url:(id)arg3 ;
-(id)description;
-(CGSize)size;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSURL *)destinationURL;
-(long long)format;
-(double)compressionQuality;
-(id)initWithFormat:(long long)arg1 size:(CGSize)arg2 compressionQuality:(double)arg3 destinationURL:(id)arg4 ;
@end

