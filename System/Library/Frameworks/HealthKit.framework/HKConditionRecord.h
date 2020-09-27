/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:05 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKit/HealthKit-Structs.h>
#import <HealthKit/HKMedicalRecord.h>
#import <libobjc.A.dylib/HKConceptIndexable.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class HKMedicalCodingCollection, NSArray, NSString, HKInspectableValue, HKMedicalDate, HKMedicalCoding, HKConcept, NSUUID, NSLocale, HKConditionRecordType;

@interface HKConditionRecord : HKMedicalRecord <HKConceptIndexable, NSSecureCoding, NSCopying> {

	HKMedicalCodingCollection* _conditionCodingCollection;
	NSArray* _categoriesCodingCollections;
	NSString* _asserter;
	HKInspectableValue* _abatement;
	HKInspectableValue* _onset;
	HKMedicalDate* _recordedDate;
	HKMedicalCoding* _clinicalStatusCoding;
	HKMedicalCoding* _verificationStatusCoding;
	HKMedicalCodingCollection* _severityCodingCollection;
	NSArray* _bodySitesCodingCollections;
	HKConcept* _condition;
	NSArray* _categories;
	HKConcept* _clinicalStatus;
	HKConcept* _verificationStatus;
	HKConcept* _severity;
	NSArray* _bodySites;

}

@property (readonly) NSUUID * UUID; 
@property (nonatomic,copy,readonly) NSLocale * locale; 
@property (nonatomic,copy,readonly) NSString * country; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (copy,readonly) HKConditionRecordType * conditionRecordType; 
@property (copy,readonly) HKInspectableValue * abatement; 
@property (copy,readonly) NSString * asserter; 
@property (copy,readonly) NSArray * bodySites; 
@property (copy,readonly) NSArray * bodySitesCodingCollections; 
@property (copy,readonly) NSArray * categories; 
@property (copy,readonly) NSArray * categoriesCodingCollections; 
@property (copy,readonly) HKConcept * clinicalStatus; 
@property (copy,readonly) HKMedicalCoding * clinicalStatusCoding; 
@property (copy,readonly) HKConcept * condition; 
@property (copy,readonly) HKMedicalCodingCollection * conditionCodingCollection; 
@property (copy,readonly) HKInspectableValue * onset; 
@property (copy,readonly) HKMedicalDate * recordedDate; 
@property (copy,readonly) HKConcept * severity; 
@property (copy,readonly) HKMedicalCodingCollection * severityCodingCollection; 
@property (copy,readonly) HKConcept * verificationStatus; 
@property (copy,readonly) HKMedicalCoding * verificationStatusCoding; 
+(BOOL)supportsSecureCoding;
+(id)conditionRecordWithType:(id)arg1 note:(id)arg2 enteredInError:(BOOL)arg3 modifiedDate:(id)arg4 FHIRIdentifier:(id)arg5 locale:(id)arg6 extractionVersion:(long long)arg7 device:(id)arg8 metadata:(id)arg9 sortDate:(id)arg10 country:(id)arg11 state:(unsigned long long)arg12 conditionCodingCollection:(id)arg13 categoriesCodingCollections:(id)arg14 asserter:(id)arg15 abatement:(id)arg16 onset:(id)arg17 recordedDate:(id)arg18 clinicalStatusCoding:(id)arg19 verificationStatusCoding:(id)arg20 severityCodingCollection:(id)arg21 bodySitesCodingCollections:(id)arg22 ;
+(id)conditionRecordWithType:(id)arg1 note:(id)arg2 enteredInError:(BOOL)arg3 modifiedDate:(id)arg4 FHIRIdentifier:(id)arg5 locale:(id)arg6 extractionVersion:(long long)arg7 device:(id)arg8 metadata:(id)arg9 country:(id)arg10 state:(unsigned long long)arg11 conditionCodingCollection:(id)arg12 categoriesCodingCollections:(id)arg13 asserter:(id)arg14 abatement:(id)arg15 onset:(id)arg16 recordedDate:(id)arg17 clinicalStatusCoding:(id)arg18 verificationStatusCoding:(id)arg19 severityCodingCollection:(id)arg20 bodySitesCodingCollections:(id)arg21 ;
+(BOOL)supportsEquivalence;
+(BOOL)_isConcreteObjectClass;
+(id)indexableConceptKeyPaths;
+(id)cachedConceptRelationshipKeyPaths;
+(id)defaultDisplayString;
+(id)_newConditionRecordWithType:(id)arg1 note:(id)arg2 enteredInError:(BOOL)arg3 modifiedDate:(id)arg4 FHIRIdentifier:(id)arg5 locale:(id)arg6 extractionVersion:(long long)arg7 device:(id)arg8 metadata:(id)arg9 sortDate:(id)arg10 country:(id)arg11 state:(unsigned long long)arg12 conditionCodingCollection:(id)arg13 categoriesCodingCollections:(id)arg14 asserter:(id)arg15 abatement:(id)arg16 onset:(id)arg17 recordedDate:(id)arg18 clinicalStatusCoding:(id)arg19 verificationStatusCoding:(id)arg20 severityCodingCollection:(id)arg21 bodySitesCodingCollections:(id)arg22 config:(/*^block*/id)arg23 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(HKConcept *)condition;
-(NSArray *)categories;
-(HKConcept *)severity;
-(BOOL)isEquivalent:(id)arg1 ;
-(HKConcept *)verificationStatus;
-(id)codingsForKeyPath:(id)arg1 error:(id*)arg2 ;
-(BOOL)applyConcepts:(id)arg1 forKeyPath:(id)arg2 error:(id*)arg3 ;
-(id)_validateWithConfiguration:(HKObjectValidationConfiguration)arg1 ;
-(id)medicalRecordCodings;
-(HKMedicalCodingCollection *)conditionCodingCollection;
-(NSArray *)categoriesCodingCollections;
-(HKMedicalCoding *)clinicalStatusCoding;
-(HKMedicalCoding *)verificationStatusCoding;
-(HKMedicalCodingCollection *)severityCodingCollection;
-(NSArray *)bodySitesCodingCollections;
-(void)_setCondition:(id)arg1 ;
-(void)_setCategories:(id)arg1 ;
-(void)_setClinicalStatus:(id)arg1 ;
-(void)_setVerificationStatus:(id)arg1 ;
-(void)_setSeverity:(id)arg1 ;
-(void)_setBodySites:(id)arg1 ;
-(HKConditionRecordType *)conditionRecordType;
-(NSString *)asserter;
-(void)_setAsserter:(id)arg1 ;
-(HKInspectableValue *)abatement;
-(HKInspectableValue *)onset;
-(HKMedicalDate *)recordedDate;
-(HKConcept *)clinicalStatus;
-(NSArray *)bodySites;
-(id)clinicalStatusCodingCollection;
-(id)verificationStatusCodingCollection;
-(void)_setConditionCodingCollection:(id)arg1 ;
-(void)_setCategoriesCodingCollections:(id)arg1 ;
-(void)_setAbatement:(id)arg1 ;
-(void)_setOnset:(id)arg1 ;
-(void)_setRecordedDate:(id)arg1 ;
-(void)_setClinicalStatusCoding:(id)arg1 ;
-(void)_setVerificationStatusCoding:(id)arg1 ;
-(void)_setSeverityCodingCollection:(id)arg1 ;
-(void)_setBodySitesCodingCollections:(id)arg1 ;
@end

