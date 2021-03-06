/*
                       * This header is generated by classdump-dyld 1.0
                       * on Monday, September 28, 2020 at 7:00:53 PM Mountain Standard Time
                       * Operating System: Version 14.0 (Build 18J386)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
                       */

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface PXLayoutGeometryArray : NSObject <NSCopying> {

	PXLayoutGeometry* _geometries;
	long long _count;

}

@property (nonatomic,readonly) unsigned long long count; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(void)dealloc;
-(unsigned long long)count;
-(PXLayoutGeometry)geometryAtIndex:(unsigned long long)arg1 ;
-(id)initWithGeometries:(PXLayoutGeometry*)arg1 count:(unsigned long long)arg2 ;
@end

