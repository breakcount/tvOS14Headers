/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:39:59 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/AMSUIWebModelInterface.h>

@class NSString;

@interface AMSUIWebActivityIndicatorModel : NSObject <AMSUIWebModelInterface> {

	BOOL _animate;

}

@property (assign,nonatomic) BOOL animate;                          //@synthesize animate=_animate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithJSObject:(id)arg1 context:(id)arg2 ;
-(BOOL)animate;
-(void)setAnimate:(BOOL)arg1 ;
@end
