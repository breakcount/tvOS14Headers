/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:36:28 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/TextInput/TextInput_ja.bundle/TextInput_ja
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/TIMarkedTextBuffer.h>

@class NSString, NSMutableArray;

@interface TIMarkedTextBuffer_ja_Romaji : NSObject <TIMarkedTextBuffer> {

	NSString* _internalString;
	NSString* _externalString;
	long long _externalIndex;
	NSMutableArray* _externalIndexToInternalIndexMappingArray;

}

@property (nonatomic,readonly) NSMutableArray * externalIndexToInternalIndexMappingArray;              //@synthesize externalIndexToInternalIndexMappingArray=_externalIndexToInternalIndexMappingArray - In the implementation block
@property (nonatomic,readonly) NSString * internalString;                                              //@synthesize internalString=_internalString - In the implementation block
@property (nonatomic,readonly) long long internalIndex; 
@property (nonatomic,readonly) NSString * externalString;                                              //@synthesize externalString=_externalString - In the implementation block
@property (assign,nonatomic) long long externalIndex;                                                  //@synthesize externalIndex=_externalIndex - In the implementation block
-(id)initWithInternalString:(id)arg1 ;
-(long long)internalIndex;
-(void)setInternalString:(id)arg1 withInputIndex:(long long)arg2 ;
-(NSString *)internalString;
-(long long)externalIndex;
-(void)deleteFromInput:(long long*)arg1 newInput:(id*)arg2 inputIndex:(long long*)arg3 ;
-(NSString *)externalString;
-(void)setExternalIndex:(long long)arg1 ;
-(void)updateStateWithInputIndex:(long long)arg1 ;
-(NSMutableArray *)externalIndexToInternalIndexMappingArray;
-(void)setExternalInputIndex:(long long)arg1 ;
@end

