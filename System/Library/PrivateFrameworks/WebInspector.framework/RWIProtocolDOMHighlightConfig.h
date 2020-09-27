/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:30 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebInspector/RWIProtocolJSONObject.h>

@class RWIProtocolDOMRGBAColor;

@interface RWIProtocolDOMHighlightConfig : RWIProtocolJSONObject

@property (assign,nonatomic) BOOL showInfo; 
@property (nonatomic,retain) RWIProtocolDOMRGBAColor * contentColor; 
@property (nonatomic,retain) RWIProtocolDOMRGBAColor * paddingColor; 
@property (nonatomic,retain) RWIProtocolDOMRGBAColor * borderColor; 
@property (nonatomic,retain) RWIProtocolDOMRGBAColor * marginColor; 
-(RWIProtocolDOMRGBAColor *)borderColor;
-(void)setBorderColor:(RWIProtocolDOMRGBAColor *)arg1 ;
-(void)setShowInfo:(BOOL)arg1 ;
-(BOOL)showInfo;
-(void)setContentColor:(RWIProtocolDOMRGBAColor *)arg1 ;
-(RWIProtocolDOMRGBAColor *)contentColor;
-(void)setPaddingColor:(RWIProtocolDOMRGBAColor *)arg1 ;
-(RWIProtocolDOMRGBAColor *)paddingColor;
-(void)setMarginColor:(RWIProtocolDOMRGBAColor *)arg1 ;
-(RWIProtocolDOMRGBAColor *)marginColor;
@end

