/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:20 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudPhotoLibrary/CPLRecordChange.h>

@class NSString, CPLSuggestionAssetList, NSDate, NSData;

@interface CPLSuggestionChange : CPLRecordChange {

	unsigned short _type;
	unsigned short _subtype;
	unsigned short _notificationState;
	unsigned short _state;
	NSString* _title;
	NSString* _subtitle;
	CPLSuggestionAssetList* _assetList;
	NSDate* _creationDate;
	long long _version;
	NSDate* _activationDate;
	NSDate* _relevantUntilDate;
	NSDate* _expungeDate;
	NSData* _actionData;
	NSData* _featuresData;

}

@property (nonatomic,copy) NSString * title;                                //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * subtitle;                             //@synthesize subtitle=_subtitle - In the implementation block
@property (assign,nonatomic) unsigned short type;                           //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) unsigned short subtype;                        //@synthesize subtype=_subtype - In the implementation block
@property (nonatomic,copy) CPLSuggestionAssetList * assetList;              //@synthesize assetList=_assetList - In the implementation block
@property (nonatomic,copy) NSDate * creationDate;                           //@synthesize creationDate=_creationDate - In the implementation block
@property (assign,nonatomic) unsigned short notificationState;              //@synthesize notificationState=_notificationState - In the implementation block
@property (assign,nonatomic) unsigned short state;                          //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) long long version;                             //@synthesize version=_version - In the implementation block
@property (nonatomic,copy) NSDate * activationDate;                         //@synthesize activationDate=_activationDate - In the implementation block
@property (nonatomic,copy) NSDate * relevantUntilDate;                      //@synthesize relevantUntilDate=_relevantUntilDate - In the implementation block
@property (nonatomic,copy) NSDate * expungeDate;                            //@synthesize expungeDate=_expungeDate - In the implementation block
@property (nonatomic,copy) NSData * actionData;                             //@synthesize actionData=_actionData - In the implementation block
@property (nonatomic,copy) NSData * featuresData;                           //@synthesize featuresData=_featuresData - In the implementation block
+(id)_createTestSuggestionWithKeyAssets:(id)arg1 representativeAssets:(id)arg2 ;
-(void)setType:(unsigned short)arg1 ;
-(unsigned short)type;
-(unsigned short)state;
-(void)setState:(unsigned short)arg1 ;
-(NSDate *)creationDate;
-(long long)version;
-(void)setVersion:(long long)arg1 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(unsigned short)subtype;
-(void)setSubtitle:(NSString *)arg1 ;
-(NSString *)subtitle;
-(void)setCreationDate:(NSDate *)arg1 ;
-(void)setSubtype:(unsigned short)arg1 ;
-(NSData *)actionData;
-(void)setActionData:(NSData *)arg1 ;
-(BOOL)supportsDeletion;
-(BOOL)supportsDirectDeletion;
-(id)propertiesDescription;
-(/*^block*/id)checkDefaultValueBlockForPropertyWithSelector:(SEL)arg1 ;
-(CPLSuggestionAssetList *)assetList;
-(void)setAssetList:(CPLSuggestionAssetList *)arg1 ;
-(unsigned short)notificationState;
-(void)setNotificationState:(unsigned short)arg1 ;
-(NSDate *)activationDate;
-(void)setActivationDate:(NSDate *)arg1 ;
-(NSDate *)relevantUntilDate;
-(void)setRelevantUntilDate:(NSDate *)arg1 ;
-(NSDate *)expungeDate;
-(void)setExpungeDate:(NSDate *)arg1 ;
-(NSData *)featuresData;
-(void)setFeaturesData:(NSData *)arg1 ;
-(id)scopedIdentifiersForMapping;
-(id)translateToCloudChangeUsingIDMapping:(id)arg1 error:(id*)arg2 ;
-(id)translateToClientChangeUsingIDMapping:(id)arg1 error:(id*)arg2 ;
@end

