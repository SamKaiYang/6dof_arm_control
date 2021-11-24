classdef robot_define_Fext < matlab.System
    % untitled2 Add summary here
    %
    % This template includes the minimum set of functions required
    % to define a System object with discrete state.

    % Public, tunable properties
    properties(Nontunable)
        
    %TreeStruct - Struct from which wrapper SysObj builds the TreeInternal
    TreeStruct = 0;
    
    %TreeInternal - A robotics.manip.internal.RigidBodyTree instantiated from TreeStruct
    TreeInternal
    end

    % Pre-computed constants
    properties(Access = private)

    end
    methods
        function obj = robot_define_Fext(varargin)
            %ForwardDynamicsBlock Constructor for Forward Dynamics block system object
            
            % Support name-value pair arguments when constructing object
            setProperties(obj,nargin,varargin{:})
        end
    end
    methods(Access = protected)
        function setupImpl(obj)
            % Perform one-time calculations, such as computing constants
            % [obj.robot,obj.info] = loadrobot('universalUR5','DataFormat','column','Gravity',[0 0 -9.81]);
            obj.TreeInternal = robotics.manip.internal.RigidBodyTree(obj.TreeStruct.NumBodies, obj.TreeStruct);
        end
        function fext  = stepImpl(obj,q)
            %EXTERNAL_FORCE Summary of this function goes here
            %   Detailed explanation goes here
            force = [0 0 0 0 0 50];
            fext = externalForce(obj.TreeInternal,'tool0',force,q);
            % fext = externalForce
        end

        function resetImpl(~)
            % Initialize / reset discrete-state properties
        end

        function validateInputsImpl(obj, q)
            %validateInputsImpl Validate inputs to the step method at initialization
            
            validateattributes(q,{'single','double'},{'vector'},'ForwardDynamicsBlock','Config');
        end

         function flag = isInputSizeMutableImpl(~,~)
            %isInputSizeMutableImpl Specify input size mutability
            %   Return false if input size cannot change
            %   between calls to the System object
            flag = false;
        end

        function flag = isInputDataTypeMutableImpl(~,~)
            %isInputDataTypeMutableImpl Specify input type mutability
            %   Return false if input data type cannot change
            %   between calls to the System object
            flag = false;
        end

        function num = getNumOutputsImpl(obj)
            %getNumOutputsImpl Define total number of outputs
            num = 1;
        end
        
%         function out = getOutputSizeImpl(obj)
%             %getOutputSizeImpl Return size for each output port
%             out = [obj.TreeStruct.VelocityNumber 1];
%         end

        function out = getOutputDataTypeImpl(obj)
            %getOutputDataTypeImpl Return data type for each output port
            out = propagatedInputDataType(obj,1);
        end

        function out = isOutputComplexImpl(obj)
            %isOutputComplexImpl Return true for each output port with complex data
            out = false;
        end

        function out = isOutputFixedSizeImpl(obj)
            %isOutputFixedSizeImpl Return true for each output port with fixed size
            out = true;
        end
    end

    methods(Access = protected, Static)
        function header = getHeaderImpl
            %getHeaderImpl Define header panel for System block dialog
            header = matlab.system.display.Header(mfilename("class"));
        end

        function group = getPropertyGroupsImpl
            %getPropertyGroupsImpl Define property section(s) for System block dialog
            mainGroup = matlab.system.display.SectionGroup(...
                'Title','Initial conditions', ...
                'PropertyList',{'TreeStruct'});
            
            group = mainGroup;
        end

        function flag = showSimulateUsingImpl
            %showSimulateUsingImpl Return false if simulation mode hidden in System block dialog
            flag = true;
        end
    end
end
