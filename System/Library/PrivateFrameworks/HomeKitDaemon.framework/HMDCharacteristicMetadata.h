/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:33:47 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/HMFDumpState.h>

@class NSNumber, NSString, NSArray;

@interface HMDCharacteristicMetadata : HMFObject <NSSecureCoding, NSCopying, HMFDumpState> {

	NSNumber* _minimumValue;
	NSNumber* _maximumValue;
	NSNumber* _stepValue;
	NSNumber* _maxLength;
	NSString* _format;
	NSString* _units;
	NSString* _manufacturerDescription;
	NSArray* _validValues;

}

@property (nonatomic,readonly) NSNumber * minimumValue;                              //@synthesize minimumValue=_minimumValue - In the implementation block
@property (nonatomic,readonly) NSNumber * maximumValue;                              //@synthesize maximumValue=_maximumValue - In the implementation block
@property (nonatomic,readonly) NSNumber * stepValue;                                 //@synthesize stepValue=_stepValue - In the implementation block
@property (nonatomic,readonly) NSNumber * maxLength;                                 //@synthesize maxLength=_maxLength - In the implementation block
@property (nonatomic,copy,readonly) NSString * format;                               //@synthesize format=_format - In the implementation block
@property (nonatomic,copy,readonly) NSString * units;                                //@synthesize units=_units - In the implementation block
@property (nonatomic,copy,readonly) NSString * manufacturerDescription;              //@synthesize manufacturerDescription=_manufacturerDescription - In the implementation block
@property (nonatomic,copy,readonly) NSArray * validValues;                           //@synthesize validValues=_validValues - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)characteristicMetadataWithDictionary:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)format;
-(NSNumber *)maxLength;
-(NSString *)units;
-(NSNumber *)minimumValue;
-(NSNumber *)maximumValue;
-(id)dumpState;
-(NSNumber *)stepValue;
-(NSString *)manufacturerDescription;
-(NSArray *)validValues;
-(id)initWithMinimumValue:(id)arg1 maximumValue:(id)arg2 stepValue:(id)arg3 maxLength:(id)arg4 validValues:(id)arg5 format:(id)arg6 units:(id)arg7 manufacturerDescription:(id)arg8 ;
-(id)_descriptionDetails;
@end

