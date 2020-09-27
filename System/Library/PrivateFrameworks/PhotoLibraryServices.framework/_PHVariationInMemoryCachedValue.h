/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:28 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSURL, NSDate;

@interface _PHVariationInMemoryCachedValue : NSObject {

	NSDictionary* _info;
	NSURL* _fileURL;
	NSDate* _expectedDate;

}

@property (nonatomic,readonly) NSDictionary * info;                //@synthesize info=_info - In the implementation block
@property (nonatomic,readonly) NSURL * fileURL;                    //@synthesize fileURL=_fileURL - In the implementation block
@property (nonatomic,readonly) NSDate * expectedDate;              //@synthesize expectedDate=_expectedDate - In the implementation block
@property (nonatomic,readonly) BOOL isValid; 
-(BOOL)isValid;
-(NSURL *)fileURL;
-(NSDictionary *)info;
-(NSDate *)expectedDate;
-(id)initWithInfo:(id)arg1 fileURL:(id)arg2 ;
-(id)_currentFileModificationDate;
@end

