/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:27 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/SceneKit.framework/SceneKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray;


@protocol SCNActionable <NSObject>
@property (nonatomic,readonly) BOOL hasActions; 
@property (nonatomic,readonly) NSArray * actionKeys; 
@required
-(void)removeAllActions;
-(id)actionForKey:(id)arg1;
-(void)runAction:(id)arg1;
-(NSArray *)actionKeys;
-(void)runAction:(id)arg1 forKey:(id)arg2;
-(void)removeActionForKey:(id)arg1;
-(void)runAction:(id)arg1 forKey:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)runAction:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(BOOL)hasActions;

@end

