/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:12:10 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/INIntentResponse.h>
#import <libobjc.A.dylib/INGetCarPowerLevelStatusIntentResponseExport.h>

@class NSString, NSNumber, NSMeasurement, NSDictionary, NSDateComponents;

@interface INGetCarPowerLevelStatusIntentResponse : INIntentResponse <INGetCarPowerLevelStatusIntentResponseExport>

@property (nonatomic,readonly) long long code; 
@property (nonatomic,copy) NSString * carIdentifier; 
@property (nonatomic,copy) NSNumber * fuelPercentRemaining; 
@property (nonatomic,copy) NSNumber * chargePercentRemaining; 
@property (nonatomic,copy) NSMeasurement * distanceRemaining; 
@property (nonatomic,copy) NSNumber * charging; 
@property (nonatomic,copy) NSNumber * minutesToFull; 
@property (nonatomic,copy) NSMeasurement * maximumDistance; 
@property (nonatomic,copy) NSMeasurement * distanceRemainingElectric; 
@property (nonatomic,copy) NSMeasurement * maximumDistanceElectric; 
@property (nonatomic,copy) NSMeasurement * distanceRemainingFuel; 
@property (nonatomic,copy) NSMeasurement * maximumDistanceFuel; 
@property (nonatomic,copy) NSDictionary * consumptionFormulaArguments; 
@property (nonatomic,copy) NSDictionary * chargingFormulaArguments; 
@property (nonatomic,copy) NSDateComponents * dateOfLastStateUpdate; 
@property (nonatomic,copy) NSString * activeConnector; 
@property (nonatomic,copy) NSMeasurement * maximumBatteryCapacity; 
@property (nonatomic,copy) NSMeasurement * currentBatteryCapacity; 
@property (nonatomic,copy) NSMeasurement * minimumBatteryCapacity; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(long long)_codeFromType:(int)arg1 errorCode:(int)arg2 appLaunchRequested:(BOOL)arg3 ;
+(int)_typeFromCode:(long long)arg1 ;
+(int)_errorCodeFromCode:(long long)arg1 ;
+(BOOL)_appLaunchRequestedFromCode:(long long)arg1 ;
-(id)init;
-(long long)code;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)propertiesByName;
-(void)setMaximumDistance:(NSMeasurement *)arg1 ;
-(NSMeasurement *)maximumDistance;
-(void)setDistanceRemaining:(NSMeasurement *)arg1 ;
-(NSMeasurement *)distanceRemaining;
-(id)_dictionaryRepresentation;
-(id)initWithCode:(long long)arg1 userActivity:(id)arg2 ;
-(id)_initWithCode:(long long)arg1 userActivity:(id)arg2 ;
-(id)initWithBackingStore:(id)arg1 ;
-(long long)_intentResponseCode;
-(long long)_codeWithName:(id)arg1 ;
-(void)setPropertiesByName:(id)arg1 ;
-(NSString *)activeConnector;
-(void)setActiveConnector:(NSString *)arg1 ;
-(NSString *)carIdentifier;
-(void)setCarIdentifier:(NSString *)arg1 ;
-(NSNumber *)chargePercentRemaining;
-(void)setChargePercentRemaining:(NSNumber *)arg1 ;
-(NSNumber *)charging;
-(void)setCharging:(NSNumber *)arg1 ;
-(NSDictionary *)chargingFormulaArguments;
-(void)setChargingFormulaArguments:(NSDictionary *)arg1 ;
-(NSDictionary *)consumptionFormulaArguments;
-(void)setConsumptionFormulaArguments:(NSDictionary *)arg1 ;
-(NSMeasurement *)currentBatteryCapacity;
-(void)setCurrentBatteryCapacity:(NSMeasurement *)arg1 ;
-(NSDateComponents *)dateOfLastStateUpdate;
-(void)setDateOfLastStateUpdate:(NSDateComponents *)arg1 ;
-(NSMeasurement *)distanceRemainingElectric;
-(void)setDistanceRemainingElectric:(NSMeasurement *)arg1 ;
-(NSMeasurement *)distanceRemainingFuel;
-(void)setDistanceRemainingFuel:(NSMeasurement *)arg1 ;
-(NSNumber *)fuelPercentRemaining;
-(void)setFuelPercentRemaining:(NSNumber *)arg1 ;
-(NSMeasurement *)maximumBatteryCapacity;
-(void)setMaximumBatteryCapacity:(NSMeasurement *)arg1 ;
-(NSMeasurement *)maximumDistanceElectric;
-(void)setMaximumDistanceElectric:(NSMeasurement *)arg1 ;
-(NSMeasurement *)maximumDistanceFuel;
-(void)setMaximumDistanceFuel:(NSMeasurement *)arg1 ;
-(NSMeasurement *)minimumBatteryCapacity;
-(void)setMinimumBatteryCapacity:(NSMeasurement *)arg1 ;
-(NSNumber *)minutesToFull;
-(void)setMinutesToFull:(NSNumber *)arg1 ;
@end

