/*
* This header is generated by classdump-dyld 1.0
* on Saturday, September 26, 2020 at 1:36:13 AM Mountain Standard Time
* Operating System: Version 14.0 (Build 18J386)
* Image Source: /System/Library/PrivateFrameworks/SAML.framework/SAML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SAML/SAML-Structs.h>
@class NSMutableDictionary, NSMutableArray, NSString, NSArray, XMLWrapperQuery, NSDictionary;

@interface XMLWrapperElement : NSObject {

	xmlNode* _xmlNode;
	BOOL _ownsXMLNode;
	NSMutableDictionary* _attributes;
	NSMutableDictionary* _namespaces;
	NSMutableArray* _elements;
	NSString* _tagName;
	NSString* _textContent;
	NSArray* _childElementSequence;
	XMLWrapperQuery* _query;

}

@property (nonatomic,retain) NSString * tagName;                          //@synthesize tagName=_tagName - In the implementation block
@property (nonatomic,retain) XMLWrapperQuery * query;                     //@synthesize query=_query - In the implementation block
@property (nonatomic,retain) NSString * textContent;                      //@synthesize textContent=_textContent - In the implementation block
@property (nonatomic,readonly) NSDictionary * attributes; 
@property (nonatomic,readonly) NSDictionary * namespaces;                 //@synthesize namespaces=_namespaces - In the implementation block
@property (nonatomic,readonly) NSArray * elements; 
@property (nonatomic,retain) NSArray * childElementSequence;              //@synthesize childElementSequence=_childElementSequence - In the implementation block
-(void)dealloc;
-(XMLWrapperQuery *)query;
-(NSDictionary *)attributes;
-(NSArray *)elements;
-(void)setQuery:(XMLWrapperQuery *)arg1 ;
-(void)setElements:(NSArray *)arg1 ;
-(NSString *)textContent;
-(void)setTextContent:(NSString *)arg1 ;
-(id)getElementsByTagName:(id)arg1 ;
-(NSString *)tagName;
-(id)xmlString:(id*)arg1 ;
-(id)initWithTagName:(id)arg1 error:(id*)arg2 ;
-(void)setNamespace:(id)arg1 ;
-(id)attributeWithName:(id)arg1 ;
-(id)firstElementByTagName:(id)arg1 ;
-(void)setChildElementSequence:(NSArray *)arg1 ;
-(void)setAttributeWithName:(id)arg1 value:(id)arg2 ;
-(void)replaceChildElement:(id)arg1 newElement:(id)arg2 ;
-(void)addChildElement:(id)arg1 before:(id)arg2 ;
-(void)addChildElement:(id)arg1 ;
-(void)setTagName:(NSString *)arg1 ;
-(id)initWithNode:(xmlNode*)arg1 doc:(xmlDoc*)arg2 query:(id)arg3 error:(id*)arg4 ;
-(xmlNode*)xmlNode:(id*)arg1 ;
-(id)getResultsByXpathQuery:(id)arg1 ;
-(NSArray *)childElementSequence;
-(void)reorderChildElements;
-(void)removeChildElement:(id)arg1 ;
-(id)firstResultByXpathQuery:(id)arg1 ;
-(NSDictionary *)namespaces;
@end

