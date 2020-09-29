/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 7:00:58 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18J386)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <libobjc.A.dylib/PXSectionedDataSourceManagerObserver.h>
#import <libobjc.A.dylib/PXTapToRadar.h>

@protocol PXCMMComposeRecipientDataSourceManagerDelegate;
@class NSMutableArray, NSMutableSet, PXCMMPeopleSuggestionsDataSource, PXCMMPeopleSuggestionsDataSourceManager, PXCMMComposeRecipientDataSource, NSDictionary, NSString;

@interface PXCMMComposeRecipientDataSourceManager : NSObject <PXSectionedDataSourceManagerObserver, PXTapToRadar> {

	NSMutableArray* _composeRecipients;
	NSMutableSet* _recipients;
	PXCMMPeopleSuggestionsDataSource* _peopleSuggestionsDataSource;
	PXCMMPeopleSuggestionsDataSourceManager* _peopleSuggestionsDataSourceManager;
	long long _sourceType;
	id<PXCMMComposeRecipientDataSourceManagerDelegate> _delegate;
	PXCMMComposeRecipientDataSource* _dataSource;
	unsigned long long _numberOfPeopleSuggested;

}

@property (nonatomic,retain) PXCMMPeopleSuggestionsDataSource * peopleSuggestionsDataSource;                            //@synthesize peopleSuggestionsDataSource=_peopleSuggestionsDataSource - In the implementation block
@property (nonatomic,retain) PXCMMComposeRecipientDataSource * dataSource;                                              //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfPeopleSuggested;                                                //@synthesize numberOfPeopleSuggested=_numberOfPeopleSuggested - In the implementation block
@property (nonatomic,retain) PXCMMPeopleSuggestionsDataSourceManager * peopleSuggestionsDataSourceManager;              //@synthesize peopleSuggestionsDataSourceManager=_peopleSuggestionsDataSourceManager - In the implementation block
@property (nonatomic,readonly) long long sourceType;                                                                    //@synthesize sourceType=_sourceType - In the implementation block
@property (assign,nonatomic,__weak) id<PXCMMComposeRecipientDataSourceManagerDelegate> delegate;                        //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSDictionary * diagnosticDictionary; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)new;
-(id)init;
-(id<PXCMMComposeRecipientDataSourceManagerDelegate>)delegate;
-(void)setDelegate:(id<PXCMMComposeRecipientDataSourceManagerDelegate>)arg1 ;
-(long long)sourceType;
-(PXCMMComposeRecipientDataSource *)dataSource;
-(void)setDataSource:(PXCMMComposeRecipientDataSource *)arg1 ;
-(void)addRecipients:(id)arg1 ;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
-(PXCMMPeopleSuggestionsDataSourceManager *)peopleSuggestionsDataSourceManager;
-(NSDictionary *)diagnosticDictionary;
-(id)initWithPeopleSuggestionsDataSourceManager:(id)arg1 sourceType:(long long)arg2 ;
-(id)_createComposeRecipientDataSourceFromCurrentState;
-(id)_composeRecipientsFromCurrentPeopleSuggestionsDataSource;
-(long long)_lastValidComposeRecipientIndex;
-(void)_addComposeRecipients:(id)arg1 ;
-(void)_replaceComposeRecipientAtIndex:(long long)arg1 withComposeRecipient:(id)arg2 ;
-(PXCMMPeopleSuggestionsDataSource *)peopleSuggestionsDataSource;
-(void)setPeopleSuggestionsDataSource:(PXCMMPeopleSuggestionsDataSource *)arg1 ;
-(void)setPeopleSuggestionsDataSourceManager:(PXCMMPeopleSuggestionsDataSourceManager *)arg1 ;
-(unsigned long long)numberOfPeopleSuggested;
-(void)setNumberOfPeopleSuggested:(unsigned long long)arg1 ;
@end
