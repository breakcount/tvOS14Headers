/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:02 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsUI/ContactsUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSPredicate;

@interface CNContactFilter : NSObject <NSCopying> {

	BOOL _rankSortedResults;
	NSString* _fullTextString;

}

@property (nonatomic,copy) NSString * fullTextString;                //@synthesize fullTextString=_fullTextString - In the implementation block
@property (nonatomic,readonly) BOOL supportsSections; 
@property (nonatomic,readonly) NSPredicate * predicate; 
@property (assign,nonatomic) BOOL rankSortedResults;                 //@synthesize rankSortedResults=_rankSortedResults - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(NSPredicate *)predicate;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(void)setFullTextString:(NSString *)arg1 ;
-(NSString *)fullTextString;
-(BOOL)supportsSections;
-(BOOL)rankSortedResults;
-(void)setRankSortedResults:(BOOL)arg1 ;
@end

