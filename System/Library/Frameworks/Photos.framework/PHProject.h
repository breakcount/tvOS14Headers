/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:47 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Photos/PHAssetCollection.h>

@class NSData, NSDate, NSString;

@interface PHProject : PHAssetCollection {

	NSData* _projectExtensionData;
	NSDate* _creationDate;
	NSString* _projectExtensionIdentifier;
	NSString* _projectDocumentType;
	NSString* _projectRenderUuid;

}

@property (nonatomic,readonly) NSData * projectData; 
@property (nonatomic,readonly) NSString * projectExtensionIdentifier;              //@synthesize projectExtensionIdentifier=_projectExtensionIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * projectDocumentType;                     //@synthesize projectDocumentType=_projectDocumentType - In the implementation block
@property (nonatomic,readonly) NSString * projectRenderUuid;                       //@synthesize projectRenderUuid=_projectRenderUuid - In the implementation block
@property (nonatomic,readonly) NSData * projectExtensionData;                      //@synthesize projectExtensionData=_projectExtensionData - In the implementation block
@property (nonatomic,readonly) BOOL hasProjectPreview; 
+(id)localIdentifierWithUUID:(id)arg1 ;
+(id)managedEntityName;
+(id)fetchType;
+(id)propertiesToFetchWithHint:(unsigned long long)arg1 ;
+(id)identifierCode;
+(BOOL)managedObjectSupportsTrashedState;
+(BOOL)managedObjectSupportsPendingState;
+(BOOL)managedObjectSupportsRejectedState;
+(id)entityKeyMap;
+(id)transformValueExpression:(id)arg1 forKeyPath:(id)arg2 ;
+(id)fetchProjectsWithOptions:(id)arg1 ;
+(id)fetchProjectsWithLocalIdentifiers:(id)arg1 options:(id)arg2 ;
-(id)creationDate;
-(NSString *)projectDocumentType;
-(NSData *)projectData;
-(BOOL)canPerformEditOperation:(long long)arg1 ;
-(NSString *)projectRenderUuid;
-(id)initWithFetchDictionary:(id)arg1 propertyHint:(unsigned long long)arg2 photoLibrary:(id)arg3 ;
-(BOOL)canContainCustomKeyAssets;
-(BOOL)hasProjectPreview;
-(NSData *)projectExtensionData;
-(NSString *)projectExtensionIdentifier;
@end

