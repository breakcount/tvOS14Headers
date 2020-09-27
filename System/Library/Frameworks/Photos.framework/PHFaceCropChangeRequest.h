/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:48 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Photos/PHChangeRequest.h>
#import <libobjc.A.dylib/PHInsertChangeRequest.h>
#import <libobjc.A.dylib/PHUpdateChangeRequest.h>

@class NSString, PHRelationshipChangeRequestHelper, NSData, PHObjectPlaceholder, NSManagedObjectID;

@interface PHFaceCropChangeRequest : PHChangeRequest <PHInsertChangeRequest, PHUpdateChangeRequest> {

	NSString* _originatingFaceUUID;
	PHRelationshipChangeRequestHelper* _faceHelper;
	PHRelationshipChangeRequestHelper* _personHelper;

}

@property (nonatomic,retain) NSData * resourceData; 
@property (nonatomic,copy) NSString * originatingFaceUUID;                                       //@synthesize originatingFaceUUID=_originatingFaceUUID - In the implementation block
@property (nonatomic,readonly) PHRelationshipChangeRequestHelper * faceHelper;                   //@synthesize faceHelper=_faceHelper - In the implementation block
@property (nonatomic,readonly) PHRelationshipChangeRequestHelper * personHelper;                 //@synthesize personHelper=_personHelper - In the implementation block
@property (assign,nonatomic) short state; 
@property (nonatomic,readonly) PHObjectPlaceholder * placeholderForCreatedFaceCrop; 
@property (readonly) BOOL isNewRequest; 
@property (assign,nonatomic) BOOL shouldPerformConcurrentWork; 
@property (getter=isMutated,readonly) BOOL mutated; 
@property (nonatomic,readonly) NSString * managedEntityName; 
@property (nonatomic,readonly) NSManagedObjectID * objectID; 
@property (getter=isClientEntitled,nonatomic,readonly) BOOL clientEntitled; 
@property (nonatomic,readonly) NSString * clientName; 
@property (nonatomic,readonly) long long accessScopeOptionsRequirement; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)changeRequestForFaceCrop:(id)arg1 ;
+(id)_creationRequestForFaceCropWithOriginatingFace:(id)arg1 resourceData:(id)arg2 personLocalIdentifier:(id)arg3 ;
+(id)_creationRequestForFaceCropWithOriginatingFace:(id)arg1 resourceData:(id)arg2 person:(id)arg3 ;
+(id)creationRequestsForFaceCropsWithOriginatingFace:(id)arg1 resourceData:(id)arg2 ;
+(void)deleteFaceCrops:(id)arg1 ;
-(short)state;
-(void)setState:(short)arg1 ;
-(void)setFace:(id)arg1 ;
-(NSData *)resourceData;
-(void)setResourceData:(NSData *)arg1 ;
-(BOOL)applyMutationsToManagedObject:(id)arg1 photoLibrary:(id)arg2 error:(id*)arg3 ;
-(id)initWithUUID:(id)arg1 objectID:(id)arg2 ;
-(void)encodeToXPCDict:(id)arg1 ;
-(id)initWithXPCDict:(id)arg1 request:(id)arg2 clientAuthorization:(id)arg3 ;
-(NSString *)managedEntityName;
-(id)initForNewObject;
-(BOOL)validateInsertIntoPhotoLibrary:(id)arg1 error:(id*)arg2 ;
-(id)createManagedObjectForInsertIntoPhotoLibrary:(id)arg1 error:(id*)arg2 ;
-(PHObjectPlaceholder *)placeholderForCreatedFaceCrop;
-(void)_prepareFaceHelperIfNeeded;
-(void)_preparePersonHelperIfNeeded;
-(id)_mutableFaceObjectIDsAndUUIDs;
-(id)_mutablePersonObjectIDsAndUUIDs;
-(NSString *)originatingFaceUUID;
-(void)setOriginatingFaceUUID:(NSString *)arg1 ;
-(PHRelationshipChangeRequestHelper *)faceHelper;
-(PHRelationshipChangeRequestHelper *)personHelper;
@end

