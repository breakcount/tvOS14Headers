/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:38:40 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ATVSlideshow/ATVSlideshow-Structs.h>
@class NSString;

@interface MRAsset : NSObject {

	NSString* mPath;

}

@property (copy) NSString * path; 
+(id)mrAssetWithPath:(id)arg1 ;
-(void)dealloc;
-(NSString *)path;
-(void)setPath:(NSString *)arg1 ;
-(id)workingPath;
-(id)workingPathForSize:(CGSize)arg1 ;
-(CGImageRef)CGImageForSize:(CGSize)arg1 ;
@end

