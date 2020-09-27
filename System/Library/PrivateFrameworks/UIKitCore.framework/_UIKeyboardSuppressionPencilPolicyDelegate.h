/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:29:30 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/_UIKeyboardSuppressionPolicyDelegate.h>

@class NSString;

@interface _UIKeyboardSuppressionPencilPolicyDelegate : NSObject <_UIKeyboardSuppressionPolicyDelegate> {

	BOOL _isQueryingLocaleIdentifier;
	BOOL _suppressLocaleIdentifier;
	NSString* _overrideLocaleIdentifier;

}

@property (assign,nonatomic) BOOL _suppressLocaleIdentifier;                  //@synthesize suppressLocaleIdentifier=_suppressLocaleIdentifier - In the implementation block
@property (nonatomic,copy) NSString * _overrideLocaleIdentifier;              //@synthesize overrideLocaleIdentifier=_overrideLocaleIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)_suppressLocaleIdentifier;
-(id)_recognitionLocaleIdentifier;
-(BOOL)_shouldSuppressForDelegate:(id)arg1 ;
-(void)set_suppressLocaleIdentifier:(BOOL)arg1 ;
-(NSString *)_overrideLocaleIdentifier;
-(void)set_overrideLocaleIdentifier:(NSString *)arg1 ;
@end

