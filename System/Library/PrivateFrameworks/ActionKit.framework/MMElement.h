/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:38:58 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ActionKit/ActionKit-Structs.h>
@class NSMutableArray, NSString, NSArray;

@interface MMElement : NSObject {

	NSMutableArray* _innerRanges;
	NSMutableArray* _children;
	int _type;
	long long _alignment;
	unsigned long long _level;
	NSString* _href;
	NSString* _title;
	NSString* _identifier;
	NSString* _stringValue;
	MMElement* _parent;
	NSString* _language;
	NSRange _range;

}

@property (assign,nonatomic) NSRange range;                          //@synthesize range=_range - In the implementation block
@property (assign,nonatomic) int type;                               //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSArray * innerRanges;                    //@synthesize innerRanges=_innerRanges - In the implementation block
@property (assign,nonatomic) long long alignment;                    //@synthesize alignment=_alignment - In the implementation block
@property (assign,nonatomic) unsigned long long level;               //@synthesize level=_level - In the implementation block
@property (nonatomic,copy) NSString * href;                          //@synthesize href=_href - In the implementation block
@property (nonatomic,copy) NSString * title;                         //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * identifier;                    //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * stringValue;                   //@synthesize stringValue=_stringValue - In the implementation block
@property (assign,nonatomic,__weak) MMElement * parent;              //@synthesize parent=_parent - In the implementation block
@property (nonatomic,copy) NSArray * children;                       //@synthesize children=_children - In the implementation block
@property (nonatomic,copy) NSString * language;                      //@synthesize language=_language - In the implementation block
-(id)description;
-(id)init;
-(void)dealloc;
-(void)setType:(int)arg1 ;
-(NSString *)stringValue;
-(int)type;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSArray *)children;
-(unsigned long long)level;
-(NSRange)range;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(void)addChild:(id)arg1 ;
-(MMElement *)parent;
-(long long)alignment;
-(void)setAlignment:(long long)arg1 ;
-(void)setLevel:(unsigned long long)arg1 ;
-(void)setStringValue:(NSString *)arg1 ;
-(NSString *)language;
-(void)setLanguage:(NSString *)arg1 ;
-(void)setRange:(NSRange)arg1 ;
-(void)setParent:(MMElement *)arg1 ;
-(NSString *)href;
-(void)setHref:(NSString *)arg1 ;
-(void)removeChild:(id)arg1 ;
-(void)setChildren:(NSArray *)arg1 ;
-(void)addInnerRange:(NSRange)arg1 ;
-(void)removeLastInnerRange;
-(id)removeLastChild;
-(void)setInnerRanges:(NSArray *)arg1 ;
-(NSArray *)innerRanges;
@end

