/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:29:49 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CAAnimationDelegate.h>

@class NSString;

@interface _UISelectionGrabberAnimationDelegate : NSObject <CAAnimationDelegate> {

	/*^block*/id block;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)delegateWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
@end

