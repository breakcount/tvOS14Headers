/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:10 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/CoreMIDI.framework/CoreMIDI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreMIDI/CoreMIDI-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData;

@interface MIDICIDeviceInfo : NSObject <NSSecureCoding> {

	NSData* _manufacturerID;
	NSData* _family;
	NSData* _model;
	NSData* _revision;
	unsigned _midiDestination;

}

@property (nonatomic,readonly) NSData * manufacturerID;               //@synthesize manufacturerID=_manufacturerID - In the implementation block
@property (nonatomic,readonly) NSData * family;                       //@synthesize family=_family - In the implementation block
@property (nonatomic,readonly) NSData * modelNumber;                  //@synthesize model=_model - In the implementation block
@property (nonatomic,readonly) NSData * revisionLevel;                //@synthesize revision=_revision - In the implementation block
@property (nonatomic,readonly) unsigned midiDestination;              //@synthesize midiDestination=_midiDestination - In the implementation block
+(id)description;
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSData *)manufacturerID;
-(NSData *)family;
-(NSData *)modelNumber;
-(id)initWithDestination:(unsigned)arg1 manufacturer:(id)arg2 family:(id)arg3 model:(id)arg4 revision:(id)arg5 ;
-(id)initWithDestination:(unsigned)arg1 deviceID:(MIDICIDeviceIdentification*)arg2 ;
-(MIDICIDeviceIdentification)asDeviceIDStruct;
-(NSData *)revisionLevel;
-(unsigned)midiDestination;
@end

