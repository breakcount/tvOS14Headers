/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:09 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ScreenReaderCore/SCRCMathExpression.h>

@class NSArray, NSString;

@interface SCRCMathArrayExpression : SCRCMathExpression {

	NSArray* _children;

}

@property (nonatomic,readonly) NSString * mathMLTag; 
@property (nonatomic,readonly) NSArray * mathMLAttributes; 
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(id)children;
-(id)speakableDescriptionWithSpeakingStyle:(long long)arg1 arePausesAllowed:(BOOL)arg2 ;
-(id)prefixForChildAtIndex:(unsigned long long)arg1 ;
-(id)suffixForChildAtIndex:(unsigned long long)arg1 ;
-(id)speakableSegmentsWithSpeakingStyle:(long long)arg1 upToDepth:(unsigned long long)arg2 treePosition:(id)arg3 ;
-(id)childSpeakableSegmentsWithSpeakingStyle:(long long)arg1 upToDepth:(unsigned long long)arg2 parentTreePosition:(id)arg3 childIndex:(unsigned long long*)arg4 ;
-(id)mathMLString;
-(NSString *)mathMLTag;
-(NSArray *)mathMLAttributes;
-(id)localizablePrefixForChildAtIndex:(unsigned long long)arg1 ;
-(id)localizableSuffixForChildAtIndex:(unsigned long long)arg1 ;
-(id)subExpressions;
-(BOOL)hasSimpleArrayOfChildren;
@end

