/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:29:34 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIDictationToken.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface UIDictationScoredToken : UIDictationToken <NSSecureCoding> {

	double _confidenceScore;

}

@property (nonatomic,readonly) double confidenceScore;              //@synthesize confidenceScore=_confidenceScore - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(double)confidenceScore;
-(id)initWithText:(id)arg1 removeSpaceBefore:(BOOL)arg2 removeSpaceAfter:(BOOL)arg3 confidenceScore:(double)arg4 ;
-(id)_descriptionExtra;
@end

