/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:15 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MusicLibrary/ML3Collection.h>

@interface ML3Album : ML3Collection
+(void)initialize;
+(id)allProperties;
+(id)databaseTable;
+(long long)revisionTrackingCode;
+(id)joinClausesForProperty:(id)arg1 ;
+(BOOL)propertyIsCountProperty:(id)arg1 ;
+(id)countingQueryForBaseQuery:(id)arg1 countProperty:(id)arg2 forIdentifier:(long long)arg3 ;
+(BOOL)libraryContentsChangeForProperty:(id)arg1 ;
+(BOOL)assistantLibraryContentsChangeForProperty:(id)arg1 ;
+(id)predisambiguatedProperties;
+(id)defaultOrderingTerms;
+(id)foreignPropertyForProperty:(id)arg1 entityClass:(Class)arg2 ;
+(id)propertiesForGroupingKey;
+(id)trackForeignPersistentID;
+(id)propertiesForGroupingUniqueCollections;
+(id)protocolItemWithProperties:(id)arg1 inLibrary:(id)arg2 ;
+(id)_albumArtistProtocolItemWithTrackProperties:(id)arg1 inLibrary:(id)arg2 ;
-(id)multiverseIdentifier;
-(void)updateTrackValues:(id)arg1 ;
-(id)protocolItem;
@end

