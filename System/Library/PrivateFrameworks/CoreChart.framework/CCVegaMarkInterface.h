/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:43:53 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/CoreChart.framework/CoreChart
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, CALayer;


@protocol CCVegaMarkInterface
@property (nonatomic,readonly) unsigned long long itemCount; 
@property (nonatomic,readonly) BOOL clip; 
@property (nonatomic,readonly) BOOL interactive; 
@property (nonatomic,readonly) NSString * marktype; 
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSString * role; 
@property (nonatomic,readonly) double zindex; 
@property (nonatomic,retain) CALayer * caLayer; 
@property (assign,nonatomic) BOOL isDirty; 
@required
-(NSString *)name;
-(BOOL)isEqual:(id)arg1;
-(BOOL)isDirty;
-(unsigned long long)itemCount;
-(NSString *)role;
-(id)itemAtIndex:(unsigned long long)arg1;
-(BOOL)clip;
-(BOOL)interactive;
-(void)setIsDirty:(BOOL)arg1;
-(CALayer *)caLayer;
-(id)getString:(id)arg1 defaultValue:(id)arg2;
-(double)zindex;
-(void)setCaLayer:(id)arg1;
-(NSString *)marktype;

@end

