/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 7:01:42 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18J386)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */


#import <CMCapture/CMCapture-Structs.h>
@interface BWFormat : NSObject

@property (readonly) unsigned mediaType; 
@property (readonly) opaqueCMFormatDescriptionRef formatDescription; 
+(id)formatByResolvingRequirements:(id)arg1 ;
+(id)formatByResolvingRequirements:(id)arg1 printErrors:(BOOL)arg2 ;
-(opaqueCMFormatDescriptionRef)formatDescription;
-(unsigned)mediaType;
@end
