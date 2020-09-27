/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:12:09 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class INRestaurant, NSDateComponents, NSString, INRestaurantGuest, INRestaurantOffer;


@protocol INBookRestaurantReservationIntentExport <NSObject,JSExport>
@property (nonatomic,copy) INRestaurant * restaurant; 
@property (nonatomic,copy) NSDateComponents * bookingDateComponents; 
@property (assign,nonatomic) unsigned long long partySize; 
@property (nonatomic,copy) NSString * bookingIdentifier; 
@property (nonatomic,copy) INRestaurantGuest * guest; 
@property (nonatomic,copy) INRestaurantOffer * selectedOffer; 
@property (nonatomic,copy) NSString * guestProvidedSpecialRequestText; 
@required
-(id)init;
-(INRestaurantGuest *)guest;
-(void)setGuest:(id)arg1;
-(INRestaurant *)restaurant;
-(void)setRestaurant:(id)arg1;
-(unsigned long long)partySize;
-(void)setPartySize:(unsigned long long)arg1;
-(INRestaurantOffer *)selectedOffer;
-(void)setSelectedOffer:(id)arg1;
-(NSString *)guestProvidedSpecialRequestText;
-(void)setGuestProvidedSpecialRequestText:(id)arg1;
-(NSString *)bookingIdentifier;
-(void)setBookingIdentifier:(id)arg1;
-(NSDateComponents *)bookingDateComponents;
-(void)setBookingDateComponents:(id)arg1;

@end

