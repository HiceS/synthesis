namespace InventorRobotExporter.GUI.Editors.JointEditor
{
    partial class JointEditorForm
    {
        /// <summary>
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            System.ComponentModel.ComponentResourceManager resources = new System.ComponentModel.ComponentResourceManager(typeof(JointEditorForm));
            this.tableLayoutPanel1 = new System.Windows.Forms.TableLayoutPanel();
            this.DefinePartsLayout = new System.Windows.Forms.TableLayoutPanel();
            this.label1 = new System.Windows.Forms.Label();
            this.cancelButton = new System.Windows.Forms.Button();
            this.okButton = new System.Windows.Forms.Button();
            this.DefinePartsLayout.SuspendLayout();
            this.SuspendLayout();
            // 
            // tableLayoutPanel1
            // 
            this.tableLayoutPanel1.AutoSize = true;
            this.tableLayoutPanel1.ColumnCount = 2;
            this.tableLayoutPanel1.ColumnStyles.Add(new System.Windows.Forms.ColumnStyle(System.Windows.Forms.SizeType.Percent, 50F));
            this.tableLayoutPanel1.ColumnStyles.Add(new System.Windows.Forms.ColumnStyle(System.Windows.Forms.SizeType.Percent, 50F));
            this.tableLayoutPanel1.Location = new System.Drawing.Point(23, 19);
            this.tableLayoutPanel1.Name = "tableLayoutPanel1";
            this.tableLayoutPanel1.RowCount = 2;
            this.tableLayoutPanel1.RowStyles.Add(new System.Windows.Forms.RowStyle(System.Windows.Forms.SizeType.Percent, 50F));
            this.tableLayoutPanel1.RowStyles.Add(new System.Windows.Forms.RowStyle(System.Windows.Forms.SizeType.Percent, 50F));
            this.tableLayoutPanel1.Size = new System.Drawing.Size(0, 0);
            this.tableLayoutPanel1.TabIndex = 0;
            // 
            // DefinePartsLayout
            // 
            this.DefinePartsLayout.AutoScroll = true;
            this.DefinePartsLayout.BackColor = System.Drawing.SystemColors.ControlLight;
            this.DefinePartsLayout.ColumnCount = 1;
            this.DefinePartsLayout.ColumnStyles.Add(new System.Windows.Forms.ColumnStyle());
            this.DefinePartsLayout.Controls.Add(this.tableLayoutPanel1, 0, 0);
            this.DefinePartsLayout.Dock = System.Windows.Forms.DockStyle.Top;
            this.DefinePartsLayout.Location = new System.Drawing.Point(0, 0);
            this.DefinePartsLayout.Margin = new System.Windows.Forms.Padding(0);
            this.DefinePartsLayout.Name = "DefinePartsLayout";
            this.DefinePartsLayout.Padding = new System.Windows.Forms.Padding(20, 16, 22, 20);
            this.DefinePartsLayout.RowCount = 2;
            this.DefinePartsLayout.RowStyles.Add(new System.Windows.Forms.RowStyle());
            this.DefinePartsLayout.RowStyles.Add(new System.Windows.Forms.RowStyle(System.Windows.Forms.SizeType.Absolute, 20F));
            this.DefinePartsLayout.RowStyles.Add(new System.Windows.Forms.RowStyle(System.Windows.Forms.SizeType.Absolute, 20F));
            this.DefinePartsLayout.Size = new System.Drawing.Size(558, 755);
            this.DefinePartsLayout.TabIndex = 3;
            // 
            // label1
            // 
            this.label1.Anchor = ((System.Windows.Forms.AnchorStyles)((System.Windows.Forms.AnchorStyles.Bottom | System.Windows.Forms.AnchorStyles.Left)));
            this.label1.Location = new System.Drawing.Point(7, 763);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(290, 40);
            this.label1.TabIndex = 6;
            this.label1.Text = "Use this menu to configure each joint \r\nyou want to control in Synthesis\r\n\r\n";
            // 
            // cancelButton
            // 
            this.cancelButton.DialogResult = System.Windows.Forms.DialogResult.Cancel;
            this.cancelButton.Location = new System.Drawing.Point(425, 765);
            this.cancelButton.Margin = new System.Windows.Forms.Padding(3, 2, 3, 2);
            this.cancelButton.Name = "cancelButton";
            this.cancelButton.Size = new System.Drawing.Size(121, 27);
            this.cancelButton.TabIndex = 8;
            this.cancelButton.Text = "Cancel";
            this.cancelButton.UseVisualStyleBackColor = true;
            this.cancelButton.Click += new System.EventHandler(this.CancelButton_Click);
            // 
            // okButton
            // 
            this.okButton.Location = new System.Drawing.Point(298, 765);
            this.okButton.Margin = new System.Windows.Forms.Padding(3, 2, 3, 2);
            this.okButton.Name = "okButton";
            this.okButton.Size = new System.Drawing.Size(121, 27);
            this.okButton.TabIndex = 7;
            this.okButton.Text = "OK";
            this.okButton.UseVisualStyleBackColor = false;
            this.okButton.Click += new System.EventHandler(this.OkButton_Click);
            // 
            // JointEditorForm
            // 
            this.AcceptButton = this.okButton;
            this.BackColor = System.Drawing.SystemColors.ControlLight;
            this.CancelButton = this.cancelButton;
            this.ClientSize = new System.Drawing.Size(558, 803);
            this.Controls.Add(this.cancelButton);
            this.Controls.Add(this.okButton);
            this.Controls.Add(this.label1);
            this.Controls.Add(this.DefinePartsLayout);
            this.FormBorderStyle = System.Windows.Forms.FormBorderStyle.FixedDialog;
            this.Icon = ((System.Drawing.Icon)(resources.GetObject("$this.Icon")));
            this.MaximizeBox = false;
            this.MaximumSize = new System.Drawing.Size(1000, 850);
            this.MinimizeBox = false;
            this.MinimumSize = new System.Drawing.Size(0, 850);
            this.Name = "JointEditorForm";
            this.Text = "Joint Editor";
            this.TopMost = true;
            this.DefinePartsLayout.ResumeLayout(false);
            this.DefinePartsLayout.PerformLayout();
            this.ResumeLayout(false);

        }

        #endregion

        private System.Windows.Forms.TableLayoutPanel tableLayoutPanel1;
        private System.Windows.Forms.TableLayoutPanel DefinePartsLayout;
        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.Button cancelButton;
        private System.Windows.Forms.Button okButton;
    }
}