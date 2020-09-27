/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:45 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, MPCPlayerResponse, NSString, MPNowPlayingInfoLanguageOption;

@interface MPCPlayerLanguageOptionGroup : NSObject {

	unsigned long long _currentIndex;
	BOOL _allowEmptySelection;
	NSArray* _options;
	MPCPlayerResponse* _response;

}

@property (nonatomic,__weak,readonly) MPCPlayerResponse * response;                          //@synthesize response=_response - In the implementation block
@property (nonatomic,readonly) NSString * localizedTitle; 
@property (nonatomic,readonly) unsigned long long numberOfOptions; 
@property (nonatomic,readonly) unsigned long long indexOfSelectedOption; 
@property (nonatomic,readonly) NSArray * options;                                            //@synthesize options=_options - In the implementation block
@property (nonatomic,readonly) MPNowPlayingInfoLanguageOption * selectedOption; 
@property (nonatomic,readonly) BOOL allowEmptySelection;                                     //@synthesize allowEmptySelection=_allowEmptySelection - In the implementation block
-(MPCPlayerResponse *)response;
-(NSArray *)options;
-(NSString *)localizedTitle;
-(BOOL)allowEmptySelection;
-(MPNowPlayingInfoLanguageOption *)selectedOption;
-(id)initWithLanguageOptionGroups:(id)arg1 currentLanguageOptions:(id)arg2 response:(id)arg3 ;
-(unsigned long long)numberOfOptions;
-(unsigned long long)indexOfSelectedOption;
-(id)localizedTitleForOptionAtIndex:(unsigned long long)arg1 ;
-(id)changeRequestForOptionAtIndex:(unsigned long long)arg1 ;
@end

