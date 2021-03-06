/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:40:45 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CMCapture/BWFormat.h>

@class NSArray;

@interface BWMetadataObjectFormat : BWFormat {

	NSArray* _metadataIdentifiers;

}
+(void)initialize;
+(id)formatWithMetadataIdentifiers:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)debugDescription;
-(id)description;
-(void)dealloc;
-(unsigned)mediaType;
-(id)_initWithMetadataIdentifiers:(id)arg1 ;
@end

