/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:12:19 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData;

@interface _DKEventData : NSObject {

	unsigned long long _version;
	NSData* _event;
	unsigned long long _uncompressedLength;

}
+(id)fromPBCodable:(id)arg1 ;
-(id)toPBCodable;
@end

