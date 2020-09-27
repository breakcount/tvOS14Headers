/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:39 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/_SFPBTableRowCardSection.h>
@class NSArray, NSString, _SFPBColor, _SFPBTableAlignmentSchema, NSData;


@protocol _SFPBTableRowCardSection <NSObject>
@property (nonatomic,copy) NSArray * punchoutOptions; 
@property (nonatomic,copy) NSString * punchoutPickerTitle; 
@property (nonatomic,copy) NSString * punchoutPickerDismissText; 
@property (assign,nonatomic) BOOL canBeHidden; 
@property (assign,nonatomic) BOOL hasTopPadding; 
@property (assign,nonatomic) BOOL hasBottomPadding; 
@property (nonatomic,copy) NSString * type; 
@property (assign,nonatomic) int separatorStyle; 
@property (nonatomic,retain) _SFPBColor * backgroundColor; 
@property (nonatomic,copy) NSArray * richDatas; 
@property (nonatomic,copy) NSString * tableIdentifier; 
@property (nonatomic,retain) _SFPBTableAlignmentSchema * alignmentSchema; 
@property (nonatomic,copy) NSArray * datas; 
@property (assign,nonatomic) BOOL isSubHeader; 
@property (nonatomic,copy) NSString * tabGroupIdentifier; 
@property (assign,nonatomic) BOOL reducedRowHeight; 
@property (assign,nonatomic) int verticalAlign; 
@property (assign,nonatomic) BOOL alignRowsToHeader; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(void)setType:(id)arg1;
-(NSString *)type;
-(id)initWithDictionary:(id)arg1;
-(id)dataAtIndex:(unsigned long long)arg1;
-(void)setDatas:(id)arg1;
-(void)addData:(id)arg1;
-(NSArray *)datas;
-(_SFPBColor *)backgroundColor;
-(void)setBackgroundColor:(id)arg1;
-(id)initWithJSON:(id)arg1;
-(NSArray *)punchoutOptions;
-(int)verticalAlign;
-(void)setVerticalAlign:(int)arg1;
-(NSData *)jsonData;
-(void)setPunchoutOptions:(id)arg1;
-(NSString *)punchoutPickerTitle;
-(void)setPunchoutPickerTitle:(id)arg1;
-(NSString *)punchoutPickerDismissText;
-(void)setPunchoutPickerDismissText:(id)arg1;
-(BOOL)canBeHidden;
-(void)setCanBeHidden:(BOOL)arg1;
-(BOOL)hasTopPadding;
-(void)setHasTopPadding:(BOOL)arg1;
-(BOOL)hasBottomPadding;
-(void)setHasBottomPadding:(BOOL)arg1;
-(int)separatorStyle;
-(void)setSeparatorStyle:(int)arg1;
-(NSString *)tableIdentifier;
-(void)setTableIdentifier:(id)arg1;
-(_SFPBTableAlignmentSchema *)alignmentSchema;
-(void)setAlignmentSchema:(id)arg1;
-(BOOL)isSubHeader;
-(void)setIsSubHeader:(BOOL)arg1;
-(NSString *)tabGroupIdentifier;
-(void)setTabGroupIdentifier:(id)arg1;
-(BOOL)reducedRowHeight;
-(void)setReducedRowHeight:(BOOL)arg1;
-(BOOL)alignRowsToHeader;
-(void)setAlignRowsToHeader:(BOOL)arg1;
-(void)addPunchoutOptions:(id)arg1;
-(void)clearPunchoutOptions;
-(unsigned long long)punchoutOptionsCount;
-(id)punchoutOptionsAtIndex:(unsigned long long)arg1;
-(void)clearData;
-(unsigned long long)dataCount;
-(void)addRichData:(id)arg1;
-(NSArray *)richDatas;
-(void)clearRichData;
-(unsigned long long)richDataCount;
-(id)richDataAtIndex:(unsigned long long)arg1;
-(void)setRichDatas:(id)arg1;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSString, _SFPBColor, _SFPBTableAlignmentSchema, NSData;

@interface _SFPBTableRowCardSection : PBCodable <_SFPBTableRowCardSection, NSSecureCoding> {

	BOOL _canBeHidden;
	BOOL _hasTopPadding;
	BOOL _hasBottomPadding;
	BOOL _isSubHeader;
	BOOL _reducedRowHeight;
	BOOL _alignRowsToHeader;
	int _separatorStyle;
	int _verticalAlign;
	NSArray* _punchoutOptions;
	NSString* _punchoutPickerTitle;
	NSString* _punchoutPickerDismissText;
	NSString* _type;
	_SFPBColor* _backgroundColor;
	NSArray* _richDatas;
	NSString* _tableIdentifier;
	_SFPBTableAlignmentSchema* _alignmentSchema;
	NSArray* _datas;
	NSString* _tabGroupIdentifier;

}

