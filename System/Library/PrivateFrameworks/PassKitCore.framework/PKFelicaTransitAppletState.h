/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:09 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <PassKitCore/PKTransitAppletState.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSNumber, NSData, NSString;

@interface PKFelicaTransitAppletState : PKTransitAppletState <NSCopying> {

	BOOL _shinkansenTicketActive;
	BOOL _greenCarTicketUsed;
	BOOL _balanceAllowedForCommute;
	BOOL _lowBalanceNotificationEnabled;
	BOOL _hasShinkansenTicket;
	BOOL _hasGreenCarTicket;
	NSNumber* _shinkansenValidityStartDate;
	NSNumber* _shinkansenValidityTerm;
	NSData* _shinkansenOriginStationCode;
	NSData* _shinkansenDestinationStationCode;
	NSNumber* _shinkansenDepartureTime;
	NSNumber* _shinkansenArrivalTime;
	NSString* _shinkansenTrainName;
	NSNumber* _shinkansenCarNumber;
	NSNumber* _shinkansenSeatRow;
	NSNumber* _shinkansenSeatNumber;
	NSData* _shinkansenSecondaryOriginStationCode;
	NSData* _shinkansenSecondaryDestinationStationCode;
	NSNumber* _shinkansenSecondaryDepartureTime;
	NSNumber* _shinkansenSecondaryArrivalTime;
	NSString* _shinkansenSecondaryTrainName;
	NSNumber* _shinkansenSecondaryCarNumber;
	NSNumber* _shinkansenSecondarySeatRow;
	NSNumber* _shinkansenSecondarySeatNumber;
	NSData* _greenCarOriginStationCode;
	NSData* _greenCarDestinationStationCode;
	NSNumber* _greenCarValidityStartDate;
	NSString* _shinkansenOriginStationString;
	NSString* _shinkansenDestinationStationString;
	NSString* _shinkansenSecondaryOriginStationString;
	NSString* _shinkansenSecondaryDestinationStationString;
	NSString* _greenCarOriginStationString;
	NSString* _greenCarDestinationStationString;

}

