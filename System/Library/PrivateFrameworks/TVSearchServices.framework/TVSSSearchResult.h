/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:57:36 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/TVSearchServices.framework/TVSearchServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVSearchServices/TVJSSearchResult.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSURL, NSArray, TVSSSearchResultBatch;

@interface TVSSSearchResult : NSObject <TVJSSearchResult, NSSecureCoding> {

	BOOL _showBrowseResults;
	NSString* _title;
	NSURL* _queryURL;
	TVSSSearchResultBatch* _initialBatch;
	NSArray* _relatedContentQueries;

}

@property (nonatomic,readonly) BOOL showBrowseResults; 
@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,copy,readonly) NSURL * queryURL; 
@property (nonatomic,copy,readonly) NSArray * contentItems; 
@property (nonatomic,readonly) TVSSSearchResultBatch * initialBatch; 
@property (nonatomic,copy,readonly) NSArray * relatedContentQueries; 
@property (assign,nonatomic) BOOL showBrowseResults;                              //@synthesize showBrowseResults=_showBrowseResults - In the implementation block
@property (nonatomic,copy) NSString * title;                                      //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSURL * queryURL;                                      //@synthesize queryURL=_queryURL - In the implementation block
@property (nonatomic,copy) NSArray * contentItems; 
@property (nonatomic,retain) TVSSSearchResultBatch * initialBatch;                //@synthesize initialBatch=_initialBatch - In the implementation block
@property (nonatomic,copy) NSArray * relatedContentQueries;                       //@synthesize relatedContentQueries=_relatedContentQueries - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(void)setContentItems:(NSArray *)arg1 ;
-(NSArray *)contentItems;
-(BOOL)showBrowseResults;
-(NSURL *)queryURL;
-(TVSSSearchResultBatch *)initialBatch;
-(NSArray *)relatedContentQueries;
-(void)setInitialBatch:(TVSSSearchResultBatch *)arg1 ;
-(void)setShowBrowseResults:(BOOL)arg1 ;
-(void)setQueryURL:(NSURL *)arg1 ;
-(void)setRelatedContentQueries:(NSArray *)arg1 ;
@end

