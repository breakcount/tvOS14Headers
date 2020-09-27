/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:33:52 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class AWDHomeKitCalendarEvent, AWDHomeKitCharacteristicEvent, AWDHomeKitCharacteristicThresholdEvent, AWDHomeKitDurationEvent, AWDHomeKitLocationEvent, AWDHomeKitPresenceEvent, AWDHomeKitSignificantTimeEvent;

@interface AWDHomeKitEventTriggerEvent : PBCodable <NSCopying> {

	AWDHomeKitCalendarEvent* _calendarEvent;
	AWDHomeKitCharacteristicEvent* _charEvent;
	AWDHomeKitCharacteristicThresholdEvent* _charThresholdEvent;
	AWDHomeKitDurationEvent* _durationEvent;
	AWDHomeKitLocationEvent* _locationEvent;
	AWDHomeKitPresenceEvent* _presenceEvent;
	AWDHomeKitSignificantTimeEvent* _significantTimeEvent;
	AWDHomeKitCharacteristicThresholdEvent* _thresholdEvent;
	BOOL _endEvent;
	SCD_Struct_AW7 _has;

}

@property (assign,nonatomic) BOOL hasEndEvent; 
@property (assign,nonatomic) BOOL endEvent;                                                            //@synthesize endEvent=_endEvent - In the implementation block
@property (nonatomic,readonly) BOOL hasCharEvent; 
@property (nonatomic,retain) AWDHomeKitCharacteristicEvent * charEvent;                                //@synthesize charEvent=_charEvent - In the implementation block
@property (nonatomic,readonly) BOOL hasLocationEvent; 
@property (nonatomic,retain) AWDHomeKitLocationEvent * locationEvent;                                  //@synthesize locationEvent=_locationEvent - In the implementation block
@property (nonatomic,readonly) BOOL hasCharThresholdEvent; 
@property (nonatomic,retain) AWDHomeKitCharacteristicThresholdEvent * charThresholdEvent;              //@synthesize charThresholdEvent=_charThresholdEvent - In the implementation block
@property (nonatomic,readonly) BOOL hasCalendarEvent; 
@property (nonatomic,retain) AWDHomeKitCalendarEvent * calendarEvent;                                  //@synthesize calendarEvent=_calendarEvent - In the implementation block
@property (nonatomic,readonly) BOOL hasSignificantTimeEvent; 
@property (nonatomic,retain) AWDHomeKitSignificantTimeEvent * significantTimeEvent;                    //@synthesize significantTimeEvent=_significantTimeEvent - In the implementation block
@property (nonatomic,readonly) BOOL hasThresholdEvent; 
@property (nonatomic,retain) AWDHomeKitCharacteristicThresholdEvent * thresholdEvent;                  //@synthesize thresholdEvent=_thresholdEvent - In the implementation block
@property (nonatomic,readonly) BOOL hasPresenceEvent; 
@property (nonatomic,retain) AWDHomeKitPresenceEvent * presenceEvent;                                  //@synthesize presenceEvent=_presenceEvent - In the implementation block
@property (nonatomic,readonly) BOOL hasDurationEvent; 
@property (nonatomic,retain) AWDHomeKitDurationEvent * durationEvent;                                  //@synthesize durationEvent=_durationEvent - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(AWDHomeKitLocationEvent *)locationEvent;
-(void)setLocationEvent:(AWDHomeKitLocationEvent *)arg1 ;
-(BOOL)hasLocationEvent;
-(BOOL)endEvent;
-(void)setEndEvent:(BOOL)arg1 ;
-(AWDHomeKitPresenceEvent *)presenceEvent;
-(void)setPresenceEvent:(AWDHomeKitPresenceEvent *)arg1 ;
-(void)setCalendarEvent:(AWDHomeKitCalendarEvent *)arg1 ;
-(void)setSignificantTimeEvent:(AWDHomeKitSignificantTimeEvent *)arg1 ;
-(void)setCharEvent:(AWDHomeKitCharacteristicEvent *)arg1 ;
-(void)setCharThresholdEvent:(AWDHomeKitCharacteristicThresholdEvent *)arg1 ;
-(void)setDurationEvent:(AWDHomeKitDurationEvent *)arg1 ;
-(void)setThresholdEvent:(AWDHomeKitCharacteristicThresholdEvent *)arg1 ;
-(AWDHomeKitCharacteristicEvent *)charEvent;
-(AWDHomeKitCharacteristicThresholdEvent *)charThresholdEvent;
-(AWDHomeKitSignificantTimeEvent *)significantTimeEvent;
-(AWDHomeKitCharacteristicThresholdEvent *)thresholdEvent;
-(AWDHomeKitCalendarEvent *)calendarEvent;
-(AWDHomeKitDurationEvent *)durationEvent;
-(void)setHasEndEvent:(BOOL)arg1 ;
-(BOOL)hasEndEvent;
-(BOOL)hasCharEvent;
-(BOOL)hasCharThresholdEvent;
-(BOOL)hasCalendarEvent;
-(BOOL)hasSignificantTimeEvent;
-(BOOL)hasThresholdEvent;
-(BOOL)hasPresenceEvent;
-(BOOL)hasDurationEvent;
@end

