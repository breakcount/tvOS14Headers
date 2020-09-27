/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:43:57 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticRequestService.framework/DiagnosticRequestService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class DRSDampeningConfigurationMO, DRSDampeningEnforcementSettingsMO, NSSet;

@interface DRSDampeningManagerMO : NSManagedObject

@property (assign,nonatomic) long long totalCap; 
@property (nonatomic,retain) DRSDampeningConfigurationMO * defaultSignatureConfiguration; 
@property (nonatomic,retain) DRSDampeningEnforcementSettingsMO * enforcementSettings; 
@property (nonatomic,retain) NSSet * resourceConfigurations; 
@property (nonatomic,retain) NSSet * teamConfigurations; 
+(id)fetchRequest;
@end
