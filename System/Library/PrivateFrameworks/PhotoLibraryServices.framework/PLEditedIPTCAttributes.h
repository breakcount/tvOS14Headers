/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:36 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PLManagedObject.h>

@class NSString, NSData, PLAdditionalAssetAttributes;

@interface PLEditedIPTCAttributes : PLManagedObject

@property (nonatomic,readonly) NSString * caption; 
@property (nonatomic,readonly) NSString * byLine; 
@property (nonatomic,readonly) NSString * copyrightNotice; 
@property (nonatomic,readonly) NSString * keywords; 
@property (nonatomic,readonly) NSString * urgency; 
@property (nonatomic,readonly) NSString * dateCreated; 
@property (nonatomic,readonly) NSString * digitalCreationDate; 
@property (nonatomic,readonly) NSString * digitalCreationTime; 
@property (nonatomic,readonly) NSString * expirationDate; 
@property (nonatomic,readonly) NSString * expirationTime; 
@property (nonatomic,readonly) NSString * referenceDate; 
@property (nonatomic,readonly) NSString * releaseDate; 
@property (nonatomic,readonly) NSString * releaseTime; 
@property (nonatomic,readonly) NSString * timeCreated; 
@property (nonatomic,readonly) NSString * editStatus; 
@property (nonatomic,readonly) NSString * contentLocationCode; 
@property (nonatomic,readonly) NSString * contentLocationName; 
@property (nonatomic,readonly) NSString * countryPrimaryLocationCode; 
@property (nonatomic,readonly) NSString * objectAttributeReference; 
@property (nonatomic,readonly) NSString * objectTypeReference; 
@property (nonatomic,readonly) NSString * subjectReference; 
@property (nonatomic,readonly) NSString * subLocation; 
@property (nonatomic,readonly) NSString * scene; 
@property (nonatomic,readonly) NSString * creatorContactInfo; 
@property (nonatomic,readonly) NSString * ciAdrCity; 
@property (nonatomic,readonly) NSString * ciAdrCtry; 
@property (nonatomic,readonly) NSString * ciAdrExtadr; 
@property (nonatomic,readonly) NSString * ciAdrPcode; 
@property (nonatomic,readonly) NSString * ciAdrRegion; 
@property (nonatomic,readonly) NSString * ciEmailWork; 
@property (nonatomic,readonly) NSString * ciTelWork; 
@property (nonatomic,readonly) NSString * ciUrlWork; 
@property (nonatomic,readonly) NSString * actionAdvised; 
@property (nonatomic,readonly) NSString * audioDuration; 
@property (nonatomic,readonly) NSString * audioOutcue; 
@property (nonatomic,readonly) NSString * audioSamplingRate; 
@property (nonatomic,readonly) NSString * audioSamplingRes; 
@property (nonatomic,readonly) NSString * audioType; 
@property (nonatomic,readonly) NSString * byLineTitle; 
@property (nonatomic,readonly) NSString * category; 
@property (nonatomic,readonly) NSString * city; 
@property (nonatomic,readonly) NSString * contact; 
@property (nonatomic,readonly) NSString * countryPrimaryLocationName; 
@property (nonatomic,readonly) NSString * credit; 
@property (nonatomic,readonly) NSString * editorialUpdate; 
@property (nonatomic,readonly) NSString * fixtureIdentifier; 
@property (nonatomic,readonly) NSString * headline; 
@property (nonatomic,readonly) NSString * imageOrientation; 
@property (nonatomic,readonly) NSString * imageType; 
@property (nonatomic,readonly) NSString * languageIdentifier; 
@property (nonatomic,readonly) NSString * objectCycle; 
@property (nonatomic,readonly) NSString * originatingProgram; 
@property (nonatomic,readonly) NSString * originalTransmissionReference; 
@property (nonatomic,readonly) NSString * programVersion; 
@property (nonatomic,readonly) NSString * provinceState; 
@property (nonatomic,readonly) NSString * objectName; 
@property (nonatomic,readonly) NSString * referenceNumber; 
@property (nonatomic,readonly) NSString * referenceService; 
@property (nonatomic,readonly) NSString * source; 
@property (nonatomic,readonly) NSString * specialInstructions; 
@property (nonatomic,readonly) NSString * supplementalCategory; 
@property (nonatomic,readonly) NSString * writerEditor; 
@property (nonatomic,readonly) NSString * usageTerms; 
@property (nonatomic,readonly) NSString * starRating; 
@property (nonatomic,readonly) NSData * data; 
@property (nonatomic,retain) PLAdditionalAssetAttributes * assetAttributes; 
+(id)entityName;
+(id)distinctValuesForKeyPath:(id)arg1 inManagedObjectContext:(id)arg2 ;
+(id)iptcKeyMap;
-(void)willSave;
-(BOOL)supportsCloudUpload;
-(id)payloadID;
-(id)payloadForChangedKeys:(id)arg1 ;
-(void)setIPTCData:(id)arg1 ;
-(void)clearEditedIPTCData;
@end

