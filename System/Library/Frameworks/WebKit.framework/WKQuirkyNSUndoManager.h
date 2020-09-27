/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:06 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSUndoManager.h>

@class WKContentView;

@interface WKQuirkyNSUndoManager : NSUndoManager {

	WKContentView* _contentView;

}

@property (__weak,readonly) WKContentView * contentView;              //@synthesize contentView=_contentView - In the implementation block
-(BOOL)canRedo;
-(BOOL)canUndo;
-(void)undo;
-(void)redo;
-(WKContentView *)contentView;
-(id)initWithContentView:(id)arg1 ;
@end

