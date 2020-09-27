/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:33:36 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSNumber, TDEffectParameterType, TDEffectComponent;

@interface TDEffectParameterValue : NSManagedObject

@property (nonatomic,retain) NSNumber * intValue; 
@property (nonatomic,retain) NSNumber * floatValue; 
@property (nonatomic,retain) NSNumber * colorValue; 
@property (nonatomic,retain) NSNumber * angleValue; 
@property (nonatomic,retain) TDEffectParameterType * parameterType; 
@property (nonatomic,retain) TDEffectComponent * component; 
@property (assign,nonatomic) unsigned long long redComponent; 
@property (assign,nonatomic) unsigned long long greenComponent; 
@property (assign,nonatomic) unsigned long long blueComponent; 
+(id)keyPathsForValuesAffectingColor;
+(id)keyPathsForValuesAffectingRedComponent;
+(id)keyPathsForValuesAffectingGreenComponent;
+(id)keyPathsForValuesAffectingBlueComponent;
-(void)setRedComponent:(unsigned long long)arg1 ;
-(void)setGreenComponent:(unsigned long long)arg1 ;
-(void)setBlueComponent:(unsigned long long)arg1 ;
-(unsigned long long)redComponent;
-(unsigned long long)greenComponent;
-(unsigned long long)blueComponent;
@end

