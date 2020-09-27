/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:12:49 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/ModelIO.framework/ModelIO
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray;


@protocol MDLTransformComponent <MDLComponent>
@property (assign,nonatomic) SCD_Struct_MD1 matrix; 
@property (assign,nonatomic) BOOL resetsTransform; 
@property (nonatomic,readonly) double minimumTime; 
@property (nonatomic,readonly) double maximumTime; 
@property (nonatomic,copy,readonly) NSArray * keyTimes; 
@optional
+(/*function pointer*/void**)globalTransformWithObject:(id)arg1 atTime:(double)arg2;
-(/*function pointer*/void**)localTransformAtTime:(double)arg1;
-(void)setLocalTransform:(/*function pointer*/void*)arg1;
-(void)setLocalTransform:(/*function pointer*/void*)arg1 forTime:(double)arg2;

@required
-(NSArray *)keyTimes;
-(SCD_Struct_MD1)matrix;
-(double)minimumTime;
-(double)maximumTime;
-(void)setMatrix:(/*function pointer*/void*)arg1;
-(BOOL)resetsTransform;
-(void)setResetsTransform:(BOOL)arg1;

@end
