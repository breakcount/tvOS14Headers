/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:55:54 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString;

@interface PGSearchThumbnailMomentAssetPairUUID : NSObject <NSSecureCoding, NSCoding> {

	NSString* _assetUUID;
	NSString* _momentUUID;

}

@property (nonatomic,readonly) NSString * assetUUID;               //@synthesize assetUUID=_assetUUID - In the implementation block
@property (nonatomic,readonly) NSString * momentUUID;              //@synthesize momentUUID=_momentUUID - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)assetUUID;
-(id)initWithAssetUUID:(id)arg1 momentUUID:(id)arg2 ;
-(NSString *)momentUUID;
@end

