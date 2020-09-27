/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:38:38 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVLegacyContentKit/TVLColumnRowViewDataSource.h>

@interface TVLInningsDataSource : TVLColumnRowViewDataSource {

	long long _pageSize;
	long long _currentPage;

}

@property (assign,nonatomic) long long pageSize;                     //@synthesize pageSize=_pageSize - In the implementation block
@property (nonatomic,readonly) long long numberOfPages; 
@property (assign,nonatomic) long long currentPage;                  //@synthesize currentPage=_currentPage - In the implementation block
-(void)setPageSize:(long long)arg1 ;
-(long long)pageSize;
-(void)setCurrentPage:(long long)arg1 ;
-(long long)currentPage;
-(long long)numberOfPages;
-(id)initWithTableElement:(id)arg1 ;
-(long long)numberOfColumnsInColumnRowView:(id)arg1 ;
-(id)columnRowView:(id)arg1 headerForColumn:(long long)arg2 ;
-(id)columnRowView:(id)arg1 itemForRow:(long long)arg2 inColumn:(long long)arg3 ;
-(void)advanceToNextPage;
-(long long)convertColumn:(long long)arg1 ;
@end

