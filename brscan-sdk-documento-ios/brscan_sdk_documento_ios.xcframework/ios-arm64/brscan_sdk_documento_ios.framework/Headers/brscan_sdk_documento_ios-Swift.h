// Generated by Apple Swift version 5.5.1 (swiftlang-1300.0.31.4 clang-1300.0.29.6)
#ifndef BRSCAN_SDK_DOCUMENTO_IOS_SWIFT_H
#define BRSCAN_SDK_DOCUMENTO_IOS_SWIFT_H
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <Foundation/Foundation.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(ns_consumed)
# define SWIFT_RELEASES_ARGUMENT __attribute__((ns_consumed))
#else
# define SWIFT_RELEASES_ARGUMENT
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif
#if !defined(SWIFT_RESILIENT_CLASS)
# if __has_attribute(objc_class_stub)
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME) __attribute__((objc_class_stub))
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_class_stub)) SWIFT_CLASS_NAMED(SWIFT_NAME)
# else
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME)
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) SWIFT_CLASS_NAMED(SWIFT_NAME)
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility)
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_WEAK_IMPORT)
# define SWIFT_WEAK_IMPORT __attribute__((weak_import))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if !defined(IBSegueAction)
# define IBSegueAction
#endif
#if __has_feature(modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import AVFoundation;
@import CoreGraphics;
@import CoreLocation;
@import CoreMedia;
@import Foundation;
@import ObjectiveC;
@import UIKit;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="brscan_sdk_documento_ios",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif



@class NSNumber;
@class NSCoder;
@class NSString;
@class NSBundle;

SWIFT_CLASS("_TtC24brscan_sdk_documento_ios30CapturaDocumentoViewController")
@interface CapturaDocumentoViewController : UIViewController
@property (nonatomic, readonly) BOOL prefersStatusBarHidden;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder SWIFT_UNAVAILABLE;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)animated;
- (void)viewWillDisappear:(BOOL)animated;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(BOOL)animated;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil SWIFT_UNAVAILABLE;
@end

@class AVCaptureOutput;
@class AVCaptureConnection;

@interface CapturaDocumentoViewController (SWIFT_EXTENSION(brscan_sdk_documento_ios)) <AVCaptureVideoDataOutputSampleBufferDelegate>
- (void)captureOutput:(AVCaptureOutput * _Nonnull)output didOutputSampleBuffer:(CMSampleBufferRef _Nonnull)sampleBuffer fromConnection:(AVCaptureConnection * _Nonnull)connection;
@end






@class CLLocationManager;
@class CLLocation;

@interface CapturaDocumentoViewController (SWIFT_EXTENSION(brscan_sdk_documento_ios)) <CLLocationManagerDelegate>
- (void)locationManager:(CLLocationManager * _Nonnull)manager didUpdateLocations:(NSArray<CLLocation *> * _Nonnull)locations;
- (void)locationManagerDidChangeAuthorization:(CLLocationManager * _Nonnull)manager;
@end





@protocol CapturarDocumentoViewControllerDelegate;
@class ConfiguracaoTextoDocumento;

SWIFT_CLASS("_TtC24brscan_sdk_documento_ios31CapturarDocumentoViewController")
@interface CapturarDocumentoViewController : UIViewController
@property (nonatomic, strong) id <CapturarDocumentoViewControllerDelegate> _Nullable delegate;
- (nonnull instancetype)initWithChave:(NSString * _Nonnull)chave cropDocumento:(BOOL)cropDocumento validaDocumento:(BOOL)validaDocumento wizard:(BOOL)wizard aceitaAB:(BOOL)aceitaAB tiposDocumentosAceitos:(NSArray<NSString *> * _Nonnull)tiposDocumentosAceitos segurancaExtraSslPinning:(BOOL)segurancaExtraSslPinning segurancaExtraRootCheck:(BOOL)segurancaExtraRootCheck timeoutCapturaManual:(double)timeoutCapturaManual telaSelecaoDocumento:(BOOL)telaSelecaoDocumento resolucao:(NSString * _Nonnull)resolucao ladoDocumentoAceito:(NSString * _Nonnull)ladoDocumentoAceito tipoRetorno:(NSString * _Nonnull)tipoRetorno telaPreview:(BOOL)telaPreview scoreMinimo:(NSInteger)scoreMinimo customizacaoTexto:(ConfiguracaoTextoDocumento * _Nonnull)customizacaoTexto retornarErros:(BOOL)retornarErros verificarLuminosidade:(BOOL)verificarLuminosidade segurancaExtraEmulatorCheck:(BOOL)segurancaExtraEmulatorCheck tokenTentativa:(NSInteger)tokenTentativa orientacaoCaptura:(NSString * _Nonnull)orientacaoCaptura capturaManual:(BOOL)capturaManual tentativasDeCaptura:(NSInteger)tentativasDeCaptura telaConfirmacaoDeSaida:(BOOL)telaConfirmacaoDeSaida spoof:(BOOL)spoof OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder SWIFT_UNAVAILABLE;
- (void)viewDidLoad;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil SWIFT_UNAVAILABLE;
@end



