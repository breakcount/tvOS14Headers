/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:50:14 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSError;

@interface WCAFetchResponse : NSObject <NSSecureCoding> {

	NSError* _error;

}

@property (nonatomic,retain) NSError * error;              //@synthesize error=_error - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)fetchResponseWithError:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
@end

