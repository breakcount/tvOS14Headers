/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:28 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PLJournalEntryPayload.h>

@class NSString;

@interface PLKeywordJournalEntryPayload : PLJournalEntryPayload

@property (nonatomic,readonly) NSString * title; 
+(unsigned)payloadVersion;
+(id)modelPropertiesDescription;
+(id)nonPersistedModelPropertiesDescription;
+(id)modelProperties;
+(id)payloadClassID;
+(unsigned)minimumSnapshotPayloadVersion;
-(NSString *)title;
-(id)insertKeywordFromDataInManagedObjectContext:(id)arg1 ;
@end

