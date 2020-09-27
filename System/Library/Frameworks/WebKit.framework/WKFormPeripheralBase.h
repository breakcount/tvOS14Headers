/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:06 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <libobjc.A.dylib/WKFormPeripheral.h>

@class WKContentView;

@interface WKFormPeripheralBase : NSObject <WKFormPeripheral> {

	RetainPtr<NSObject<WKFormControl> >* _control;
	BOOL _editing;
	WKContentView* _view;

}

@property (nonatomic,readonly) WKContentView * view;                          //@synthesize view=_view - In the implementation block
@property (nonatomic,readonly) NSObject*<WKFormControl> control; 
@property (getter=isEditing,nonatomic,readonly) BOOL editing;                 //@synthesize editing=_editing - In the implementation block
-(void)beginEditing;
-(void)endEditing;
-(BOOL)isEditing;
-(WKContentView *)view;
-(NSObject*<WKFormControl>)control;
-(BOOL)handleKeyEvent:(id)arg1 ;
-(id)initWithView:(id)arg1 control:(RetainPtr<NSObject<WKFormControl> >*)arg2 ;
-(id)assistantView;
@end

