
(cl:in-package :asdf)

(defsystem "hoverTracker-msg"
  :depends-on (:roslisp-msg-protocol :roslisp-utils :std_msgs-msg
)
  :components ((:file "_package")
    (:file "Tag" :depends-on ("_package_Tag"))
    (:file "_package_Tag" :depends-on ("_package"))
    (:file "TagArray" :depends-on ("_package_TagArray"))
    (:file "_package_TagArray" :depends-on ("_package"))
  ))