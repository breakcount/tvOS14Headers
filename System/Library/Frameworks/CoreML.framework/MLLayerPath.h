/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:53 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreML/CoreML-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSString;

@interface MLLayerPath : NSObject <NSCopying> {

	NSArray* _scopedModelNames;
	NSString* _layerName;

}

@property (nonatomic,copy) NSString * layerName;                    //@synthesize layerName=_layerName - In the implementation block
@property (nonatomic,copy) NSArray * scopedModelNames;              //@synthesize scopedModelNames=_scopedModelNames - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(NSString *)layerName;
-(void)setLayerName:(NSString *)arg1 ;
-(id)initWithScopedModelAndLayerName:(id)arg1 layerName:(id)arg2 ;
-(void)appendPathComponent:(id)arg1 ;
-(BOOL)isEqualToMLLayerPath:(id)arg1 ;
-(NSArray *)scopedModelNames;
-(void)setScopedModelNames:(NSArray *)arg1 ;
@end

