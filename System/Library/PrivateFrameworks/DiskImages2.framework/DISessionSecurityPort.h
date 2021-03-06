/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:43:58 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/DiskImages2.framework/DiskImages2
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSMachPort;

@interface DISessionSecurityPort : NSObject <NSSecureCoding, NSCoding> {

	NSMachPort* _port;

}

@property (retain) NSMachPort * port;              //@synthesize port=_port - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSMachPort *)port;
-(void)setPort:(NSMachPort *)arg1 ;
@end

