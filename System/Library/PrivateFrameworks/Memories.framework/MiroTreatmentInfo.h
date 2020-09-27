/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:33:59 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AltAspect.h>

@class NSDictionary, NSString;

@interface MiroTreatmentInfo : NSObject <AltAspect> {

	BOOL _treatmentApplied;
	int _requiredTreatmentStyle;
	int _assignedTreatmentStyle;
	double _altAspect;
	unsigned long long _assignedKBStyle;
	NSDictionary* _assignedTreatmentDict;

}

@property (assign,nonatomic) double altAspect;                                  //@synthesize altAspect=_altAspect - In the implementation block
@property (assign,nonatomic) int requiredTreatmentStyle;                        //@synthesize requiredTreatmentStyle=_requiredTreatmentStyle - In the implementation block
@property (assign,nonatomic) unsigned long long assignedKBStyle;                //@synthesize assignedKBStyle=_assignedKBStyle - In the implementation block
@property (assign,nonatomic) BOOL treatmentApplied;                             //@synthesize treatmentApplied=_treatmentApplied - In the implementation block
@property (assign,nonatomic) int assignedTreatmentStyle;                        //@synthesize assignedTreatmentStyle=_assignedTreatmentStyle - In the implementation block
@property (nonatomic,retain) NSDictionary * assignedTreatmentDict;              //@synthesize assignedTreatmentDict=_assignedTreatmentDict - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)altAspect;
-(void)setAltAspect:(double)arg1 ;
-(int)requiredTreatmentStyle;
-(void)setRequiredTreatmentStyle:(int)arg1 ;
-(unsigned long long)assignedKBStyle;
-(void)setAssignedKBStyle:(unsigned long long)arg1 ;
-(BOOL)treatmentApplied;
-(void)setTreatmentApplied:(BOOL)arg1 ;
-(int)assignedTreatmentStyle;
-(void)setAssignedTreatmentStyle:(int)arg1 ;
-(NSDictionary *)assignedTreatmentDict;
-(void)setAssignedTreatmentDict:(NSDictionary *)arg1 ;
@end

