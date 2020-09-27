/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:11:27 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <GeoServices/GeoServices-Structs.h>
@class NSString, NSMutableArray, NSArray;

@interface GEOServerFormatStyleParser : NSObject {

	NSString* _string;
	NSMutableArray* _styleNames;
	NSMutableArray* _styleRanges;
	NSMutableArray* _tokenRanges;
	NSArray* _results;
	NSMutableArray* _openStyleNames;
	NSMutableArray* _openStyleLocations;
	BOOL _parsed;

}

@property (nonatomic,readonly) NSArray * styles; 
@property (nonatomic,readonly) NSArray * tokenRanges; 
-(id)init;
-(id)initWithString:(id)arg1 ;
-(void)_parseIfNeeded;
-(NSArray *)styles;
-(NSRange)rangeForStyleAtIndex:(unsigned long long)arg1 ;
-(NSArray *)tokenRanges;
-(void)enumerateStylesWithBlock:(/*^block*/id)arg1 ;
-(void)_removeTokensFromAttributedString:(id)arg1 ;
-(void)_parse;
-(BOOL)_handleOpeningResult:(id)arg1 ;
-(BOOL)_handleClosingResult:(id)arg1 ;
-(void)enumerateTokenRangesForRemoval:(/*^block*/id)arg1 ;
-(id)attributedStringWithStyleAttributes:(id)arg1 defaultAttributes:(id)arg2 ;
@end