SWIFT_PROTOCOL("_TtP24brscan_sdk_documento_ios39CapturarDocumentoViewControllerDelegate_")
@protocol CapturarDocumentoViewControllerDelegate
- (void)sucesso:(NSArray<NSDictionary<NSString *, id> *> * _Nonnull)documento;
- (void)erro:(NSDictionary<NSString *, id> * _Nonnull)erro;
- (void)documentCallbackListener:(NSDictionary<NSString *, id> * _Nonnull)documentCallback;
@end


SWIFT_CLASS("_TtC24brscan_sdk_documento_ios26ConfiguracaoTextoDocumento")
@interface ConfiguracaoTextoDocumento : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithBrscan_documento_erro_digital_document_tamanho_excedido:(NSString * _Nonnull)brscan_documento_erro_digital_document_tamanho_excedido brscan_documento_uploading_digital_file:(NSString * _Nonnull)brscan_documento_uploading_digital_file brscan_documento_uploading_digital_file_preparation:(NSString * _Nonnull)brscan_documento_uploading_digital_file_preparation brscan_documento_loading:(NSString * _Nonnull)brscan_documento_loading brscan_documento_capture_image_loading_subtitle:(NSString * _Nonnull)brscan_documento_capture_image_loading_subtitle brscan_documento_capture_loading_upload_validation_image_subtitle:(NSString * _Nonnull)brscan_documento_capture_loading_upload_validation_image_subtitle brscan_documento_captura_estado_aguardando_documento:(NSString * _Nonnull)brscan_documento_captura_estado_aguardando_documento brscan_documento_captura_estado_encaixe_documento:(NSString * _Nonnull)brscan_documento_captura_estado_encaixe_documento brscan_documento_captura_estado_centralize_documento:(NSString * _Nonnull)brscan_documento_captura_estado_centralize_documento brscan_documento_captura_estado_aproxime_documento:(NSString * _Nonnull)brscan_documento_captura_estado_aproxime_documento brscan_documento_captura_estado_afaste_documento:(NSString * _Nonnull)brscan_documento_captura_estado_afaste_documento brscan_documento_captura_estado_aguarde:(NSString * _Nonnull)brscan_documento_captura_estado_aguarde brscan_documento_captura_frente_rg:(NSString * _Nonnull)brscan_documento_captura_frente_rg brscan_documento_captura_verso_rg:(NSString * _Nonnull)brscan_documento_captura_verso_rg brscan_documento_captura_rg_aberto:(NSString * _Nonnull)brscan_documento_captura_rg_aberto brscan_documento_captura_frente_cnh:(NSString * _Nonnull)brscan_documento_captura_frente_cnh brscan_documento_captura_verso_cnh:(NSString * _Nonnull)brscan_documento_captura_verso_cnh brscan_documento_captura_cnh_aberta:(NSString * _Nonnull)brscan_documento_captura_cnh_aberta brscan_documento_captura_frente_documento:(NSString * _Nonnull)brscan_documento_captura_frente_documento brscan_documento_captura_verso_documento:(NSString * _Nonnull)brscan_documento_captura_verso_documento brscan_documento_captura_documento_aberto:(NSString * _Nonnull)brscan_documento_captura_documento_aberto brscan_documento_erro_conexao:(NSString * _Nonnull)brscan_documento_erro_conexao brscan_documento_erro_ao_validar_chave:(NSString * _Nonnull)brscan_documento_erro_ao_validar_chave brscan_documento_erro_baixa_luminosidade:(NSString * _Nonnull)brscan_documento_erro_baixa_luminosidade brscan_documento_erro_device_rooted:(NSString * _Nonnull)brscan_documento_erro_device_rooted brscan_documento_erro_usuario_cancelou_acao:(NSString * _Nonnull)brscan_documento_erro_usuario_cancelou_acao brscan_documento_erro_processo:(NSString * _Nonnull)brscan_documento_erro_processo brscan_documento_erro_no_servidor:(NSString * _Nonnull)brscan_documento_erro_no_servidor brscan_documento_erro_ao_validar_imagem:(NSString * _Nonnull)brscan_documento_erro_ao_validar_imagem brscan_documento_erro_documento_nao_permitido:(NSString * _Nonnull)brscan_documento_erro_documento_nao_permitido brscan_documento_erro_nenhum_documento_encontrado:(NSString * _Nonnull)brscan_documento_erro_nenhum_documento_encontrado brscan_documento_erro_documento_diferente:(NSString * _Nonnull)brscan_documento_erro_documento_diferente brscan_documento_erro_token_expired:(NSString * _Nonnull)brscan_documento_erro_token_expired brscan_documento_erro_camera_indisponvel:(NSString * _Nonnull)brscan_documento_erro_camera_indisponvel brscan_documento_erro_lado_diferente_A:(NSString * _Nonnull)brscan_documento_erro_lado_diferente_A brscan_documento_erro_lado_diferente_B:(NSString * _Nonnull)brscan_documento_erro_lado_diferente_B brscan_documento_erro_acesso_negado_title:(NSString * _Nonnull)brscan_documento_erro_acesso_negado_title brscan_documento_erro_captura_camera_subtitle:(NSString * _Nonnull)brscan_documento_erro_captura_camera_subtitle brscan_documento_captura_camera_botao_de_acao:(NSString * _Nonnull)brscan_documento_captura_camera_botao_de_acao brscan_documento_erro_captura_title:(NSString * _Nonnull)brscan_documento_erro_captura_title brscan_documento_erro_captura_subtitle:(NSString * _Nonnull)brscan_documento_erro_captura_subtitle brscan_documento_erro_captura_botao_tentar_novamente:(NSString * _Nonnull)brscan_documento_erro_captura_botao_tentar_novamente brscan_documento_erro_captura_botao_sair_do_processo:(NSString * _Nonnull)brscan_documento_erro_captura_botao_sair_do_processo brscan_confirma_documento_frente_title:(NSString * _Nonnull)brscan_confirma_documento_frente_title brscan_confirma_documento_frente_subtitle:(NSString * _Nonnull)brscan_confirma_documento_frente_subtitle brscan_confirma_documento_verso_title:(NSString * _Nonnull)brscan_confirma_documento_verso_title brscan_confirma_documento_verso_subtitle:(NSString * _Nonnull)brscan_confirma_documento_verso_subtitle brscan_confirma_documento_ambos_title:(NSString * _Nonnull)brscan_confirma_documento_ambos_title brscan_confirma_documento_ambos_subtitle:(NSString * _Nonnull)brscan_confirma_documento_ambos_subtitle brscan_confirma_documento_continuar_botao_de_acao:(NSString * _Nonnull)brscan_confirma_documento_continuar_botao_de_acao brscan_confirma_documento_finalizar_botao_de_acao:(NSString * _Nonnull)brscan_confirma_documento_finalizar_botao_de_acao brscan_confirma_documento_repetir_botao_de_acao:(NSString * _Nonnull)brscan_confirma_documento_repetir_botao_de_acao brscan_documento_proximo_processso_frente_title:(NSString * _Nonnull)brscan_documento_proximo_processso_frente_title brscan_documento_proximo_processso_verso_title:(NSString * _Nonnull)brscan_documento_proximo_processso_verso_title brscan_documento_proximo_processso_botao_de_acao:(NSString * _Nonnull)brscan_documento_proximo_processso_botao_de_acao brscan_documento_erro_device_emulated:(NSString * _Nonnull)brscan_documento_erro_device_emulated brscan_documento_sucesso_foto_valida:(NSString * _Nonnull)brscan_documento_sucesso_foto_valida brscan_documento_erro_tentativas_permitidas:(NSString * _Nonnull)brscan_documento_erro_tentativas_permitidas brscan_documento_selecao_documentos_outros:(NSString * _Nonnull)brscan_documento_selecao_documentos_outros brscan_documento_erro_digital_document:(NSString * _Nonnull)brscan_documento_erro_digital_document brscan_documento_erro_journey_empty_protocols:(NSString * _Nonnull)brscan_documento_erro_journey_empty_protocols brscan_documento_selecao_cnh:(NSString * _Nonnull)brscan_documento_selecao_cnh brscan_documento_selecao_cnh_digital:(NSString * _Nonnull)brscan_documento_selecao_cnh_digital brscan_documento_selecao_documentos_nacionais:(NSString * _Nonnull)brscan_documento_selecao_documentos_nacionais brscan_documento_selecao_documentos_estrangeiros:(NSString * _Nonnull)brscan_documento_selecao_documentos_estrangeiros brscan_documento_captura_fotografe_documento:(NSString * _Nonnull)brscan_documento_captura_fotografe_documento brscan_documento_captura_vire_documento:(NSString * _Nonnull)brscan_documento_captura_vire_documento brscan_documento_sucesso_botao_finalizar:(NSString * _Nonnull)brscan_documento_sucesso_botao_finalizar brscan_documento_instruction_digital_document_title:(NSString * _Nonnull)brscan_documento_instruction_digital_document_title brscan_documento_instruction_digital_document_open_cdt:(NSString * _Nonnull)brscan_documento_instruction_digital_document_open_cdt brscan_documento_instruction_digital_document_export_cnh:(NSString * _Nonnull)brscan_documento_instruction_digital_document_export_cnh brscan_documento_instruction_digital_document_confirm_pdf:(NSString * _Nonnull)brscan_documento_instruction_digital_document_confirm_pdf brscan_documento_instruction_digital_document_download_cdt:(NSString * _Nonnull)brscan_documento_instruction_digital_document_download_cdt brscan_documento_instruction_digital_document_return_document:(NSString * _Nonnull)brscan_documento_instruction_digital_document_return_document brscan_documento_instruction_digital_document_select_pdf_to_send:(NSString * _Nonnull)brscan_documento_instruction_digital_document_select_pdf_to_send brscan_documento_digital_cnh_title:(NSString * _Nonnull)brscan_documento_digital_cnh_title brscan_documento_digital_cnh_export_subtitle:(NSString * _Nonnull)brscan_documento_digital_cnh_export_subtitle brscan_documento_digital_cnh_export_check_subtitle:(NSString * _Nonnull)brscan_documento_digital_cnh_export_check_subtitle brscan_documento_digital_send_file:(NSString * _Nonnull)brscan_documento_digital_send_file brscan_documento_digital_cnh_back_instruction:(NSString * _Nonnull)brscan_documento_digital_cnh_back_instruction brscan_documento_digital_cnh_file_size_error:(NSString * _Nonnull)brscan_documento_digital_cnh_file_size_error brscan_documento_digital_replace_file:(NSString * _Nonnull)brscan_documento_digital_replace_file brscan_documento_continue_sending_document_screen_title:(NSString * _Nonnull)brscan_documento_continue_sending_document_screen_title brscan_documento_continue_sending_document_title:(NSString * _Nonnull)brscan_documento_continue_sending_document_title brscan_documento_continue_sending_document_subtitle:(NSString * _Nonnull)brscan_documento_continue_sending_document_subtitle brscan_documento_continue_sending_document_btn_positive:(NSString * _Nonnull)brscan_documento_continue_sending_document_btn_positive brscan_documento_success_screen_title:(NSString * _Nonnull)brscan_documento_success_screen_title brscan_documento_erro_spoof:(NSString * _Nonnull)brscan_documento_erro_spoof brscan_documento_erro_opened_document:(NSString * _Nonnull)brscan_documento_erro_opened_document brscan_documento_erro_closed_document:(NSString * _Nonnull)brscan_documento_erro_closed_document OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC24brscan_sdk_documento_ios14DocumentoModel")
@interface DocumentoModel : NSObject
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_PROTOCOL("_TtP24brscan_sdk_documento_ios31FinalizaJornadaCallbackDelegate_")
@protocol FinalizaJornadaCallbackDelegate
- (void)sucessoFinalizarWithResultadoSucesso:(NSDictionary<NSString *, id> * _Nonnull)resultadoSucesso;
- (void)erroFinalizarWithResultadoErro:(NSDictionary<NSString *, id> * _Nonnull)resultadoErro;
@end


