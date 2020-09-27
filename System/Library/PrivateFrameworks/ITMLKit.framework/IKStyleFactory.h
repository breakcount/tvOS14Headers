/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:31 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ITMLKit/ITMLKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class IKStylesGroup, NSMutableDictionary;

@interface IKStyleFactory : NSObject <NSCopying> {

	IKStylesGroup* _stylesGroup;
	NSMutableDictionary* _styleListsByClassSelector;

}

@property (nonatomic,retain,readonly) IKStylesGroup * stylesGroup;                                  //@synthesize stylesGroup=_stylesGroup - In the implementation block
@property (nonatomic,retain,readonly) NSMutableDictionary * styleListsByClassSelector;              //@synthesize styleListsByClassSelector=_styleListsByClassSelector - In the implementation block
+(id)styleFactoryWithMarkup:(id)arg1 filterBlockedStyles:(BOOL)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setViewElementStylesDirty;
-(IKStylesGroup *)stylesGroup;
-(id)initWithStylesGroup:(id)arg1 ;
-(id)_collapsedStyleListForSelectors:(id)arg1 targetSelector:(id)arg2 stylesGroup:(id)arg3 ;
-(NSMutableDictionary *)styleListsByClassSelector;
-(id)styleListForClassSelector:(id)arg1 ;
@end

