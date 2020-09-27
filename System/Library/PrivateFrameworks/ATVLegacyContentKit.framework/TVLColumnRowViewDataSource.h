/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:38:39 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/TVColumnRowViewDataSource.h>

@class TVLTableElement, UIFont, NSString;

@interface TVLColumnRowViewDataSource : NSObject <TVColumnRowViewDataSource> {

	TVLTableElement* _tableElement;
	UIFont* _defaultHeaderFont;
	UIFont* _defaultLabelFont;
	long long _defaultAlignment;

}

@property (nonatomic,retain) TVLTableElement * tableElement;              //@synthesize tableElement=_tableElement - In the implementation block
@property (nonatomic,retain) UIFont * defaultHeaderFont;                  //@synthesize defaultHeaderFont=_defaultHeaderFont - In the implementation block
@property (nonatomic,retain) UIFont * defaultLabelFont;                   //@synthesize defaultLabelFont=_defaultLabelFont - In the implementation block
@property (assign,nonatomic) long long defaultAlignment;                  //@synthesize defaultAlignment=_defaultAlignment - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(TVLTableElement *)tableElement;
-(void)setTableElement:(TVLTableElement *)arg1 ;
-(id)initWithTableElement:(id)arg1 ;
-(long long)numberOfRowsInColumnRowView:(id)arg1 ;
-(long long)numberOfColumnsInColumnRowView:(id)arg1 ;
-(id)columnRowView:(id)arg1 headerForColumn:(long long)arg2 ;
-(id)columnRowView:(id)arg1 itemForRow:(long long)arg2 inColumn:(long long)arg3 ;
-(void)setDefaultLabelFont:(UIFont *)arg1 ;
-(void)setDefaultHeaderFont:(UIFont *)arg1 ;
-(void)setDefaultAlignment:(long long)arg1 ;
-(long long)textAlignmentForColumnAtIndex:(long long)arg1 ;
-(UIFont *)defaultHeaderFont;
-(UIFont *)defaultLabelFont;
-(long long)defaultAlignment;
@end

