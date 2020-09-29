/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 7:00:51 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18J386)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */


@protocol PXSearchRecipientControllerDelegate;
@class PXRecipientSearchDataSourceManager, UIView;

@interface PXSearchRecipientController : NSObject {

	id<PXSearchRecipientControllerDelegate> _delegate;
	PXRecipientSearchDataSourceManager* _searchDataSourceManager;
	UIView* _searchResultsView;
	long long _searchState;
	unsigned long long _numberOfSearchRecipients;

}

@property (assign,nonatomic,__weak) id<PXSearchRecipientControllerDelegate> delegate;                     //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) PXRecipientSearchDataSourceManager * searchDataSourceManager;              //@synthesize searchDataSourceManager=_searchDataSourceManager - In the implementation block
@property (nonatomic,readonly) UIView * searchResultsView;                                                //@synthesize searchResultsView=_searchResultsView - In the implementation block
@property (nonatomic,readonly) long long searchState;                                                     //@synthesize searchState=_searchState - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfSearchRecipients;                               //@synthesize numberOfSearchRecipients=_numberOfSearchRecipients - In the implementation block
-(id<PXSearchRecipientControllerDelegate>)delegate;
-(void)setDelegate:(id<PXSearchRecipientControllerDelegate>)arg1 ;
-(void)disambiguateRecipient:(id)arg1 ;
-(PXRecipientSearchDataSourceManager *)searchDataSourceManager;
-(UIView *)searchResultsView;
-(long long)searchState;
-(unsigned long long)numberOfSearchRecipients;
@end
