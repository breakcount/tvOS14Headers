/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 7:01:42 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18J386)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <CMCapture/BWDeferredDictionaryIntermediate.h>

@class NSString;

@interface BWDeferredMetadataIntermediate : BWDeferredDictionaryIntermediate {

	NSString* _bufferTag;

}

@property (nonatomic,readonly) NSString * bufferTag;              //@synthesize bufferTag=_bufferTag - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithMetadata:(id)arg1 tag:(id)arg2 bufferTag:(id)arg3 URL:(id)arg4 ;
-(NSString *)bufferTag;
@end
