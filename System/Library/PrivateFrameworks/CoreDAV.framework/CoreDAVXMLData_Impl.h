/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:13:15 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreDAV/CoreDAV-Structs.h>
@interface CoreDAVXMLData_Impl : NSObject {

	xmlTextWriterRef _writer;
	xmlDoc* _doc;

}

@property (assign) xmlTextWriterRef writer;              //@synthesize writer=_writer - In the implementation block
@property (assign) xmlDoc* doc;                          //@synthesize doc=_doc - In the implementation block
-(xmlDoc*)doc;
-(void)setDoc:(xmlDoc*)arg1 ;
-(xmlTextWriterRef)writer;
-(void)setWriter:(xmlTextWriterRef)arg1 ;
@end
