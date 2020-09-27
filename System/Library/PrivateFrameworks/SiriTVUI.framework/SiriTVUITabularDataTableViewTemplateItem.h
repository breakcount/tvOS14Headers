/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:56:57 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/SiriTVUI.framework/SiriTVUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriTVUI/SiriTVUITemplateItem.h>

@class NSArray, SiriTVUITabularDataRow, NSDictionary;

@interface SiriTVUITabularDataTableViewTemplateItem : SiriTVUITemplateItem {

	NSArray* _rows;
	SiriTVUITabularDataRow* _header;
	NSDictionary* _dividerColors;

}

@property (nonatomic,copy) NSArray * rows;                                 //@synthesize rows=_rows - In the implementation block
@property (nonatomic,retain) SiriTVUITabularDataRow * header;              //@synthesize header=_header - In the implementation block
@property (nonatomic,copy) NSDictionary * dividerColors;                   //@synthesize dividerColors=_dividerColors - In the implementation block
-(NSArray *)rows;
-(void)setRows:(NSArray *)arg1 ;
-(SiriTVUITabularDataRow *)header;
-(void)setHeader:(SiriTVUITabularDataRow *)arg1 ;
-(id)initWithRows:(id)arg1 ;
-(NSDictionary *)dividerColors;
-(void)setDividerColors:(NSDictionary *)arg1 ;
@end