@property (nonatomic,copy) NSArray * punchoutOptions;                                  //@synthesize punchoutOptions=_punchoutOptions - In the implementation block
@property (nonatomic,copy) NSString * punchoutPickerTitle;                             //@synthesize punchoutPickerTitle=_punchoutPickerTitle - In the implementation block
@property (nonatomic,copy) NSString * punchoutPickerDismissText;                       //@synthesize punchoutPickerDismissText=_punchoutPickerDismissText - In the implementation block
@property (assign,nonatomic) BOOL canBeHidden;                                         //@synthesize canBeHidden=_canBeHidden - In the implementation block
@property (assign,nonatomic) BOOL hasTopPadding;                                       //@synthesize hasTopPadding=_hasTopPadding - In the implementation block
@property (assign,nonatomic) BOOL hasBottomPadding;                                    //@synthesize hasBottomPadding=_hasBottomPadding - In the implementation block
@property (nonatomic,copy) NSString * type;                                            //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) int separatorStyle;                                       //@synthesize separatorStyle=_separatorStyle - In the implementation block
@property (nonatomic,retain) _SFPBColor * backgroundColor;                             //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,copy) NSArray * richDatas;                                        //@synthesize richDatas=_richDatas - In the implementation block
@property (nonatomic,copy) NSString * tableIdentifier;                                 //@synthesize tableIdentifier=_tableIdentifier - In the implementation block
@property (nonatomic,retain) _SFPBTableAlignmentSchema * alignmentSchema;              //@synthesize alignmentSchema=_alignmentSchema - In the implementation block
@property (nonatomic,copy) NSArray * datas;                                            //@synthesize datas=_datas - In the implementation block
@property (assign,nonatomic) BOOL isSubHeader;                                         //@synthesize isSubHeader=_isSubHeader - In the implementation block
@property (nonatomic,copy) NSString * tabGroupIdentifier;                              //@synthesize tabGroupIdentifier=_tabGroupIdentifier - In the implementation block
@property (assign,nonatomic) BOOL reducedRowHeight;                                    //@synthesize reducedRowHeight=_reducedRowHeight - In the implementation block
@property (assign,nonatomic) int verticalAlign;                                        //@synthesize verticalAlign=_verticalAlign - In the implementation block
@property (assign,nonatomic) BOOL alignRowsToHeader;                                   //@synthesize alignRowsToHeader=_alignRowsToHeader - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)setType:(NSString *)arg1 ;
-(NSString *)type;
-(id)initWithDictionary:(id)arg1 ;
-(void)setData:(id)arg1 ;
-(id)dictionaryRepresentation;
-(id)dataAtIndex:(unsigned long long)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setDatas:(NSArray *)arg1 ;
-(void)addData:(id)arg1 ;
-(NSArray *)datas;
-(_SFPBColor *)backgroundColor;
-(void)setBackgroundColor:(_SFPBColor *)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(NSArray *)punchoutOptions;
-(int)verticalAlign;
-(void)setVerticalAlign:(int)arg1 ;
-(NSData *)jsonData;
-(id)initWithFacade:(id)arg1 ;
-(void)setPunchoutOptions:(NSArray *)arg1 ;
-(NSString *)punchoutPickerTitle;
-(void)setPunchoutPickerTitle:(NSString *)arg1 ;
-(NSString *)punchoutPickerDismissText;
-(void)setPunchoutPickerDismissText:(NSString *)arg1 ;
-(BOOL)canBeHidden;
-(void)setCanBeHidden:(BOOL)arg1 ;
-(BOOL)hasTopPadding;
-(void)setHasTopPadding:(BOOL)arg1 ;
-(BOOL)hasBottomPadding;
-(void)setHasBottomPadding:(BOOL)arg1 ;
-(int)separatorStyle;
-(void)setSeparatorStyle:(int)arg1 ;
-(NSString *)tableIdentifier;
-(void)setTableIdentifier:(NSString *)arg1 ;
-(_SFPBTableAlignmentSchema *)alignmentSchema;
-(void)setAlignmentSchema:(_SFPBTableAlignmentSchema *)arg1 ;
-(BOOL)isSubHeader;
-(void)setIsSubHeader:(BOOL)arg1 ;
-(NSString *)tabGroupIdentifier;
-(void)setTabGroupIdentifier:(NSString *)arg1 ;
-(BOOL)reducedRowHeight;
-(void)setReducedRowHeight:(BOOL)arg1 ;
-(BOOL)alignRowsToHeader;
-(void)setAlignRowsToHeader:(BOOL)arg1 ;
-(void)setRichData:(id)arg1 ;
-(void)addPunchoutOptions:(id)arg1 ;
-(void)clearPunchoutOptions;
-(unsigned long long)punchoutOptionsCount;
-(id)punchoutOptionsAtIndex:(unsigned long long)arg1 ;
-(void)clearData;
-(unsigned long long)dataCount;
-(void)addRichData:(id)arg1 ;
-(NSArray *)richDatas;
-(void)clearRichData;
-(unsigned long long)richDataCount;
-(id)richDataAtIndex:(unsigned long long)arg1 ;
-(void)setRichDatas:(NSArray *)arg1 ;
@end

