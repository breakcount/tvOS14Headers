/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:48 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Photos/Photos-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface PHAssetCreationMetadataCopyOptions : NSObject <NSCopying, NSSecureCoding> {

	BOOL _shouldCopyTitleDescriptionAndKeywords;
	BOOL _shouldCopySpatialOverCaptureResources;

}

@property (assign,nonatomic) BOOL shouldCopyTitleDescriptionAndKeywords;              //@synthesize shouldCopyTitleDescriptionAndKeywords=_shouldCopyTitleDescriptionAndKeywords - In the implementation block
@property (assign,nonatomic) BOOL shouldCopySpatialOverCaptureResources;              //@synthesize shouldCopySpatialOverCaptureResources=_shouldCopySpatialOverCaptureResources - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)metadataCopyOptionsForPublishingOriginals;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithXPCDict:(id)arg1 ;
-(BOOL)shouldCopyTitleDescriptionAndKeywords;
-(void)setShouldCopyTitleDescriptionAndKeywords:(BOOL)arg1 ;
-(BOOL)shouldCopySpatialOverCaptureResources;
-(void)setShouldCopySpatialOverCaptureResources:(BOOL)arg1 ;
-(void)encodeToXPCDict:(id)arg1 ;
-(id)plRepresentation;
@end

