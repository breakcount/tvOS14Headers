/*
* This header is generated by classdump-dyld 1.0
* on Sunday, September 27, 2020 at 12:29:31 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TUICandidateViewState <NSObject>
@property (nonatomic,readonly) id<TUICandidateViewStyle> style; 
@property (nonatomic,readonly) id<TUICandidateViewStyle> disambiguationStyle; 
@property (nonatomic,readonly) long long primaryGridRowType; 
@property (nonatomic,readonly) long long disambiguationGridRowType; 
@property (nonatomic,readonly) long long disambiguationGridPosition; 
@property (nonatomic,readonly) long long sortControlPosition; 
@property (nonatomic,readonly) long long inlineTextViewPosition; 
@property (nonatomic,readonly) long long arrowButtonPosition; 
@property (nonatomic,readonly) long long arrowButtonDirection; 
@property (nonatomic,readonly) BOOL hasBackdrop; 
@property (nonatomic,readonly) BOOL candidateNumberEnabled; 
@property (nonatomic,readonly) double yOffset; 
@property (nonatomic,readonly) double additionalHeight; 
@property (nonatomic,readonly) CGPoint arrowButtonOffset; 
@property (nonatomic,readonly) unsigned long long borders; 
@required
-(id<TUICandidateViewStyle>)style;
-(double)yOffset;
-(BOOL)candidateNumberEnabled;
-(long long)arrowButtonDirection;
-(long long)primaryGridRowType;
-(long long)arrowButtonPosition;
-(long long)sortControlPosition;
-(BOOL)hasBackdrop;
-(long long)inlineTextViewPosition;
-(CGPoint)arrowButtonOffset;
-(long long)disambiguationGridPosition;
-(unsigned long long)borders;
-(long long)disambiguationGridRowType;
-(id<TUICandidateViewStyle>)disambiguationStyle;
-(double)additionalHeight;

@end

