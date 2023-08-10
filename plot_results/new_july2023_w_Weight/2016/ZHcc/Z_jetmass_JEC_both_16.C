void Z_jetmass_JEC_both_16()
{
//=========Macro generated from canvas: Z_jetmass_JEC_both_16/Z_jetmass_JEC_both_16
//=========  (Thu Aug 10 12:25:23 2023) by ROOT version 6.14/09
   TCanvas *Z_jetmass_JEC_both_16 = new TCanvas("Z_jetmass_JEC_both_16", "Z_jetmass_JEC_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_jetmass_JEC_both_16->SetHighLightColor(2);
   Z_jetmass_JEC_both_16->Range(-60,-0.00291896,340,0.02627064);
   Z_jetmass_JEC_both_16->SetFillColor(0);
   Z_jetmass_JEC_both_16->SetBorderMode(0);
   Z_jetmass_JEC_both_16->SetBorderSize(2);
   Z_jetmass_JEC_both_16->SetLeftMargin(0.15);
   Z_jetmass_JEC_both_16->SetFrameBorderMode(0);
   Z_jetmass_JEC_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Z_jetmass_JEC_stack_11 = new TH1D("VbbHcc_both_Z_jetmass_JEC_stack_11","",150,0,300);
   VbbHcc_both_Z_jetmass_JEC_stack_11->SetBinContent(4,0.005994455);
   VbbHcc_both_Z_jetmass_JEC_stack_11->SetBinContent(5,0.02037942);
   VbbHcc_both_Z_jetmass_JEC_stack_11->SetBinContent(6,0.02223969);
   VbbHcc_both_Z_jetmass_JEC_stack_11->SetBinContent(7,0.01764937);
   VbbHcc_both_Z_jetmass_JEC_stack_11->SetBinContent(8,0.01486356);
   VbbHcc_both_Z_jetmass_JEC_stack_11->SetBinContent(9,0.005755964);
   VbbHcc_both_Z_jetmass_JEC_stack_11->SetBinContent(11,0.006205154);
   VbbHcc_both_Z_jetmass_JEC_stack_11->SetBinContent(12,0.002909221);
   VbbHcc_both_Z_jetmass_JEC_stack_11->SetBinContent(14,0.003215698);
   VbbHcc_both_Z_jetmass_JEC_stack_11->SetBinContent(22,0.002928512);
   VbbHcc_both_Z_jetmass_JEC_stack_11->SetBinContent(36,0.002555119);
   VbbHcc_both_Z_jetmass_JEC_stack_11->SetBinError(4,0.004252372);
   VbbHcc_both_Z_jetmass_JEC_stack_11->SetBinError(5,0.007713825);
   VbbHcc_both_Z_jetmass_JEC_stack_11->SetBinError(6,0.007893795);
   VbbHcc_both_Z_jetmass_JEC_stack_11->SetBinError(7,0.007208601);
   VbbHcc_both_Z_jetmass_JEC_stack_11->SetBinError(8,0.006653606);
   VbbHcc_both_Z_jetmass_JEC_stack_11->SetBinError(9,0.00407097);
   VbbHcc_both_Z_jetmass_JEC_stack_11->SetBinError(11,0.004387828);
   VbbHcc_both_Z_jetmass_JEC_stack_11->SetBinError(12,0.002909221);
   VbbHcc_both_Z_jetmass_JEC_stack_11->SetBinError(14,0.003215698);
   VbbHcc_both_Z_jetmass_JEC_stack_11->SetBinError(22,0.002928512);
   VbbHcc_both_Z_jetmass_JEC_stack_11->SetBinError(36,0.002555119);
   VbbHcc_both_Z_jetmass_JEC_stack_11->SetEntries(36);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_Z_jetmass_JEC_stack_11->SetFillColor(ci);
   VbbHcc_both_Z_jetmass_JEC_stack_11->GetXaxis()->SetTitle("b-jet mass (w/ JEC) [GeV]");
   VbbHcc_both_Z_jetmass_JEC_stack_11->GetXaxis()->SetRange(1,150);
   VbbHcc_both_Z_jetmass_JEC_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_jetmass_JEC_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_jetmass_JEC_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_jetmass_JEC_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_jetmass_JEC_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_jetmass_JEC_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_jetmass_JEC_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_jetmass_JEC_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_jetmass_JEC_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_jetmass_JEC_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_jetmass_JEC_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_jetmass_JEC_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_jetmass_JEC_stack_11->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Z_jetmass_JEC_stack_11->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_jetmass_JEC_both_16->Modified();
   Z_jetmass_JEC_both_16->cd();
   Z_jetmass_JEC_both_16->SetSelected(Z_jetmass_JEC_both_16);
}
