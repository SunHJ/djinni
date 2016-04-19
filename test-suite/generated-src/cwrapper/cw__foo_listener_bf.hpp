// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from foo_listener_bf.djinni

#pragma once

#include <atomic>
#include <experimental/optional>
#include "foo_listener_bf.hpp"
#ifdef __cplusplus
extern "C" {
#endif

#include "cw__foo_listener_bf.h"

#ifdef __cplusplus
}
#endif
struct DjinniWrapperFooListenerBf final {
    DjinniWrapperFooListenerBf(std::shared_ptr<::testsuite::FooListenerBf>wo): wrapped_obj(wo) {};

    static std::shared_ptr<::testsuite::FooListenerBf> get(djinni::Handle<DjinniWrapperFooListenerBf> dw);
    static djinni::Handle<DjinniWrapperFooListenerBf> wrap(std::shared_ptr<::testsuite::FooListenerBf> obj);

    const std::shared_ptr<::testsuite::FooListenerBf> wrapped_obj;
    std::atomic<size_t> ref_count {1};
};

class FooListenerBfPythonProxy final : public ::testsuite::FooListenerBf {
    public:
        explicit FooListenerBfPythonProxy(DjinniObjectHandle * c_ptr);
        ~FooListenerBfPythonProxy();
        DjinniObjectHandle * get_m_py_obj_handle();

        std::string on_string_change(const std::string & private_string);

        std::string get_string();

        void set_listener_bf(const std::shared_ptr<::testsuite::FooListenerBf> & listener);

        std::shared_ptr<::testsuite::FooListenerBf> get_listener_bf();

        void set_binary(const std::vector<uint8_t> & b);

        std::vector<uint8_t> get_binary();

        std::shared_ptr<::testsuite::FooListenerBf> send_return(const std::shared_ptr<::testsuite::FooListenerBf> & fl_bf);

        void delete_fl_in_fl();

    private:
        DjinniObjectHandle * m_py_obj_handle;
};
