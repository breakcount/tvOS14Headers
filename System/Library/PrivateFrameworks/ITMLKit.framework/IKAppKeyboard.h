/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:32 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/IKAppKeyboardBridge.h>
#import <libobjc.A.dylib/IKDOMFeature.h>

@protocol IKAppKeyboardDelegate;
@class NSString, JSValue, JSManagedValue, IKAppContext, NSArray, IKJSKeyboard;

@interface IKAppKeyboard : NSObject <IKAppKeyboardBridge, IKDOMFeature> {

	JSManagedValue* _jsHints;
	NSString* _jsText;
	NSString* _jsSource;
	NSString* _featureName;
	IKAppContext* _appContext;
	id<IKAppKeyboardDelegate> _delegate;
	NSString* _text;
	NSArray* _hints;
	IKJSKeyboard* _jsKeyboard;
	NSString* _source;

}

@property (assign,setter=setJSKeyboard:,nonatomic,__weak) IKJSKeyboard * jsKeyboard;              //@synthesize jsKeyboard=_jsKeyboard - In the implementation block
@property (setter=_setSource:,getter=_source,nonatomic,copy) NSString * source;                   //@synthesize source=_source - In the implementation block
@property (assign,nonatomic,__weak) id<IKAppKeyboardDelegate> delegate;                           //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * text;                                                       //@synthesize text=_text - In the implementation block
@property (nonatomic,copy,readonly) NSArray * hints;                                              //@synthesize hints=_hints - In the implementation block
@property (setter=setJSText:,nonatomic,copy) NSString * jsText;                                   //@synthesize jsText=_jsText - In the implementation block
@property (setter=setJSSource:,nonatomic,copy) NSString * jsSource;                               //@synthesize jsSource=_jsSource - In the implementation block
@property (setter=setJSHints:,nonatomic,copy) JSValue * jsHints; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * featureName;                                       //@synthesize featureName=_featureName - In the implementation block
@property (nonatomic,__weak,readonly) IKAppContext * appContext;                                  //@synthesize appContext=_appContext - In the implementation block
+(id)makeFeatureJSObjectForFeature:(id)arg1 ;
-(id<IKAppKeyboardDelegate>)delegate;
-(void)setDelegate:(id<IKAppKeyboardDelegate>)arg1 ;
-(id)_source;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(NSString *)featureName;
-(IKAppContext *)appContext;
-(id)initWithDOMNode:(id)arg1 featureName:(id)arg2 ;
-(NSArray *)hints;
-(void)setJSText:(id)arg1 ;
-(NSString *)jsText;
-(void)setJSHints:(id)arg1 ;
-(JSValue *)jsHints;
-(NSString *)jsSource;
-(void)setJSKeyboard:(id)arg1 ;
-(IKJSKeyboard *)jsKeyboard;
-(void)_setText:(id)arg1 then:(/*^block*/id)arg2 ;
-(void)setJSSource:(id)arg1 ;
-(void)didSelectHintWithText:(id)arg1 searchTerm:(id)arg2 ;
-(void)_setSource:(id)arg1 ;
@end

