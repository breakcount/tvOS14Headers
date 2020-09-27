/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:31 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ITMLKit/ITMLKit-Structs.h>
@class NSString;

@interface IKCSSDeclaration : NSObject {

	BOOL _important;
	unsigned long long _type;
	NSString* _name;
	NSString* _aliasedName;
	NSRange _range;
	NSRange _nameRange;
	NSRange _valueRange;

}

@property (assign) unsigned long long type;                         //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) NSString * name;                       //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSString * aliasedName;                //@synthesize aliasedName=_aliasedName - In the implementation block
@property (assign) BOOL important;                                  //@synthesize important=_important - In the implementation block
@property (nonatomic,readonly) NSString * stringValue; 
@property (assign,nonatomic) NSRange range;                         //@synthesize range=_range - In the implementation block
@property (assign,nonatomic) NSRange nameRange;                     //@synthesize nameRange=_nameRange - In the implementation block
@property (assign,nonatomic) NSRange valueRange;                    //@synthesize valueRange=_valueRange - In the implementation block
+(id)typeString:(unsigned long long)arg1 ;
-(NSString *)name;
-(id)description;
-(void)setType:(unsigned long long)arg1 ;
-(NSString *)stringValue;
-(unsigned long long)type;
-(void)setName:(NSString *)arg1 ;
-(NSRange)range;
-(void)setRange:(NSRange)arg1 ;
-(BOOL)important;
-(void)setImportant:(BOOL)arg1 ;
-(NSRange)valueRange;
-(void)setAliasedName:(NSString *)arg1 ;
-(NSString *)aliasedName;
-(NSRange)nameRange;
-(void)setNameRange:(NSRange)arg1 ;
-(void)setValueRange:(NSRange)arg1 ;
@end

