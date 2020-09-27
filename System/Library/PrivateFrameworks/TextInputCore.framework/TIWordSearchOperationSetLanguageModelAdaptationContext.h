/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:40 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextInputCore/TIWordSearchOperation.h>

@class TIMecabraWrapper, TILanguageModelAdaptationContext;

@interface TIWordSearchOperationSetLanguageModelAdaptationContext : TIWordSearchOperation {

	TIMecabraWrapper* _mecabraWrapper;
	TILanguageModelAdaptationContext* _adaptationContext;

}

@property (nonatomic,retain) TIMecabraWrapper * mecabraWrapper;                               //@synthesize mecabraWrapper=_mecabraWrapper - In the implementation block
@property (nonatomic,copy) TILanguageModelAdaptationContext * adaptationContext;              //@synthesize adaptationContext=_adaptationContext - In the implementation block
-(void)cancel;
-(void)perform;
-(TIMecabraWrapper *)mecabraWrapper;
-(void)setMecabraWrapper:(TIMecabraWrapper *)arg1 ;
-(TILanguageModelAdaptationContext *)adaptationContext;
-(void)setAdaptationContext:(TILanguageModelAdaptationContext *)arg1 ;
-(id)initWithWordSearch:(id)arg1 adaptationContext:(id)arg2 ;
@end

