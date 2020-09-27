/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:38:34 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/TVUIKit.framework/TVUIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVUIKit/TVUIKit-Structs.h>
#import <UIKitCore/UIStackView.h>
#import <libobjc.A.dylib/CAAnimationDelegate.h>

@class NSArray, NSIndexSet, NSString;

@interface _TVDigitGroupView : UIStackView <CAAnimationDelegate> {

	BOOL _secure;
	unsigned long long _numberOfDigits;
	NSArray* _digitViews;
	NSIndexSet* _separatorIndexes;
	NSString* _text;
	/*^block*/id _shakeCompletionBlock;

}

@property (nonatomic,copy) id shakeCompletionBlock;                          //@synthesize shakeCompletionBlock=_shakeCompletionBlock - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfDigits;              //@synthesize numberOfDigits=_numberOfDigits - In the implementation block
@property (nonatomic,retain) NSArray * digitViews;                           //@synthesize digitViews=_digitViews - In the implementation block
@property (nonatomic,retain) NSIndexSet * separatorIndexes;                  //@synthesize separatorIndexes=_separatorIndexes - In the implementation block
@property (nonatomic,copy) NSString * text;                                  //@synthesize text=_text - In the implementation block
@property (assign,getter=isSecure,nonatomic) BOOL secure;                    //@synthesize secure=_secure - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithCoder:(id)arg1 ;
-(void)setSecure:(BOOL)arg1 ;
-(BOOL)isSecure;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)_commonInit;
-(void)setNumberOfDigits:(unsigned long long)arg1 ;
-(void)setDigitViews:(NSArray *)arg1 ;
-(NSArray *)digitViews;
-(unsigned long long)numberOfDigits;
-(void)setSeparatorIndexes:(NSIndexSet *)arg1 ;
-(NSIndexSet *)separatorIndexes;
-(void)shakeWithCompletion:(/*^block*/id)arg1 ;
-(void)_updateDigitViews;
-(void)setShakeCompletionBlock:(id)arg1 ;
-(id)shakeCompletionBlock;
@end

