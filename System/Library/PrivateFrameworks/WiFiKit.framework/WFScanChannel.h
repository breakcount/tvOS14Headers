/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:33:12 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/WFScanableChannel.h>

@class NSString;

@interface WFScanChannel : NSObject <WFScanableChannel> {

	unsigned long long _channel;
	unsigned long long _flags;

}

@property (assign,nonatomic) unsigned long long channel;              //@synthesize channel=_channel - In the implementation block
@property (assign,nonatomic) unsigned long long flags;                //@synthesize flags=_flags - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(id)init;
-(unsigned long long)flags;
-(unsigned long long)channel;
-(void)setFlags:(unsigned long long)arg1 ;
-(void)setChannel:(unsigned long long)arg1 ;
-(id)initWithChannel:(long long)arg1 flags:(long long)arg2 ;
@end

