/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:56:20 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/RenderBox.framework/RenderBox
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol RBStroke <NSObject>
@property (nonatomic,readonly) int strokeType; 
@property (nonatomic,readonly) CGRect boundingRect; 
@property (nonatomic,readonly) float borderWidth; 
@required
-(float)borderWidth;
-(int)strokeType;
-(CGRect)boundingRect;
-(void)applyFunction:(/*function pointer*/void*)arg1 info:(void*)arg2;

@end
