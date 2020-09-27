/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:43:54 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/CoreChart.framework/CoreChart
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CCVegaCARendererJSExport.h>

@class NSString, CCVegaCARenderer;

@interface CCVegaCARendererWrapper : NSObject <CCVegaCARendererJSExport> {

	CCVegaCARenderer* _renderer;

}

@property (__weak) CCVegaCARenderer * renderer;              //@synthesize renderer=_renderer - In the implementation block
@property (retain) NSString * backgroundColor; 
-(NSString *)backgroundColor;
-(void)setBackgroundColor:(NSString *)arg1 ;
-(CCVegaCARenderer *)renderer;
-(void)setRenderer:(CCVegaCARenderer *)arg1 ;
-(void)render:(id)arg1 ;
-(void)dirty;
-(id)initWithRenderer:(id)arg1 ;
-(void)dirtyAll;
-(void)resizeWidth:(double)arg1 height:(double)arg2 originX:(double)arg3 originY:(double)arg4 ;
@end
