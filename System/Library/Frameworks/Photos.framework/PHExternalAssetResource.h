/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:49 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PHCPLAssetResource.h>

@class PHAssetResourceCreationOptions, NSData, NSURL, NSString;

@interface PHExternalAssetResource : NSObject <PHCPLAssetResource> {

	long long _sandboxExtensionHandle;
	BOOL _duplicateAllowsReadAccess;
	BOOL _isLibraryAssetResource;
	long long _resourceType;
	PHAssetResourceCreationOptions* _creationOptions;
	unsigned long long _cplResourceType;
	NSData* _data;
	NSURL* _fileURL;
	long long _pixelWidth;
	long long _pixelHeight;

}

@property (nonatomic,readonly) long long type;                                                                  //@synthesize resourceType=_resourceType - In the implementation block
@property (nonatomic,retain) NSData * data;                                                                     //@synthesize data=_data - In the implementation block
@property (nonatomic,copy) PHAssetResourceCreationOptions * creationOptions;                                    //@synthesize creationOptions=_creationOptions - In the implementation block
@property (nonatomic,readonly) BOOL isLibraryAssetResource;                                                     //@synthesize isLibraryAssetResource=_isLibraryAssetResource - In the implementation block
@property (assign,setter=_setDuplicateAllowsReadAccess:,nonatomic) BOOL duplicateAllowsReadAccess;              //@synthesize duplicateAllowsReadAccess=_duplicateAllowsReadAccess - In the implementation block
@property (nonatomic,copy) NSURL * fileURL;                                                                     //@synthesize fileURL=_fileURL - In the implementation block
@property (assign,nonatomic) long long pixelWidth;                                                              //@synthesize pixelWidth=_pixelWidth - In the implementation block
@property (assign,nonatomic) long long pixelHeight;                                                             //@synthesize pixelHeight=_pixelHeight - In the implementation block
@property (nonatomic,readonly) NSString * originalFilename; 
@property (nonatomic,readonly) NSString * uniformTypeIdentifier; 
@property (nonatomic,readonly) unsigned long long cplResourceType;                                              //@synthesize cplResourceType=_cplResourceType - In the implementation block
+(unsigned long long)probableCPLResourceTypeFromAssetResourceType:(long long)arg1 ;
+(id)assetResourceForDuplicatingAssetResource:(id)arg1 asData:(BOOL)arg2 error:(id*)arg3 ;
-(id)init;
-(void)dealloc;
-(NSData *)data;
-(long long)type;
-(NSURL *)fileURL;
-(void)setFileURL:(NSURL *)arg1 ;
-(void)setData:(NSData *)arg1 ;
-(void)setPixelHeight:(long long)arg1 ;
-(long long)pixelHeight;
-(void)setPixelWidth:(long long)arg1 ;
-(long long)pixelWidth;
-(id)_issueSandboxExtension;
-(id)propertyListRepresentation;
-(id)initWithPropertyListRepresentation:(id)arg1 ;
-(NSString *)originalFilename;
-(NSString *)uniformTypeIdentifier;
-(id)initWithResourceType:(long long)arg1 ;
-(unsigned long long)cplResourceType;
-(void)_consumeSandboxExtension:(id)arg1 ;
-(void)_releaseSandboxExtension;
-(BOOL)duplicateAllowsReadAccess;
-(void)_setDuplicateAllowsReadAccess:(BOOL)arg1 ;
-(PHAssetResourceCreationOptions *)creationOptions;
-(void)setCreationOptions:(PHAssetResourceCreationOptions *)arg1 ;
-(BOOL)isLibraryAssetResource;
@end

