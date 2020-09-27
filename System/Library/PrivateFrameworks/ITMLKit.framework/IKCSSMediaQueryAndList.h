/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:30 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ITMLKit/IKCSSMediaQueryList.h>

@class IKMutableArray, NSString;

@interface IKCSSMediaQueryAndList : IKCSSMediaQueryList {

	IKMutableArray* _queryList;
	BOOL _negated;
	NSString* _type;

}

@property (nonatomic,retain) NSString * type;              //@synthesize type=_type - In the implementation block
@property (assign) BOOL negated;                           //@synthesize negated=_negated - In the implementation block
-(id)description;
-(id)init;
-(unsigned long long)count;
-(void)setType:(NSString *)arg1 ;
-(NSString *)type;
-(BOOL)evaluate;
-(id)expressionAsString;
-(id)subQueryAtIndex:(unsigned long long)arg1 ;
-(void)addQuery:(id)arg1 ;
-(id)expressionList;
-(BOOL)negated;
-(void)setNegated:(BOOL)arg1 ;
@end

