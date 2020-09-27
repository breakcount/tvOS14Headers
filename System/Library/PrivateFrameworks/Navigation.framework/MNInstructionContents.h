/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:56 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol MNInstructionContents
@property (nonatomic,readonly) long long context; 
@property (assign,nonatomic) BOOL suppressNames; 
@property (nonatomic,retain) NSString * roadName; 
@property (nonatomic,readonly) BOOL hasServerContent; 
@property (assign,nonatomic) BOOL suppressFallback; 
@required
-(long long)context;
-(NSString *)roadName;
-(void)setRoadName:(id)arg1;
-(id)stringForDistance:(double)arg1;
-(id)instruction;
-(id)instructionWithShorterAlternatives;
-(id)instructionForStage:(unsigned long long)arg1 distance:(double)arg2;
-(BOOL)suppressNames;
-(void)setSuppressNames:(BOOL)arg1;
-(BOOL)hasServerContent;
-(BOOL)suppressFallback;
-(void)setSuppressFallback:(BOOL)arg1;

@end

