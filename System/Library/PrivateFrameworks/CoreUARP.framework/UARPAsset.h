/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:43:55 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/CoreUARP.framework/CoreUARP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UARPAssetID, NSData;

@interface UARPAsset : NSObject {

	UARPAssetID* _id;
	NSData* _data;

}

@property (readonly) UARPAssetID * id;              //@synthesize id=_id - In the implementation block
@property (readonly) NSData * data;                 //@synthesize data=_data - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(NSData *)data;
-(UARPAssetID *)id;
-(id)initWithID:(id)arg1 ;
@end

