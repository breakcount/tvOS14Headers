/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:38:41 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSDictionary;


@protocol MCActionSupport
@property (readonly) NSDictionary * actions; 
@property (nonatomic,readonly) unsigned long long countOfActions; 
@required
-(void)removeAllActions;
-(NSDictionary *)actions;
-(id)actionForKey:(id)arg1;
-(void)removeActionForKey:(id)arg1;
-(void)setAction:(id)arg1 forKey:(id)arg2;
-(unsigned long long)countOfActions;
-(void)initActionsWithImprints:(id)arg1;
-(void)demolishActions;
-(id)imprintsForActions;

@end

