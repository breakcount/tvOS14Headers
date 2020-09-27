/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:29:58 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/_UIViewVisitor.h>

@interface _UIViewBlockVisitor : _UIViewVisitor {

	/*^block*/id _visitorBlock;

}

@property (nonatomic,copy) id visitorBlock;              //@synthesize visitorBlock=_visitorBlock - In the implementation block
-(void)dealloc;
-(id)initWithTraversalDirection:(unsigned long long)arg1 visitorBlock:(/*^block*/id)arg2 ;
-(BOOL)_visitView:(id)arg1 ;
-(void)setVisitorBlock:(id)arg1 ;
-(id)visitorBlock;
@end

