/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:55:50 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface PGSharingSuggestionOptions : NSObject {

	BOOL _replaceMergeCandidates;
	BOOL _debugMode;
	BOOL _includeUnverified;
	BOOL _filterLowWeightResults;
	BOOL _useContactSuggestion;
	unsigned long long _sharingStream;
	unsigned long long _fetchLimit;

}

@property (assign,nonatomic) unsigned long long sharingStream;              //@synthesize sharingStream=_sharingStream - In the implementation block
@property (assign,nonatomic) unsigned long long fetchLimit;                 //@synthesize fetchLimit=_fetchLimit - In the implementation block
@property (assign,nonatomic) BOOL includeUnverified;                        //@synthesize includeUnverified=_includeUnverified - In the implementation block
@property (assign,nonatomic) BOOL replaceMergeCandidates;                   //@synthesize replaceMergeCandidates=_replaceMergeCandidates - In the implementation block
@property (assign,nonatomic) BOOL debugMode;                                //@synthesize debugMode=_debugMode - In the implementation block
@property (assign,nonatomic) BOOL filterLowWeightResults;                   //@synthesize filterLowWeightResults=_filterLowWeightResults - In the implementation block
@property (assign,nonatomic) BOOL useContactSuggestion;                     //@synthesize useContactSuggestion=_useContactSuggestion - In the implementation block
+(id)optionsForClient:(unsigned long long)arg1 ;
+(unsigned long long)_shareSheetSharingStream;
-(id)description;
-(id)init;
-(void)setFetchLimit:(unsigned long long)arg1 ;
-(unsigned long long)fetchLimit;
-(unsigned long long)sharingStream;
-(void)setSharingStream:(unsigned long long)arg1 ;
-(BOOL)debugMode;
-(void)setDebugMode:(BOOL)arg1 ;
-(BOOL)useContactSuggestion;
-(void)setUseContactSuggestion:(BOOL)arg1 ;
-(BOOL)replaceMergeCandidates;
-(void)setReplaceMergeCandidates:(BOOL)arg1 ;
-(BOOL)includeUnverified;
-(void)setIncludeUnverified:(BOOL)arg1 ;
-(BOOL)filterLowWeightResults;
-(void)setFilterLowWeightResults:(BOOL)arg1 ;
@end

