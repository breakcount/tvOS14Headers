/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:02:40 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSBundle, NSDictionary;

@interface NSManagedObjectModelBundle : NSObject {

	NSBundle* _bundle;
	NSDictionary* _versionInfoDictionary;

}
-(void)dealloc;
-(id)initWithPath:(id)arg1 ;
-(id)bundle;
-(id)_modelForVersionHashes:(id)arg1 ;
-(id)optimizedVersionURL;
-(id)currentVersionURL;
-(id)versionInfoDictionary;
-(id)versionHashInfo;
-(id)currentVersion;
-(id)urlForModelVersionWithName:(id)arg1 ;
-(id)modelVersions;
-(id)_modelForVersionHashes:(id)arg1 inStyle:(unsigned long long)arg2 ;
@end

