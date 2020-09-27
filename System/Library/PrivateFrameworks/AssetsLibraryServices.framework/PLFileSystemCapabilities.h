/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:25 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSError, NSString;

@interface PLFileSystemCapabilities : NSObject {

	unsigned _interfacesCapabilities;
	unsigned _nativeCommonAttributes;
	char _fstypename[16];
	BOOL _isReadOnly;
	BOOL _isLocalVolume;
	BOOL _isInternalVolume;
	BOOL _isRootFileSystemVolume;
	BOOL _isValid;
	NSError* _error;

}

@property (readonly) BOOL isReadOnly;                                                       //@synthesize isReadOnly=_isReadOnly - In the implementation block
@property (readonly) BOOL isCloneCapable; 
@property (readonly) BOOL isWholeFileLockCapable; 
@property (readonly) BOOL isGenCountCapable; 
@property (readonly) BOOL isSecludeRenameCapable; 
@property (readonly) BOOL isLocalVolume;                                                    //@synthesize isLocalVolume=_isLocalVolume - In the implementation block
@property (readonly) BOOL isInternalVolume;                                                 //@synthesize isInternalVolume=_isInternalVolume - In the implementation block
@property (readonly) BOOL isRootFileSystemVolume;                                           //@synthesize isRootFileSystemVolume=_isRootFileSystemVolume - In the implementation block
@property (readonly) NSString * fileSystemTypeName; 
@property (readonly) BOOL isNetworkVolume; 
@property (readonly) BOOL isCentralizedCacheDeleteCapable; 
@property (getter=isWholeFileLockCapable,readonly) BOOL isCoreDataCapable; 
@property (getter=isGenCountCapable,readonly) BOOL isCloudPhotoLibraryCapable; 
@property (readonly) BOOL isValid;                                                          //@synthesize isValid=_isValid - In the implementation block
@property (readonly) NSError * error;                                                       //@synthesize error=_error - In the implementation block
+(id)capabilitiesWithURL:(id)arg1 ;
+(unsigned long long)minimumAvailableBytesRequiredForLibraryOpen;
-(id)description;
-(BOOL)isValid;
-(NSError *)error;
-(BOOL)isReadOnly;
-(BOOL)isCloneCapable;
-(BOOL)isWholeFileLockCapable;
-(BOOL)isGenCountCapable;
-(BOOL)isSecludeRenameCapable;
-(NSString *)fileSystemTypeName;
-(BOOL)isNetworkVolume;
-(BOOL)isCentralizedCacheDeleteCapable;
-(BOOL)determineCapabilitiesWithURL:(id)arg1 error:(id*)arg2 ;
-(BOOL)isLocalVolume;
-(BOOL)isInternalVolume;
-(BOOL)isRootFileSystemVolume;
@end

