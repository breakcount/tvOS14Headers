/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:15:59 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray;

@interface VCPObjectPool : NSObject {

	/*^block*/id _allocator;
	NSMutableArray* _objects;

}
+(id)objectPoolWithAllocator:(/*^block*/id)arg1 ;
-(id)getObject;
-(void)returnObject:(id)arg1 ;
-(id)initWithAllocator:(/*^block*/id)arg1 ;
@end

