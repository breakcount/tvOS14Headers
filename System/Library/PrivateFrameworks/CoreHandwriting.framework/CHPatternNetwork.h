/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:30 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreHandwriting/CoreHandwriting-Structs.h>
@class NSDictionary;

@interface CHPatternNetwork : NSObject {

	Network* _network;
	NSDictionary* _symbols;
	NSDictionary* _startNodes;
	NSDictionary* _startCursorForContentTypes;

}
+(id)rootCursorForContentType:(int)arg1 inNetwork:(id)arg2 forFirstSegmentGroup:(BOOL)arg3 ;
+(id)newCursorByAdvancingWithString:(id)arg1 fromCursor:(id)arg2 inNetwork:(id)arg3 ;
+(id)newCursorByAdvancingWithSymbol:(unsigned long long)arg1 fromCursor:(id)arg2 inNetwork:(id)arg3 ;
+(id)patternToSymbolMap;
+(id)contentTypesToPatternsMapping;
+(id)rootCursorForPatternType:(long long)arg1 inNetwork:(id)arg2 forFirstSegmentGroup:(BOOL)arg3 ;
+(BOOL)isString:(id)arg1 fullPattern:(long long)arg2 inNetwork:(id)arg3 ;
-(void)dealloc;
-(id)initWithFile:(id)arg1 ;
-(id)newCursorByAdvancingCursor:(id)arg1 withSymbol:(unsigned long long)arg2 ;
-(unsigned long long)stateTypeForNodeIndex:(unsigned long long)arg1 ;
@end

