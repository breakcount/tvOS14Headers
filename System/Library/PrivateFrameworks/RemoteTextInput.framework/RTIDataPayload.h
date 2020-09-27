/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:56:20 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/RemoteTextInput.framework/RemoteTextInput
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData;

@interface RTIDataPayload : NSObject <NSSecureCoding> {

	unsigned long long _version;
	NSData* _data;

}

@property (nonatomic,retain) NSData * data;                             //@synthesize data=_data - In the implementation block
@property (nonatomic,readonly) unsigned long long version;              //@synthesize version=_version - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)payloadWithData:(id)arg1 ;
+(id)payloadWithData:(id)arg1 version:(unsigned long long)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)init;
-(NSData *)data;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)version;
-(void)setData:(NSData *)arg1 ;
-(id)initWithData:(id)arg1 version:(unsigned long long)arg2 ;
@end
