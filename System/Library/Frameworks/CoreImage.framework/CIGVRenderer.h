/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:03:09 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CIGVRenderer <GVRenderer>
@property (assign) int direction; 
@property (assign) CGSize separation; 
@property (assign) BOOL drawEdgesFirst; 
@required
-(void)setFileURL:(id)arg1;
-(int)direction;
-(CGSize)separation;
-(BOOL)setCanvasWidth:(unsigned)arg1 height:(unsigned)arg2;
-(void)setDirection:(int)arg1;
-(void)setSeparation:(CGSize)arg1;
-(void)drawNode:(id)arg1;
-(void)drawEdge:(id)arg1 withPath:(id)arg2;
-(BOOL)drawEdgesFirst;
-(void)setFileTitle:(id)arg1;
-(void)flushRender;
-(void)setDrawEdgesFirst:(BOOL)arg1;

@end

