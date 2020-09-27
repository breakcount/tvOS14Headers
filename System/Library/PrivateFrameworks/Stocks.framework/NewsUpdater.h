/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:56 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/Stocks.framework/Stocks
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Stocks/YQLRequest.h>

@protocol NewsUpdaterDelegate;
@class StockNewsItemCollection, Stock;

@interface NewsUpdater : YQLRequest {

	id<NewsUpdaterDelegate> _delegate;
	BOOL _firstLoad;
	double _lastResponseTimestamp;
	StockNewsItemCollection* _lastNewsItemCollection;
	Stock* _stock;
	/*^block*/id _updateCompletionHandler;

}

@property (assign,nonatomic,__weak) id<NewsUpdaterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)_newsItemCollectionCache;
+(id)sharedNewsUpdater;
-(id)init;
-(id<NewsUpdaterDelegate>)delegate;
-(void)setDelegate:(id<NewsUpdaterDelegate>)arg1 ;
-(void)failWithError:(id)arg1 ;
-(void)parseData:(id)arg1 ;
-(void)resetLocale;
-(void)didParseData;
-(void)clearNewsCacheOnDisk;
-(void)fetchNewsForStock:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(BOOL)shouldReloadOnResume;
-(void)loadNewsCacheFromDiskForSymbol:(id)arg1 ;
-(void)fetchNewsForStock:(id)arg1 ;
-(void)saveLastResponse;
@end

