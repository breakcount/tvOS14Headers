/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 11:56:20 PM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/RenderBox.framework/RenderBox
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RenderBox/RenderBox-Structs.h>
#import <libobjc.A.dylib/NSXMLParserDelegate.h>

@protocol RBXMLParserDelegate;
@class RBDisplayList, NSError, NSString;

@interface RBXMLParser : NSObject <NSXMLParserDelegate> {

	id<RBXMLParserDelegate> _delegate;
	objc_ptr<NSXMLParser *> _xml_parser;
	objc_ptr<NSURL *> _base_url;
	objc_ptr<RBDisplayList *> _list;
	objc_ptr<RBShape *> _shape;
	objc_ptr<RBFill *> _fill;
	objc_ptr<NSError *> _error;
	State* _state;
	basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > _characters;
	cf_ptr<__CFDictionary *>* _image_cache;
	cf_ptr<__CFDictionary *>* _font_cache;
	BOOL _aborted;
	BOOL _linear_colors;
	int _colorMode;
	CGSize _size;
	SCD_Struct_RB31 _backgroundColor;

}

@property (nonatomic,readonly) RBDisplayList * displayList; 
@property (nonatomic,readonly) CGSize size;                                  //@synthesize size=_size - In the implementation block
@property (nonatomic,readonly) SCD_Struct_RB31 backgroundColor;              //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,readonly) int colorMode;                                //@synthesize colorMode=_colorMode - In the implementation block
@property (nonatomic,readonly) NSError * error; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)parserWithDelegate:(id)arg1 contentsOfURL:(id)arg2 options:(id)arg3 ;
-(void)dealloc;
-(CGSize)size;
-(NSError *)error;
-(void)parser:(id)arg1 foundCharacters:(id)arg2 ;
-(void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 ;
-(void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5 ;
-(BOOL)parse;
-(void)parserDidStartDocument:(id)arg1 ;
-(void)parserDidEndDocument:(id)arg1 ;
-(int)colorMode;
-(SCD_Struct_RB31)backgroundColor;
-(id)initWithDelegate:(id)arg1 contentsOfURL:(id)arg2 options:(id)arg3 ;
-(RBDisplayList *)displayList;
-(void)abortParsing:(id)arg1 ;
@end

