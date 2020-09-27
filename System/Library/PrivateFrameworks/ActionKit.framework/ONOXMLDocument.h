/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:38:55 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ActionKit/ActionKit-Structs.h>
#import <libobjc.A.dylib/ONOSearching.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class ONOXMLElement, NSString, NSNumberFormatter, NSDateFormatter, NSMutableDictionary;

@interface ONOXMLDocument : NSObject <ONOSearching, NSCopying, NSCoding> {

	ONOXMLElement* _rootElement;
	xmlDoc* _xmlDocument;
	NSString* _version;
	unsigned long long _stringEncoding;
	NSNumberFormatter* _numberFormatter;
	NSDateFormatter* _dateFormatter;
	NSMutableDictionary* _defaultNamespaces;

}

@property (assign,nonatomic) xmlDoc* xmlDocument;                                  //@synthesize xmlDocument=_xmlDocument - In the implementation block
@property (nonatomic,retain) ONOXMLElement * rootElement;                          //@synthesize rootElement=_rootElement - In the implementation block
@property (nonatomic,copy) NSString * version;                                     //@synthesize version=_version - In the implementation block
@property (assign,nonatomic) unsigned long long stringEncoding;                    //@synthesize stringEncoding=_stringEncoding - In the implementation block
@property (nonatomic,retain) NSNumberFormatter * numberFormatter;                  //@synthesize numberFormatter=_numberFormatter - In the implementation block
@property (nonatomic,retain) NSDateFormatter * dateFormatter;                      //@synthesize dateFormatter=_dateFormatter - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * defaultNamespaces;              //@synthesize defaultNamespaces=_defaultNamespaces - In the implementation block
+(id)XMLDocumentWithString:(id)arg1 encoding:(unsigned long long)arg2 error:(id*)arg3 ;
+(id)XMLDocumentWithData:(id)arg1 error:(id*)arg2 ;
+(id)HTMLDocumentWithString:(id)arg1 encoding:(unsigned long long)arg2 error:(id*)arg3 ;
+(id)HTMLDocumentWithData:(id)arg1 error:(id*)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)version;
-(NSNumberFormatter *)numberFormatter;
-(void)setNumberFormatter:(NSNumberFormatter *)arg1 ;
-(void)setVersion:(NSString *)arg1 ;
-(NSDateFormatter *)dateFormatter;
-(void)setDateFormatter:(NSDateFormatter *)arg1 ;
-(unsigned long long)stringEncoding;
-(ONOXMLElement *)rootElement;
-(id)initWithDocument:(xmlDoc*)arg1 ;
-(void)setRootElement:(ONOXMLElement *)arg1 ;
-(xmlDoc*)xmlDocument;
-(void)setXmlDocument:(xmlDoc*)arg1 ;
-(id)elementWithNode:(xmlNode*)arg1 ;
-(id)XPath:(id)arg1 ;
-(id)functionResultByEvaluatingXPath:(id)arg1 ;
-(void)enumerateElementsWithXPath:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)enumerateElementsWithXPath:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)firstChildWithXPath:(id)arg1 ;
-(id)CSS:(id)arg1 ;
-(void)enumerateElementsWithCSS:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)enumerateElementsWithCSS:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)firstChildWithCSS:(id)arg1 ;
-(void)definePrefix:(id)arg1 forDefaultNamespace:(id)arg2 ;
-(id)enumeratorWithXPathObject:(xmlXPathObject*)arg1 ;
-(void)setStringEncoding:(unsigned long long)arg1 ;
-(NSMutableDictionary *)defaultNamespaces;
-(void)setDefaultNamespaces:(NSMutableDictionary *)arg1 ;
@end

