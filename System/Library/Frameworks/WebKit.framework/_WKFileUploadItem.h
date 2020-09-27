/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:14:06 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <WebKit/WebKit-Structs.h>
@class NSURL;

@interface _WKFileUploadItem : NSObject {

	RetainPtr<NSURL>* _fileURL;

}

@property (getter=isVideo,nonatomic,readonly) BOOL video; 
@property (nonatomic,readonly) NSURL * fileURL; 
@property (nonatomic,readonly) RetainPtr<UIImage>* displayImage; 
-(NSURL *)fileURL;
-(id)initWithFileURL:(id)arg1 ;
-(BOOL)isVideo;
-(RetainPtr<UIImage>*)displayImage;
@end

