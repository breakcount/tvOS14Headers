/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:55:42 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosGraph/PGPotentialMemory.h>

@class PGGraphPersonNode, NSArray;

@interface PGPotentialPersonOverTimeMemory : PGPotentialMemory {

	PGGraphPersonNode* _personNode;
	NSArray* _bestAssetLocalIdentifiers;
	NSArray* _facedAssetLocalIdentifiers;

}

@property (readonly) PGGraphPersonNode * personNode;                  //@synthesize personNode=_personNode - In the implementation block
@property (retain) NSArray * facedAssetLocalIdentifiers;              //@synthesize facedAssetLocalIdentifiers=_facedAssetLocalIdentifiers - In the implementation block
@property (retain) NSArray * bestAssetLocalIdentifiers;               //@synthesize bestAssetLocalIdentifiers=_bestAssetLocalIdentifiers - In the implementation block
-(id)uuid;
-(PGGraphPersonNode *)personNode;
-(NSArray *)facedAssetLocalIdentifiers;
-(void)setFacedAssetLocalIdentifiers:(NSArray *)arg1 ;
-(id)initWithPersonNode:(id)arg1 momentNodes:(id)arg2 ;
-(NSArray *)bestAssetLocalIdentifiers;
-(void)setBestAssetLocalIdentifiers:(NSArray *)arg1 ;
@end

