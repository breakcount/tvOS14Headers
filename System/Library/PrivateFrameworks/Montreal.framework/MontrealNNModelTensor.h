/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:46 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/Montreal.framework/Montreal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Montreal/Montreal-Structs.h>
#import <Montreal/MontrealNNDescription.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <Montreal/MontrealNNDescriptionProtocol.h>

@class NSString, NSArray, NSHashTable;

@interface MontrealNNModelTensor : MontrealNNDescription <NSCopying, MontrealNNDescriptionProtocol> {

	NSString* _name;
	NSArray* _dimension;
	NSHashTable* _asInput;
	NSHashTable* _asOutput;

}

@property (readonly) NSString * name;                               //@synthesize name=_name - In the implementation block
@property (readonly) NSArray * dimension;                           //@synthesize dimension=_dimension - In the implementation block
@property (readonly) NSHashTable * asInput;                         //@synthesize asInput=_asInput - In the implementation block
@property (readonly) NSHashTable * asOutput;                        //@synthesize asOutput=_asOutput - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)createInputs:(SCD_Struct_Mo0*)arg1 inputChunks:(id)arg2 nodeName:(id)arg3 ;
+(id)createOutputs:(SCD_Struct_Mo0*)arg1 outputChunks:(id)arg2 nodeName:(id)arg3 ;
-(NSString *)name;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSArray *)dimension;
-(void)description:(id)arg1 indent:(id)arg2 ;
-(id)jsonDescription;
-(id)checkForValidity;
-(NSHashTable *)asInput;
-(NSHashTable *)asOutput;
-(id)initWithName:(id)arg1 dimension:(id)arg2 ;
-(unsigned long long)tensorSize;
@end

