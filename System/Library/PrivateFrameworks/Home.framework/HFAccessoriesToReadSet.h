/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:16:42 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSNumber;

@interface HFAccessoriesToReadSet : NSObject {

	NSMutableDictionary* _accessories;
	NSNumber* _transportKey;

}

@property (nonatomic,retain) NSMutableDictionary * accessories;              //@synthesize accessories=_accessories - In the implementation block
@property (nonatomic,retain) NSNumber * transportKey;                        //@synthesize transportKey=_transportKey - In the implementation block
-(long long)count;
-(id)initWithTransportType:(id)arg1 ;
-(NSMutableDictionary *)accessories;
-(void)setAccessories:(NSMutableDictionary *)arg1 ;
-(void)markCharacteristicAsRead:(id)arg1 withLogger:(id)arg2 ;
-(NSNumber *)transportKey;
-(void)addCharacteristic:(id)arg1 ;
-(void)setTransportKey:(NSNumber *)arg1 ;
@end

