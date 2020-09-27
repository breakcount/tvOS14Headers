/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:04 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <libobjc.A.dylib/WKObject.h>

@class _WKWebsiteDataSize, NSString, NSSet;

@interface WKWebsiteDataRecord : NSObject <WKObject> {

	ObjectStorage<API::WebsiteDataRecord> _websiteDataRecord;

}

@property (nonatomic,readonly) _WKWebsiteDataSize * _dataSize; 
@property (nonatomic,copy,readonly) NSString * displayName; 
@property (nonatomic,copy,readonly) NSSet * dataTypes; 
@property (readonly) Object* _apiObject; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(void)dealloc;
-(NSString *)displayName;
-(_WKWebsiteDataSize *)_dataSize;
-(Object*)_apiObject;
-(NSSet *)dataTypes;
-(id)_originsStrings;
@end

