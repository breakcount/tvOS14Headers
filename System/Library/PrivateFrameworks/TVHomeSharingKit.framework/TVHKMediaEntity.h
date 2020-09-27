/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:57:21 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/TVHomeSharingKit.framework/TVHomeSharingKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BSDescriptionProviding.h>
#import <TVHomeSharingKit/TVHKMediaObject.h>

@protocol TVHKDMAPEntity;
@class TVHKMediaServerIdentifier, TVHKMediaEntityType, TVHKMediaEntityIdentifier, TVHKDMAPMediaEntityIdentifier, TVHKMediaEntityKind, NSSet, NSString, NSNumber, NSDate, NSArray;

@interface TVHKMediaEntity : NSObject <BSDescriptionProviding, TVHKMediaObject> {

	BOOL _localChanges;
	TVHKMediaServerIdentifier* _mediaServerIdentifier;
	TVHKMediaEntityType* _type;
	TVHKMediaEntityIdentifier* _identifier;
	TVHKDMAPMediaEntityIdentifier* _DMAPIdentifier;
	id<TVHKDMAPEntity> _entity;
	TVHKMediaEntityKind* _kind;
	NSSet* _requestedProperties;

}

@property (nonatomic,copy) TVHKMediaEntityIdentifier * identifier;                                      //@synthesize identifier=_identifier - In the implementation block
@property (assign,getter=hasLocalChanges,nonatomic) BOOL localChanges;                                  //@synthesize localChanges=_localChanges - In the implementation block
@property (nonatomic,retain) TVHKDMAPMediaEntityIdentifier * DMAPIdentifier;                            //@synthesize DMAPIdentifier=_DMAPIdentifier - In the implementation block
@property (nonatomic,readonly) unsigned long long protocol; 
@property (nonatomic,readonly) unsigned long long nonPersistentID; 
@property (nonatomic,readonly) unsigned long long persistentID; 
@property (nonatomic,readonly) unsigned long long imageNonPersistentID; 
@property (nonatomic,readonly) id<TVHKDMAPEntity> entity;                                               //@synthesize entity=_entity - In the implementation block
@property (nonatomic,readonly) TVHKMediaEntityKind * kind;                                              //@synthesize kind=_kind - In the implementation block
@property (nonatomic,readonly) NSSet * requestedProperties;                                             //@synthesize requestedProperties=_requestedProperties - In the implementation block
@property (nonatomic,readonly) TVHKMediaServerIdentifier * mediaServerIdentifier;                       //@synthesize mediaServerIdentifier=_mediaServerIdentifier - In the implementation block
@property (nonatomic,copy,readonly) TVHKMediaEntityType * type;                                         //@synthesize type=_type - In the implementation block
@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,copy,readonly) NSString * sortTitle; 
@property (nonatomic,copy,readonly) NSString * albumTitle; 
@property (nonatomic,copy,readonly) NSString * sortAlbumTitle; 
@property (nonatomic,copy,readonly) NSString * albumDescription; 
@property (nonatomic,copy,readonly) TVHKMediaEntityIdentifier * albumIdentifier; 
@property (getter=isCompilationAlbum,nonatomic,copy,readonly) NSNumber * compilationAlbum; 
@property (nonatomic,copy,readonly) NSString * genreTitle; 
@property (nonatomic,copy,readonly) NSNumber * seasonNumber; 
@property (nonatomic,copy,readonly) NSDate * addedDate; 
@property (nonatomic,copy,readonly) NSDate * releaseDate; 
@property (nonatomic,copy,readonly) NSNumber * releaseYear; 
@property (nonatomic,copy,readonly) NSString * releaseYearLocalizedString; 
@property (nonatomic,copy,readonly) NSString * contentDescription; 
@property (nonatomic,copy,readonly) NSNumber * duration; 
@property (nonatomic,copy,readonly) NSString * imageIdentifier; 
@property (nonatomic,copy,readonly) NSArray * faces; 
@property (assign,nonatomic) unsigned long long playedState; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)new;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)debugDescription;
-(NSString *)description;
-(id)init;
-(TVHKMediaEntityType *)type;
-(TVHKMediaEntityIdentifier *)identifier;
-(unsigned long long)protocol;
-(void)setIdentifier:(TVHKMediaEntityIdentifier *)arg1 ;
-(NSNumber *)duration;
-(NSString *)title;
-(TVHKMediaEntityKind *)kind;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescription;
-(id<TVHKDMAPEntity>)entity;
-(unsigned long long)persistentID;
-(NSArray *)faces;
-(NSDate *)addedDate;
-(NSString *)contentDescription;
-(NSDate *)releaseDate;
-(NSNumber *)seasonNumber;
-(NSNumber *)releaseYear;
-(NSString *)sortTitle;
-(TVHKMediaEntityIdentifier *)albumIdentifier;
-(NSString *)albumTitle;
-(NSString *)genreTitle;
-(NSSet *)requestedProperties;
-(NSString *)imageIdentifier;
-(unsigned long long)nonPersistentID;
-(TVHKMediaServerIdentifier *)mediaServerIdentifier;
-(id)initWithMediaServerIdentifier:(id)arg1 requestedProperties:(id)arg2 entity:(id)arg3 kind:(id)arg4 ;
-(void)preloadProperties;
-(id)entityAttributeValueForKey:(id)arg1 ;
-(unsigned long long)imageNonPersistentID;
-(NSString *)sortAlbumTitle;
-(NSString *)albumDescription;
-(id)entityAttributeValueWithBlock:(/*^block*/id)arg1 forKey:(id)arg2 ;
-(unsigned long long)playedState;
-(void)setPlayedState:(unsigned long long)arg1 ;
-(void)setEntityAttributeValue:(id)arg1 forKey:(id)arg2 ;
-(id)_DMAPIdentifier;
-(id)_DMAPCodeForKeyPath:(id)arg1 ;
-(void)setLocalChanges:(BOOL)arg1 ;
-(id)_entityAttributeDefaultValueForKey:(id)arg1 ;
-(BOOL)hasLocalChanges;
-(id)isCompilationAlbum;
-(NSString *)releaseYearLocalizedString;
-(TVHKDMAPMediaEntityIdentifier *)DMAPIdentifier;
-(void)setDMAPIdentifier:(TVHKDMAPMediaEntityIdentifier *)arg1 ;
@end

