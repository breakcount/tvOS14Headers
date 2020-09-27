/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:57:21 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/TVHomeSharingKit.framework/TVHomeSharingKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray;

@interface TVHKMediaEntityGrouping : NSObject {

	NSString* _groupingKey;
	NSArray* _groups;
	NSArray* _indexBarItems;

}

@property (nonatomic,copy) NSArray * groups;                             //@synthesize groups=_groups - In the implementation block
@property (nonatomic,copy) NSArray * indexBarItems;                      //@synthesize indexBarItems=_indexBarItems - In the implementation block
@property (nonatomic,copy,readonly) NSString * groupingKey;              //@synthesize groupingKey=_groupingKey - In the implementation block
+(id)new;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)init;
-(NSArray *)groups;
-(void)setGroups:(NSArray *)arg1 ;
-(NSString *)groupingKey;
-(void)setIndexBarItems:(NSArray *)arg1 ;
-(id)_initWithGroupingKey:(id)arg1 groups:(id)arg2 indexBarItems:(id)arg3 ;
-(NSArray *)indexBarItems;
@end

