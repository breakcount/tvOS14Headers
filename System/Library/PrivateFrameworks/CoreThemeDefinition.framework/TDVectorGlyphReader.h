/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:33:35 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreThemeDefinition/CoreThemeDefinition-Structs.h>
@class NSURL, NSDictionary, NSMutableDictionary;

@interface TDVectorGlyphReader : NSObject {

	os_unfair_lock_s _lock;
	CGSVGDocumentRef _svgDocument;
	NSURL* _fileURL;
	NSDictionary* _guideNodes;
	NSDictionary* _vectorGlyphNodes;
	NSMutableDictionary* _vectorGlyphWithWeightSize;
	float _templateVersion;
	double _sourcePointSize;
	double _defaultPointSize;

}

@property (readonly) float templateVersion;              //@synthesize templateVersion=_templateVersion - In the implementation block
+(id)vectorGlyphReaderWithURL:(id)arg1 platform:(long long)arg2 error:(id*)arg3 ;
+(id)vectorGlyphReaderWithURL:(id)arg1 error:(id*)arg2 ;
-(void)dealloc;
-(id)initWithData:(id)arg1 error:(id*)arg2 ;
-(float)templateVersion;
-(id)initWithURL:(id)arg1 error:(id*)arg2 ;
-(id)initWithURL:(id)arg1 platform:(long long)arg2 error:(id*)arg3 ;
-(BOOL)_commonInitWithData:(id)arg1 platform:(long long)arg2 error:(id*)arg3 ;
-(id)initWithData:(id)arg1 platform:(long long)arg2 error:(id*)arg3 ;
-(BOOL)_readSVGNodesError:(id*)arg1 ;
-(BOOL)_validateVectorGlyphsWithError:(id*)arg1 ;
-(id)_caplineNodeIDForGlyphSize:(long long)arg1 ;
-(id)_baselineNodeIDForGlyphSize:(long long)arg1 ;
-(id)_glyphNodeIDForWeight:(long long)arg1 size:(long long)arg2 ;
-(double)defaultPointSize;
-(double)_sourcePointSize;
-(unsigned long long)numberOfVectorGlyphs;
-(CGSVGDocumentRef)vectorGlyphWithWeight:(long long)arg1 size:(long long)arg2 error:(id*)arg3 ;
-(BOOL)vectorGlyphExistsWithWeight:(long long)arg1 size:(long long)arg2 error:(id*)arg3 ;
-(double)baselineForVectorGlyphWithWeight:(long long)arg1 size:(long long)arg2 ;
-(double)capHeightForVectorGlyphWithWeight:(long long)arg1 size:(long long)arg2 ;
-(SCD_Struct_TD8)alignmentRectInsetsForVectorGlyphWithWeight:(long long)arg1 size:(long long)arg2 ;
@end

