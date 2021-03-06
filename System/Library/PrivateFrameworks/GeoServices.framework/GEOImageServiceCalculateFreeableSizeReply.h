/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:11:41 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GEOXPCReply.h>
#import <libobjc.A.dylib/GEOXPCReply.h>

@class NSString;

@interface GEOImageServiceCalculateFreeableSizeReply : GEOXPCReply <GEOXPCReply> {

	unsigned long long _size;

}

@property (assign,nonatomic) unsigned long long size;               //@synthesize size=_size - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)size;
-(BOOL)isValid;
-(void)setSize:(unsigned long long)arg1 ;
-(id)initWithXPCDictionary:(id)arg1 error:(id*)arg2 ;
-(void)encodeToXPCDictionary:(id)arg1 ;
@end

