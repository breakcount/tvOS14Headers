/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:43:55 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/CoreUARP.framework/CoreUARP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreUARP/CoreUARP-Structs.h>
@interface UARPStats : NSObject {

	unsigned _packetsNoVersionAgreement;
	unsigned _packetsMissed;
	unsigned _packetsDuplicate;
	unsigned _packetsOutOfOrder;

}

@property (readonly) unsigned packetsNoVersionAgreement;              //@synthesize packetsNoVersionAgreement=_packetsNoVersionAgreement - In the implementation block
@property (readonly) unsigned packetsMissed;                          //@synthesize packetsMissed=_packetsMissed - In the implementation block
@property (readonly) unsigned packetsDuplicate;                       //@synthesize packetsDuplicate=_packetsDuplicate - In the implementation block
@property (readonly) unsigned packetsOutOfOrder;                      //@synthesize packetsOutOfOrder=_packetsOutOfOrder - In the implementation block
-(unsigned)packetsDuplicate;
-(unsigned)packetsOutOfOrder;
-(id)initWithStatistics:(UARPStatistics*)arg1 ;
-(unsigned)packetsNoVersionAgreement;
-(unsigned)packetsMissed;
@end

