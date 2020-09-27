/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:50:04 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSListFormatter.h>

@class NSString;

@interface VUIICUListFormatter : NSListFormatter {

	NSString* _style;

}

@property (nonatomic,copy) NSString * style;              //@synthesize style=_style - In the implementation block
+(id)localizedStringByJoiningStrings:(id)arg1 ;
+(id)localizedStringByJoiningStrings:(id)arg1 style:(id)arg2 ;
-(id)initWithLocale:(id)arg1 ;
-(id)_stringFromStringArray:(id)arg1 ;
-(NSString *)style;
-(void)setStyle:(NSString *)arg1 ;
-(id)initWithLocale:(id)arg1 style:(id)arg2 ;
@end

