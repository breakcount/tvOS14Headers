/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:12:22 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/vCard.framework/vCard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CNVCardSerializationStorage.h>

@class NSMutableString, NSString;

@interface CNVCardStringStorage : NSObject <CNVCardSerializationStorage> {

	NSMutableString* _string;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)storageWithString:(id)arg1 ;
-(void)appendString:(id)arg1 ;
-(void)appendFormat:(id)arg1 ;
-(id)initWithString:(id)arg1 ;
-(void)appendData:(id)arg1 ;
-(id)insertionMarker;
-(unsigned long long)estimatedDataLength;
-(void)insertString:(id)arg1 atMarker:(id)arg2 ;
-(unsigned long long)currentLength;
-(void)appendString:(id)arg1 usingEncoding:(unsigned long long)arg2 ;
@end