@property (assign,getter=isShinkansenTicketActive,nonatomic) BOOL shinkansenTicketActive;                            //@synthesize shinkansenTicketActive=_shinkansenTicketActive - In the implementation block
@property (assign,getter=isGreenCarTicketUsed,nonatomic) BOOL greenCarTicketUsed;                                    //@synthesize greenCarTicketUsed=_greenCarTicketUsed - In the implementation block
@property (assign,getter=isBalanceAllowedForCommute,nonatomic) BOOL balanceAllowedForCommute;                        //@synthesize balanceAllowedForCommute=_balanceAllowedForCommute - In the implementation block
@property (assign,getter=isLowBalanceNotificationEnabled,nonatomic) BOOL lowBalanceNotificationEnabled;              //@synthesize lowBalanceNotificationEnabled=_lowBalanceNotificationEnabled - In the implementation block
@property (nonatomic,copy) NSNumber * shinkansenValidityStartDate;                                                   //@synthesize shinkansenValidityStartDate=_shinkansenValidityStartDate - In the implementation block
@property (nonatomic,copy) NSNumber * shinkansenValidityTerm;                                                        //@synthesize shinkansenValidityTerm=_shinkansenValidityTerm - In the implementation block
@property (nonatomic,copy) NSData * shinkansenOriginStationCode;                                                     //@synthesize shinkansenOriginStationCode=_shinkansenOriginStationCode - In the implementation block
@property (nonatomic,copy) NSData * shinkansenDestinationStationCode;                                                //@synthesize shinkansenDestinationStationCode=_shinkansenDestinationStationCode - In the implementation block
@property (nonatomic,copy) NSNumber * shinkansenDepartureTime;                                                       //@synthesize shinkansenDepartureTime=_shinkansenDepartureTime - In the implementation block
@property (nonatomic,copy) NSNumber * shinkansenArrivalTime;                                                         //@synthesize shinkansenArrivalTime=_shinkansenArrivalTime - In the implementation block
@property (nonatomic,copy) NSString * shinkansenTrainName;                                                           //@synthesize shinkansenTrainName=_shinkansenTrainName - In the implementation block
@property (nonatomic,copy) NSNumber * shinkansenCarNumber;                                                           //@synthesize shinkansenCarNumber=_shinkansenCarNumber - In the implementation block
@property (nonatomic,copy) NSNumber * shinkansenSeatNumber;                                                          //@synthesize shinkansenSeatNumber=_shinkansenSeatNumber - In the implementation block
@property (nonatomic,copy) NSNumber * shinkansenSeatRow;                                                             //@synthesize shinkansenSeatRow=_shinkansenSeatRow - In the implementation block
@property (nonatomic,copy) NSData * shinkansenSecondaryOriginStationCode;                                            //@synthesize shinkansenSecondaryOriginStationCode=_shinkansenSecondaryOriginStationCode - In the implementation block
@property (nonatomic,copy) NSData * shinkansenSecondaryDestinationStationCode;                                       //@synthesize shinkansenSecondaryDestinationStationCode=_shinkansenSecondaryDestinationStationCode - In the implementation block
@property (nonatomic,copy) NSNumber * shinkansenSecondaryDepartureTime;                                              //@synthesize shinkansenSecondaryDepartureTime=_shinkansenSecondaryDepartureTime - In the implementation block
@property (nonatomic,copy) NSNumber * shinkansenSecondaryArrivalTime;                                                //@synthesize shinkansenSecondaryArrivalTime=_shinkansenSecondaryArrivalTime - In the implementation block
@property (nonatomic,copy) NSString * shinkansenSecondaryTrainName;                                                  //@synthesize shinkansenSecondaryTrainName=_shinkansenSecondaryTrainName - In the implementation block
@property (nonatomic,copy) NSNumber * shinkansenSecondaryCarNumber;                                                  //@synthesize shinkansenSecondaryCarNumber=_shinkansenSecondaryCarNumber - In the implementation block
@property (nonatomic,copy) NSNumber * shinkansenSecondarySeatRow;                                                    //@synthesize shinkansenSecondarySeatRow=_shinkansenSecondarySeatRow - In the implementation block
@property (nonatomic,copy) NSNumber * shinkansenSecondarySeatNumber;                                                 //@synthesize shinkansenSecondarySeatNumber=_shinkansenSecondarySeatNumber - In the implementation block
@property (nonatomic,copy) NSData * greenCarOriginStationCode;                                                       //@synthesize greenCarOriginStationCode=_greenCarOriginStationCode - In the implementation block
@property (nonatomic,copy) NSData * greenCarDestinationStationCode;                                                  //@synthesize greenCarDestinationStationCode=_greenCarDestinationStationCode - In the implementation block
@property (nonatomic,copy) NSNumber * greenCarValidityStartDate;                                                     //@synthesize greenCarValidityStartDate=_greenCarValidityStartDate - In the implementation block
@property (assign,nonatomic) BOOL hasGreenCarTicket;                                                                 //@synthesize hasGreenCarTicket=_hasGreenCarTicket - In the implementation block
@property (assign,nonatomic) BOOL hasShinkansenTicket;                                                               //@synthesize hasShinkansenTicket=_hasShinkansenTicket - In the implementation block
@property (nonatomic,copy) NSString * shinkansenOriginStationString;                                                 //@synthesize shinkansenOriginStationString=_shinkansenOriginStationString - In the implementation block
@property (nonatomic,copy) NSString * shinkansenDestinationStationString;                                            //@synthesize shinkansenDestinationStationString=_shinkansenDestinationStationString - In the implementation block
@property (nonatomic,copy) NSString * shinkansenSecondaryOriginStationString;                                        //@synthesize shinkansenSecondaryOriginStationString=_shinkansenSecondaryOriginStationString - In the implementation block
@property (nonatomic,copy) NSString * shinkansenSecondaryDestinationStationString;                                   //@synthesize shinkansenSecondaryDestinationStationString=_shinkansenSecondaryDestinationStationString - In the implementation block
@property (nonatomic,copy) NSString * greenCarOriginStationString;                                                   //@synthesize greenCarOriginStationString=_greenCarOriginStationString - In the implementation block
@property (nonatomic,copy) NSString * greenCarDestinationStationString;                                              //@synthesize greenCarDestinationStationString=_greenCarDestinationStationString - In the implementation block
@property (getter=isInShinkansenStation,nonatomic,readonly) BOOL inShinkansenStation; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isInShinkansenStation;
-(void)setShinkansenTicketActive:(BOOL)arg1 ;
-(void)setGreenCarTicketUsed:(BOOL)arg1 ;
-(void)setBalanceAllowedForCommute:(BOOL)arg1 ;
-(void)setLowBalanceNotificationEnabled:(BOOL)arg1 ;
-(void)setShinkansenValidityStartDate:(NSNumber *)arg1 ;
-(void)setShinkansenValidityTerm:(NSNumber *)arg1 ;
-(void)setShinkansenOriginStationCode:(NSData *)arg1 ;
-(void)setShinkansenDestinationStationCode:(NSData *)arg1 ;
-(void)setShinkansenDepartureTime:(NSNumber *)arg1 ;
-(void)setShinkansenArrivalTime:(NSNumber *)arg1 ;
-(void)setShinkansenTrainName:(NSString *)arg1 ;
-(void)setShinkansenCarNumber:(NSNumber *)arg1 ;
-(void)setShinkansenSeatRow:(NSNumber *)arg1 ;
-(void)setShinkansenSeatNumber:(NSNumber *)arg1 ;
-(void)setShinkansenSecondaryOriginStationCode:(NSData *)arg1 ;
-(void)setShinkansenSecondaryDestinationStationCode:(NSData *)arg1 ;
-(void)setShinkansenSecondaryDepartureTime:(NSNumber *)arg1 ;
-(void)setShinkansenSecondaryArrivalTime:(NSNumber *)arg1 ;
-(void)setShinkansenSecondaryTrainName:(NSString *)arg1 ;
-(void)setShinkansenSecondaryCarNumber:(NSNumber *)arg1 ;
-(void)setShinkansenSecondarySeatRow:(NSNumber *)arg1 ;
-(void)setShinkansenSecondarySeatNumber:(NSNumber *)arg1 ;
-(void)setGreenCarOriginStationCode:(NSData *)arg1 ;
-(void)setGreenCarDestinationStationCode:(NSData *)arg1 ;
-(void)setGreenCarValidityStartDate:(NSNumber *)arg1 ;
-(void)setHasShinkansenTicket:(BOOL)arg1 ;
-(void)setHasGreenCarTicket:(BOOL)arg1 ;
-(void)setShinkansenOriginStationString:(NSString *)arg1 ;
-(void)setShinkansenDestinationStationString:(NSString *)arg1 ;
-(void)setShinkansenSecondaryOriginStationString:(NSString *)arg1 ;
-(void)setShinkansenSecondaryDestinationStationString:(NSString *)arg1 ;
-(void)setGreenCarOriginStationString:(NSString *)arg1 ;
-(void)setGreenCarDestinationStationString:(NSString *)arg1 ;
-(id)processUpdateWithAppletHistory:(id)arg1 concreteTransactions:(id*)arg2 ephemeralTransaction:(id*)arg3 ;
-(BOOL)isShinkansenTicketActive;
-(BOOL)isGreenCarTicketUsed;
-(BOOL)isBalanceAllowedForCommute;
-(BOOL)isLowBalanceNotificationEnabled;
-(NSData *)shinkansenOriginStationCode;
-(NSData *)shinkansenDestinationStationCode;
-(NSData *)shinkansenSecondaryOriginStationCode;
-(NSData *)shinkansenSecondaryDestinationStationCode;
-(NSData *)greenCarOriginStationCode;
-(NSData *)greenCarDestinationStationCode;
-(void)_resolveTransactionsFromState:(id)arg1 toState:(id)arg2 withHistoryRecords:(id)arg3 concreteTransactions:(id*)arg4 ephemeralTransaction:(id*)arg5 ;
-(BOOL)isInStation;
-(id)_concreteTransactionForRecordAtIndex:(unsigned long long)arg1 withBalance:(unsigned*)arg2 historyRecords:(id)arg3 terminalState:(id)arg4 numberProcessed:(unsigned long long*)arg5 exitedShinkansen:(BOOL*)arg6 ;
-(id)processUpdateWithAppletHistory:(id)arg1 concreteTransactions:(id*)arg2 ephemeralTransaction:(id*)arg3 mutatedBalances:(id*)arg4 balanceLabelDictionary:(id)arg5 unitDictionary:(id)arg6 ;
-(id)transitPassPropertiesWithPaymentApplication:(id)arg1 ;
-(NSNumber *)shinkansenValidityStartDate;
-(NSNumber *)shinkansenValidityTerm;
-(NSNumber *)shinkansenDepartureTime;
-(NSNumber *)shinkansenArrivalTime;
-(NSString *)shinkansenTrainName;
-(NSNumber *)shinkansenCarNumber;
-(NSNumber *)shinkansenSeatRow;
-(NSNumber *)shinkansenSeatNumber;
-(NSNumber *)shinkansenSecondaryDepartureTime;
-(NSNumber *)shinkansenSecondaryArrivalTime;
-(NSString *)shinkansenSecondaryTrainName;
-(NSNumber *)shinkansenSecondaryCarNumber;
-(NSNumber *)shinkansenSecondarySeatRow;
-(NSNumber *)shinkansenSecondarySeatNumber;
-(BOOL)hasShinkansenTicket;
-(NSNumber *)greenCarValidityStartDate;
-(BOOL)hasGreenCarTicket;
-(NSString *)shinkansenOriginStationString;
-(NSString *)shinkansenDestinationStationString;
-(NSString *)shinkansenSecondaryOriginStationString;
-(NSString *)shinkansenSecondaryDestinationStationString;
-(NSString *)greenCarOriginStationString;
-(NSString *)greenCarDestinationStationString;
@end

