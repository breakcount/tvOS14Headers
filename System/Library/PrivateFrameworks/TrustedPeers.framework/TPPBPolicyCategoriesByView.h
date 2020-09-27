/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:58:00 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/TrustedPeers.framework/TrustedPeers
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TrustedPeers/TrustedPeers-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSString;

@interface TPPBPolicyCategoriesByView : PBCodable <NSCopying> {

	NSMutableArray* _categories;
	NSString* _view;

}

@property (nonatomic,readonly) BOOL hasView; 
@property (nonatomic,retain) NSString * view;                          //@synthesize view=_view - In the implementation block
@property (nonatomic,retain) NSMutableArray * categories;              //@synthesize categories=_categories - In the implementation block
+(Class)categoriesType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSMutableArray *)categories;
-(void)setCategories:(NSMutableArray *)arg1 ;
-(NSString *)view;
-(void)setView:(NSString *)arg1 ;
-(void)addCategories:(id)arg1 ;
-(void)clearCategories;
-(unsigned long long)categoriesCount;
-(id)categoriesAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasView;
@end

