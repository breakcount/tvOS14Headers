/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:55:39 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosGraph/PGAbstractSuggester.h>
#import <libobjc.A.dylib/PGSuggester.h>

@class NSString;

@interface PGDayHighlightSharingSuggester : PGAbstractSuggester <PGSuggester>

@property (assign,nonatomic) BOOL lastSuggestionWasColliding; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)suggestionTypes;
+(id)suggestionSubtypes;
+(BOOL)shouldSuggestHighlightNode:(id)arg1 loggingConnection:(id)arg2 ;
+(BOOL)canSuggestHighlightNodeWithoutPeople:(id)arg1 loggingConnection:(id)arg2 ;
-(id)suggestionsWithOptions:(id)arg1 progress:(/*^block*/id)arg2 ;
@end

