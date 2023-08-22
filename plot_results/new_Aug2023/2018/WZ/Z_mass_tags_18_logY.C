void Z_mass_tags_18_logY()
{
//=========Macro generated from canvas: Z_mass_tags_18/Z_mass_tags_18
//=========  (Tue Aug 22 09:15:51 2023) by ROOT version 6.14/09
   TCanvas *Z_mass_tags_18 = new TCanvas("Z_mass_tags_18", "Z_mass_tags_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_mass_tags_18->SetHighLightColor(2);
   Z_mass_tags_18->Range(-80,-0.9443876,453.3333,0.7456163);
   Z_mass_tags_18->SetFillColor(0);
   Z_mass_tags_18->SetBorderMode(0);
   Z_mass_tags_18->SetBorderSize(2);
   Z_mass_tags_18->SetLogy();
   Z_mass_tags_18->SetLeftMargin(0.15);
   Z_mass_tags_18->SetFrameBorderMode(0);
   Z_mass_tags_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Z_mass_stack_7 = new TH1D("VbbHcc_tags_Z_mass_stack_7","",40,0,400);
   VbbHcc_tags_Z_mass_stack_7->SetBinContent(6,0.4346562);
   VbbHcc_tags_Z_mass_stack_7->SetBinContent(7,0.5493952);
   VbbHcc_tags_Z_mass_stack_7->SetBinContent(8,1.062223);
   VbbHcc_tags_Z_mass_stack_7->SetBinContent(9,1.990981);
   VbbHcc_tags_Z_mass_stack_7->SetBinContent(10,1.668775);
   VbbHcc_tags_Z_mass_stack_7->SetBinContent(11,0.3443727);
   VbbHcc_tags_Z_mass_stack_7->SetBinContent(12,0.4671207);
   VbbHcc_tags_Z_mass_stack_7->SetBinContent(13,0.3477974);
   VbbHcc_tags_Z_mass_stack_7->SetBinContent(15,0.7853639);
   VbbHcc_tags_Z_mass_stack_7->SetBinContent(16,0.9636619);
   VbbHcc_tags_Z_mass_stack_7->SetBinContent(22,0.6124482);
   VbbHcc_tags_Z_mass_stack_7->SetBinContent(27,0.4722652);
   VbbHcc_tags_Z_mass_stack_7->SetBinContent(34,0.3690103);
   VbbHcc_tags_Z_mass_stack_7->SetBinContent(35,0.3443088);
   VbbHcc_tags_Z_mass_stack_7->SetBinContent(39,0.3354616);
   VbbHcc_tags_Z_mass_stack_7->SetBinContent(41,2.540912);
   VbbHcc_tags_Z_mass_stack_7->SetBinError(6,0.4346562);
   VbbHcc_tags_Z_mass_stack_7->SetBinError(7,0.5493952);
   VbbHcc_tags_Z_mass_stack_7->SetBinError(8,0.7151957);
   VbbHcc_tags_Z_mass_stack_7->SetBinError(9,0.9132128);
   VbbHcc_tags_Z_mass_stack_7->SetBinError(10,0.8389854);
   VbbHcc_tags_Z_mass_stack_7->SetBinError(11,0.3443727);
   VbbHcc_tags_Z_mass_stack_7->SetBinError(12,0.4671207);
   VbbHcc_tags_Z_mass_stack_7->SetBinError(13,0.3477974);
   VbbHcc_tags_Z_mass_stack_7->SetBinError(15,0.558946);
   VbbHcc_tags_Z_mass_stack_7->SetBinError(16,0.9636619);
   VbbHcc_tags_Z_mass_stack_7->SetBinError(22,0.4364139);
   VbbHcc_tags_Z_mass_stack_7->SetBinError(27,0.4722652);
   VbbHcc_tags_Z_mass_stack_7->SetBinError(34,0.3690103);
   VbbHcc_tags_Z_mass_stack_7->SetBinError(35,0.3443088);
   VbbHcc_tags_Z_mass_stack_7->SetBinError(39,0.3354616);
   VbbHcc_tags_Z_mass_stack_7->SetBinError(41,1.044988);
   VbbHcc_tags_Z_mass_stack_7->SetEntries(32);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#3399ff");
   VbbHcc_tags_Z_mass_stack_7->SetFillColor(ci);
   VbbHcc_tags_Z_mass_stack_7->GetXaxis()->SetTitle("M_{Z} [GeV]");
   VbbHcc_tags_Z_mass_stack_7->GetXaxis()->SetRange(1,40);
   VbbHcc_tags_Z_mass_stack_7->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass_stack_7->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_mass_stack_7->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_mass_stack_7->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_mass_stack_7->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass_stack_7->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_mass_stack_7->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_mass_stack_7->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_Z_mass_stack_7->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_mass_stack_7->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_mass_stack_7->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_Z_mass_stack_7->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_Z_mass_stack_7->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_mass_stack_7->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_mass_tags_18->Modified();
   Z_mass_tags_18->cd();
   Z_mass_tags_18->SetSelected(Z_mass_tags_18);
}
