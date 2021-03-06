/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:50:20 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/WorkflowKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface WFTrigger : NSObject <NSSecureCoding, NSCopying>
+(id)powerLogEventKindForTrigger:(id)arg1 ;
+(BOOL)supportsSecureCoding;
+(id)localizedDisplayName;
+(BOOL)isAllowedToRunAutomatically;
+(id)localizedDisplayExplanation;
+(BOOL)isSupportedOnThisDevice;
+(id)triggerWithSerializedData:(id)arg1 ;
-(id)contextStoreKeyPathForCurrentState;
-(id)contextStorePredicate;
-(unsigned)contextStoreQualityOfService;
-(BOOL)contextStoreRegistrationIsForWatch;
-(BOOL)shouldFireTriggerWithEventInfo:(id)arg1 error:(out id*)arg2 ;
-(BOOL)requiresEventInfoAsInput;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)serializedData;
-(id)localizedDescriptionWithConfigurationSummary;
-(id)localizedPastTenseDescription;
-(BOOL)hasValidConfiguration;
-(void)configureWithConfiguration:(id)arg1 ;
@end

