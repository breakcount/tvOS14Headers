/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:12:49 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/ModelIO.framework/ModelIO
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ModelIO/ModelIO-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface MDLVertexDescriptor : NSObject <NSCopying> {

	NSMutableArray* _attributes;
	NSMutableArray* _layouts;

}

@property (nonatomic,retain) NSMutableArray * attributes;              //@synthesize attributes=_attributes - In the implementation block
@property (nonatomic,retain) NSMutableArray * layouts;                 //@synthesize layouts=_layouts - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(NSMutableArray *)attributes;
-(void)reset;
-(void)setAttributes:(NSMutableArray *)arg1 ;
-(NSMutableArray *)layouts;
-(id)attributeNamed:(id)arg1 ;
-(void)addOrReplaceAttribute:(id)arg1 ;
-(void)setPackedOffsets;
-(void)setPackedStrides;
-(void)debugPrintToFile:(_sFILE*)arg1 ;
-(id)initWithVertexDescriptor:(id)arg1 ;
-(void)removeAttributeNamed:(id)arg1 ;
-(void)setLayouts:(NSMutableArray *)arg1 ;
@end

