; Auto-generated. Do not edit!


(cl:in-package serial_device-srv)


;//! \htmlinclude TaskCallSerial-request.msg.html

(cl:defclass <TaskCallSerial-request> (roslisp-msg-protocol:ros-message)
  ((task_id
    :reader task_id
    :initarg :task_id
    :type cl:string
    :initform "")
   (cmd
    :reader cmd
    :initarg :cmd
    :type cl:string
    :initform ""))
)

(cl:defclass TaskCallSerial-request (<TaskCallSerial-request>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <TaskCallSerial-request>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'TaskCallSerial-request)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name serial_device-srv:<TaskCallSerial-request> is deprecated: use serial_device-srv:TaskCallSerial-request instead.")))

(cl:ensure-generic-function 'task_id-val :lambda-list '(m))
(cl:defmethod task_id-val ((m <TaskCallSerial-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader serial_device-srv:task_id-val is deprecated.  Use serial_device-srv:task_id instead.")
  (task_id m))

(cl:ensure-generic-function 'cmd-val :lambda-list '(m))
(cl:defmethod cmd-val ((m <TaskCallSerial-request>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader serial_device-srv:cmd-val is deprecated.  Use serial_device-srv:cmd instead.")
  (cmd m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <TaskCallSerial-request>) ostream)
  "Serializes a message object of type '<TaskCallSerial-request>"
  (cl:let ((__ros_str_len (cl:length (cl:slot-value msg 'task_id))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_str_len) ostream))
  (cl:map cl:nil #'(cl:lambda (c) (cl:write-byte (cl:char-code c) ostream)) (cl:slot-value msg 'task_id))
  (cl:let ((__ros_str_len (cl:length (cl:slot-value msg 'cmd))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_str_len) ostream))
  (cl:map cl:nil #'(cl:lambda (c) (cl:write-byte (cl:char-code c) ostream)) (cl:slot-value msg 'cmd))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <TaskCallSerial-request>) istream)
  "Deserializes a message object of type '<TaskCallSerial-request>"
    (cl:let ((__ros_str_len 0))
      (cl:setf (cl:ldb (cl:byte 8 0) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'task_id) (cl:make-string __ros_str_len))
      (cl:dotimes (__ros_str_idx __ros_str_len msg)
        (cl:setf (cl:char (cl:slot-value msg 'task_id) __ros_str_idx) (cl:code-char (cl:read-byte istream)))))
    (cl:let ((__ros_str_len 0))
      (cl:setf (cl:ldb (cl:byte 8 0) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'cmd) (cl:make-string __ros_str_len))
      (cl:dotimes (__ros_str_idx __ros_str_len msg)
        (cl:setf (cl:char (cl:slot-value msg 'cmd) __ros_str_idx) (cl:code-char (cl:read-byte istream)))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<TaskCallSerial-request>)))
  "Returns string type for a service object of type '<TaskCallSerial-request>"
  "serial_device/TaskCallSerialRequest")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'TaskCallSerial-request)))
  "Returns string type for a service object of type 'TaskCallSerial-request"
  "serial_device/TaskCallSerialRequest")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<TaskCallSerial-request>)))
  "Returns md5sum for a message object of type '<TaskCallSerial-request>"
  "d091270bbc490f371f9855f018f74a07")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'TaskCallSerial-request)))
  "Returns md5sum for a message object of type 'TaskCallSerial-request"
  "d091270bbc490f371f9855f018f74a07")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<TaskCallSerial-request>)))
  "Returns full string definition for message of type '<TaskCallSerial-request>"
  (cl:format cl:nil "~%~%string task_id~%~%~%string cmd~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'TaskCallSerial-request)))
  "Returns full string definition for message of type 'TaskCallSerial-request"
  (cl:format cl:nil "~%~%string task_id~%~%~%string cmd~%~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <TaskCallSerial-request>))
  (cl:+ 0
     4 (cl:length (cl:slot-value msg 'task_id))
     4 (cl:length (cl:slot-value msg 'cmd))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <TaskCallSerial-request>))
  "Converts a ROS message object to a list"
  (cl:list 'TaskCallSerial-request
    (cl:cons ':task_id (task_id msg))
    (cl:cons ':cmd (cmd msg))
))
;//! \htmlinclude TaskCallSerial-response.msg.html

(cl:defclass <TaskCallSerial-response> (roslisp-msg-protocol:ros-message)
  ((success
    :reader success
    :initarg :success
    :type cl:boolean
    :initform cl:nil)
   (message
    :reader message
    :initarg :message
    :type cl:string
    :initform ""))
)

(cl:defclass TaskCallSerial-response (<TaskCallSerial-response>)
  ())

(cl:defmethod cl:initialize-instance :after ((m <TaskCallSerial-response>) cl:&rest args)
  (cl:declare (cl:ignorable args))
  (cl:unless (cl:typep m 'TaskCallSerial-response)
    (roslisp-msg-protocol:msg-deprecation-warning "using old message class name serial_device-srv:<TaskCallSerial-response> is deprecated: use serial_device-srv:TaskCallSerial-response instead.")))

(cl:ensure-generic-function 'success-val :lambda-list '(m))
(cl:defmethod success-val ((m <TaskCallSerial-response>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader serial_device-srv:success-val is deprecated.  Use serial_device-srv:success instead.")
  (success m))

(cl:ensure-generic-function 'message-val :lambda-list '(m))
(cl:defmethod message-val ((m <TaskCallSerial-response>))
  (roslisp-msg-protocol:msg-deprecation-warning "Using old-style slot reader serial_device-srv:message-val is deprecated.  Use serial_device-srv:message instead.")
  (message m))
(cl:defmethod roslisp-msg-protocol:serialize ((msg <TaskCallSerial-response>) ostream)
  "Serializes a message object of type '<TaskCallSerial-response>"
  (cl:write-byte (cl:ldb (cl:byte 8 0) (cl:if (cl:slot-value msg 'success) 1 0)) ostream)
  (cl:let ((__ros_str_len (cl:length (cl:slot-value msg 'message))))
    (cl:write-byte (cl:ldb (cl:byte 8 0) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 8) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 16) __ros_str_len) ostream)
    (cl:write-byte (cl:ldb (cl:byte 8 24) __ros_str_len) ostream))
  (cl:map cl:nil #'(cl:lambda (c) (cl:write-byte (cl:char-code c) ostream)) (cl:slot-value msg 'message))
)
(cl:defmethod roslisp-msg-protocol:deserialize ((msg <TaskCallSerial-response>) istream)
  "Deserializes a message object of type '<TaskCallSerial-response>"
    (cl:setf (cl:slot-value msg 'success) (cl:not (cl:zerop (cl:read-byte istream))))
    (cl:let ((__ros_str_len 0))
      (cl:setf (cl:ldb (cl:byte 8 0) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 8) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 16) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:ldb (cl:byte 8 24) __ros_str_len) (cl:read-byte istream))
      (cl:setf (cl:slot-value msg 'message) (cl:make-string __ros_str_len))
      (cl:dotimes (__ros_str_idx __ros_str_len msg)
        (cl:setf (cl:char (cl:slot-value msg 'message) __ros_str_idx) (cl:code-char (cl:read-byte istream)))))
  msg
)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql '<TaskCallSerial-response>)))
  "Returns string type for a service object of type '<TaskCallSerial-response>"
  "serial_device/TaskCallSerialResponse")
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'TaskCallSerial-response)))
  "Returns string type for a service object of type 'TaskCallSerial-response"
  "serial_device/TaskCallSerialResponse")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql '<TaskCallSerial-response>)))
  "Returns md5sum for a message object of type '<TaskCallSerial-response>"
  "d091270bbc490f371f9855f018f74a07")
(cl:defmethod roslisp-msg-protocol:md5sum ((type (cl:eql 'TaskCallSerial-response)))
  "Returns md5sum for a message object of type 'TaskCallSerial-response"
  "d091270bbc490f371f9855f018f74a07")
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql '<TaskCallSerial-response>)))
  "Returns full string definition for message of type '<TaskCallSerial-response>"
  (cl:format cl:nil "~%~%bool success~%~%~%string message~%~%~%"))
(cl:defmethod roslisp-msg-protocol:message-definition ((type (cl:eql 'TaskCallSerial-response)))
  "Returns full string definition for message of type 'TaskCallSerial-response"
  (cl:format cl:nil "~%~%bool success~%~%~%string message~%~%~%"))
(cl:defmethod roslisp-msg-protocol:serialization-length ((msg <TaskCallSerial-response>))
  (cl:+ 0
     1
     4 (cl:length (cl:slot-value msg 'message))
))
(cl:defmethod roslisp-msg-protocol:ros-message-to-list ((msg <TaskCallSerial-response>))
  "Converts a ROS message object to a list"
  (cl:list 'TaskCallSerial-response
    (cl:cons ':success (success msg))
    (cl:cons ':message (message msg))
))
(cl:defmethod roslisp-msg-protocol:service-request-type ((msg (cl:eql 'TaskCallSerial)))
  'TaskCallSerial-request)
(cl:defmethod roslisp-msg-protocol:service-response-type ((msg (cl:eql 'TaskCallSerial)))
  'TaskCallSerial-response)
(cl:defmethod roslisp-msg-protocol:ros-datatype ((msg (cl:eql 'TaskCallSerial)))
  "Returns string type for a service object of type '<TaskCallSerial>"
  "serial_device/TaskCallSerial")