SWIFT_CLASS("_TtC24brscan_sdk_documento_ios18FinalizaJornadaSDK")
@interface FinalizaJornadaSDK : NSObject
@property (nonatomic, strong) id <FinalizaJornadaCallbackDelegate> _Nullable delegate;
- (nonnull instancetype)initWithChave:(NSString * _Nonnull)chave segurancaExtraSslPinning:(BOOL)segurancaExtraSslPinning OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
+ (nonnull instancetype)new SWIFT_UNAVAILABLE_MSG("-init is unavailable");
@end


SWIFT_CLASS("_TtC24brscan_sdk_documento_ios21OvalGraficOverlayView")
@interface OvalGraficOverlayView : UIView
- (nonnull instancetype)initWithFrame:(CGRect)frame SWIFT_UNAVAILABLE;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder SWIFT_UNAVAILABLE;
@end


SWIFT_CLASS("_TtC24brscan_sdk_documento_ios36PermanecerCapturaVersoViewController")
@interface PermanecerCapturaVersoViewController : UIViewController
@property (nonatomic, readonly) BOOL prefersStatusBarHidden;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder SWIFT_UNAVAILABLE;
- (void)viewDidLoad;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil SWIFT_UNAVAILABLE;
@end





@class UIEvent;

@interface UIButton (SWIFT_EXTENSION(brscan_sdk_documento_ios))
- (BOOL)pointInside:(CGPoint)point withEvent:(UIEvent * _Nullable)event SWIFT_WARN_UNUSED_RESULT;
@end





















#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
#endif
