/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:36:43 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <LinkPresentation/LinkPresentation-Structs.h>
#import <libobjc.A.dylib/LPCSSText.h>
#import <libobjc.A.dylib/NSCopying.h>

@class LPPointUnit;

@interface LPPadding : NSObject <LPCSSText, NSCopying> {

	LPPointUnit* _top;
	LPPointUnit* _leading;
	LPPointUnit* _bottom;
	LPPointUnit* _trailing;

}

@property (nonatomic,retain) LPPointUnit * top;                   //@synthesize top=_top - In the implementation block
@property (nonatomic,retain) LPPointUnit * leading;               //@synthesize leading=_leading - In the implementation block
@property (nonatomic,retain) LPPointUnit * bottom;                //@synthesize bottom=_bottom - In the implementation block
@property (nonatomic,retain) LPPointUnit * trailing;              //@synthesize trailing=_trailing - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(LPPointUnit *)top;
-(LPPointUnit *)bottom;
-(void)setBottom:(LPPointUnit *)arg1 ;
-(void)setTop:(LPPointUnit *)arg1 ;
-(LPPointUnit *)leading;
-(void)setLeading:(LPPointUnit *)arg1 ;
-(id)_lp_CSSText;
-(void)setTrailing:(LPPointUnit *)arg1 ;
-(UIEdgeInsets)asInsetsForLTR:(BOOL)arg1 ;
-(LPPointUnit *)trailing;
@end
