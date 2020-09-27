/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:57:38 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/TVSettingKit.framework/TVSettingKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, UIColor, NSNumber;

@interface TSKPieChartItem : NSObject {

	NSString* _title;
	UIColor* _color;
	NSNumber* _value;

}

@property (nonatomic,copy,readonly) NSString * title;              //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) UIColor * color;                    //@synthesize color=_color - In the implementation block
@property (nonatomic,retain) NSNumber * value;                     //@synthesize value=_value - In the implementation block
-(NSNumber *)value;
-(void)setValue:(NSNumber *)arg1 ;
-(NSString *)title;
-(UIColor *)color;
-(id)initWithTitle:(id)arg1 color:(id)arg2 value:(id)arg3 ;
@end

