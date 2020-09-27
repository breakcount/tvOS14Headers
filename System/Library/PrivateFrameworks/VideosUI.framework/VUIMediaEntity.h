/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:50:05 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol VUIMediaEntityIdentifierInternal;
@class VUIMediaLibrary, NSObject, NSMutableDictionary, VUIMediaEntityKind, NSSet, NSString, VUIMediaEntityType, NSNumber, NSDate, _TVContentRating;

@interface VUIMediaEntity : NSObject {

	BOOL _localChanges;
	BOOL _cachesPropertiesOnFirstAccess;
	VUIMediaLibrary* _mediaLibrary;
	NSObject*<VUIMediaEntityIdentifierInternal> _identifierInternal;
	NSMutableDictionary* _firstAccessPropertiesCache;
	VUIMediaEntityKind* _kind;
	NSSet* _requestedProperties;

}

@property (nonatomic,retain) VUIMediaLibrary * mediaLibrary;                                            //@synthesize mediaLibrary=_mediaLibrary - In the implementation block
@property (nonatomic,copy) NSObject*<VUIMediaEntityIdentifierInternal> identifierInternal;              //@synthesize identifierInternal=_identifierInternal - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * firstAccessPropertiesCache;                          //@synthesize firstAccessPropertiesCache=_firstAccessPropertiesCache - In the implementation block
@property (assign,nonatomic) BOOL cachesPropertiesOnFirstAccess;                                        //@synthesize cachesPropertiesOnFirstAccess=_cachesPropertiesOnFirstAccess - In the implementation block
@property (nonatomic,readonly) VUIMediaEntityKind * kind;                                               //@synthesize kind=_kind - In the implementation block
@property (nonatomic,readonly) NSSet * requestedProperties;                                             //@synthesize requestedProperties=_requestedProperties - In the implementation block
@property (nonatomic,copy,readonly) NSString * sortTitle; 
@property (nonatomic,copy,readonly) VUIMediaEntityType * type; 
@property (nonatomic,copy,readonly) NSObject*<VUIMediaEntityIdentifier> identifier; 
@property (nonatomic,copy,readonly) NSNumber * isLocal; 
@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,copy,readonly) NSString * genreTitle; 
@property (nonatomic,copy,readonly) NSString * contentDescription; 
@property (nonatomic,copy,readonly) NSNumber * resolution; 
@property (nonatomic,copy,readonly) NSNumber * colorCapability; 
@property (nonatomic,copy,readonly) NSNumber * audioCapability; 
@property (nonatomic,copy,readonly) NSNumber * HLSResolution; 
@property (nonatomic,copy,readonly) NSNumber * HLSColorCapability; 
@property (nonatomic,copy,readonly) NSNumber * HLSAudioCapability; 
@property (nonatomic,copy,readonly) NSDate * addedDate; 
@property (nonatomic,copy,readonly) NSDate * releaseDate; 
@property (nonatomic,copy,readonly) NSNumber * releaseYear; 
@property (nonatomic,copy,readonly) _TVContentRating * contentRating; 
@property (nonatomic,copy,readonly) NSString * coverArtImageIdentifier; 
@property (nonatomic,copy,readonly) NSNumber * storeID; 
@property (nonatomic,copy,readonly) NSNumber * purchaseHistoryID; 
@property (nonatomic,copy) NSNumber * playedState; 
@property (nonatomic,copy,readonly) NSString * canonicalID; 
@property (nonatomic,readonly) BOOL markedAsDeleted; 
@property (nonatomic,copy,readonly) NSString * brandID; 
@property (nonatomic,copy,readonly) NSString * brandName; 
@property (nonatomic,copy,readonly) NSObject*<VUIMediaEntityIdentifier> showIdentifier; 
@property (nonatomic,copy,readonly) NSString * showTitle; 
@property (nonatomic,copy,readonly) NSNumber * seasonNumber; 
@property (assign,getter=hasLocalChanges,nonatomic) BOOL localChanges;                                  //@synthesize localChanges=_localChanges - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)init;
-(VUIMediaEntityType *)type;
-(NSObject*<VUIMediaEntityIdentifier>)identifier;
-(NSString *)title;
-(VUIMediaEntityKind *)kind;
-(NSNumber *)isLocal;
-(NSNumber *)storeID;
-(NSNumber *)resolution;
-(NSDate *)addedDate;
-(NSString *)contentDescription;
-(_TVContentRating *)contentRating;
-(NSString *)showTitle;
-(NSDate *)releaseDate;
-(NSNumber *)seasonNumber;
-(NSNumber *)releaseYear;
-(NSString *)sortTitle;
-(void)setIdentifierInternal:(NSObject*<VUIMediaEntityIdentifierInternal>)arg1 ;
-(NSString *)brandName;
-(id)_propertyValueForKey:(id)arg1 ;
-(NSNumber *)purchaseHistoryID;
-(VUIMediaLibrary *)mediaLibrary;
-(void)setMediaLibrary:(VUIMediaLibrary *)arg1 ;
-(NSString *)genreTitle;
-(NSSet *)requestedProperties;
-(NSString *)canonicalID;
-(NSString *)brandID;
-(id)assetController;
-(NSObject*<VUIMediaEntityIdentifier>)showIdentifier;
-(NSNumber *)playedState;
-(void)setPlayedState:(NSNumber *)arg1 ;
-(void)setLocalChanges:(BOOL)arg1 ;
-(BOOL)hasLocalChanges;
-(void)populateMetadata;
-(BOOL)isFetchedPropertiesEqualToFetchedMediaEntity:(id)arg1 ;
-(NSNumber *)HLSResolution;
-(NSNumber *)HLSColorCapability;
-(NSNumber *)colorCapability;
-(NSNumber *)HLSAudioCapability;
-(NSNumber *)audioCapability;
-(id)_propertyValueWithBlock:(/*^block*/id)arg1 forKey:(id)arg2 ;
-(id)initWithMediaLibrary:(id)arg1 identifier:(id)arg2 requestedProperties:(id)arg3 kind:(id)arg4 ;
-(NSString *)coverArtImageIdentifier;
-(id)_valueForPropertyDescriptor:(id)arg1 ;
-(void)setCachesPropertiesOnFirstAccess:(BOOL)arg1 ;
-(NSObject*<VUIMediaEntityIdentifierInternal>)identifierInternal;
-(NSMutableDictionary *)firstAccessPropertiesCache;
-(id)_defaultValueForPropertyDescriptor:(id)arg1 ;
-(BOOL)cachesPropertiesOnFirstAccess;
-(BOOL)markedAsDeleted;
-(BOOL)_didRequestPropertyWithKey:(id)arg1 ;
-(void)setFirstAccessPropertiesCache:(NSMutableDictionary *)arg1 ;
@end

