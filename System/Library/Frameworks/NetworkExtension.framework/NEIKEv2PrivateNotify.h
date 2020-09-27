/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:12:51 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface NEIKEv2PrivateNotify : NSObject <NSCopying> {

	unsigned short _notifyStatus;
	NSData* _notifyData;

}

@property (assign,nonatomic) unsigned short notifyStatus;              //@synthesize notifyStatus=_notifyStatus - In the implementation block
@property (nonatomic,retain) NSData * notifyData;                      //@synthesize notifyData=_notifyData - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)setNotifyStatus:(unsigned short)arg1 ;
-(void)setNotifyData:(NSData *)arg1 ;
-(unsigned short)notifyStatus;
-(NSData *)notifyData;
-(id)initWithNotifyStatus:(unsigned short)arg1 notifyData:(id)arg2 ;
@end

