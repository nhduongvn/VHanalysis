void Z_dR_both_16()
{
//=========Macro generated from canvas: Z_dR_both_16/Z_dR_both_16
//=========  (Thu Aug 10 12:24:46 2023) by ROOT version 6.14/09
   TCanvas *Z_dR_both_16 = new TCanvas("Z_dR_both_16", "Z_dR_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_dR_both_16->SetHighLightColor(2);
   Z_dR_both_16->Range(-1.2,-0.002630909,6.8,0.02367818);
   Z_dR_both_16->SetFillColor(0);
   Z_dR_both_16->SetBorderMode(0);
   Z_dR_both_16->SetBorderSize(2);
   Z_dR_both_16->SetLeftMargin(0.15);
   Z_dR_both_16->SetFrameBorderMode(0);
   Z_dR_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Z_dR_stack_11 = new TH1D("VbbHcc_both_Z_dR_stack_11","",30,0,6);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(3,0.009018446);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(4,0.02004502);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(5,0.005486175);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(6,0.01495984);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(9,0.002888021);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(10,0.002933425);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(11,0.008758287);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(13,0.003216674);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(14,0.003079495);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(15,0.002873204);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(16,0.002909221);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(17,0.006080649);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(18,0.005721983);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(19,0.002555119);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(23,0.002248041);
   VbbHcc_both_Z_dR_stack_11->SetBinContent(29,0.01192257);
   VbbHcc_both_Z_dR_stack_11->SetBinError(3,0.005213382);
   VbbHcc_both_Z_dR_stack_11->SetBinError(4,0.007579579);
   VbbHcc_both_Z_dR_stack_11->SetBinError(5,0.003895547);
   VbbHcc_both_Z_dR_stack_11->SetBinError(6,0.006700023);
   VbbHcc_both_Z_dR_stack_11->SetBinError(9,0.002888021);
   VbbHcc_both_Z_dR_stack_11->SetBinError(10,0.002933425);
   VbbHcc_both_Z_dR_stack_11->SetBinError(11,0.005058272);
   VbbHcc_both_Z_dR_stack_11->SetBinError(13,0.003216674);
   VbbHcc_both_Z_dR_stack_11->SetBinError(14,0.003079495);
   VbbHcc_both_Z_dR_stack_11->SetBinError(15,0.002873204);
   VbbHcc_both_Z_dR_stack_11->SetBinError(16,0.002909221);
   VbbHcc_both_Z_dR_stack_11->SetBinError(17,0.004307006);
   VbbHcc_both_Z_dR_stack_11->SetBinError(18,0.004048752);
   VbbHcc_both_Z_dR_stack_11->SetBinError(19,0.002555119);
   VbbHcc_both_Z_dR_stack_11->SetBinError(23,0.002248041);
   VbbHcc_both_Z_dR_stack_11->SetBinError(29,0.005963741);
   VbbHcc_both_Z_dR_stack_11->SetEntries(36);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_Z_dR_stack_11->SetFillColor(ci);
   VbbHcc_both_Z_dR_stack_11->GetXaxis()->SetTitle("#DeltaR(b,b)");
   VbbHcc_both_Z_dR_stack_11->GetXaxis()->SetRange(1,30);
   VbbHcc_both_Z_dR_stack_11->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_11->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_11->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_11->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_11->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_11->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_11->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_11->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_dR_stack_11->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_11->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_dR_stack_11->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_dR_stack_11->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_dR_stack_11->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Z_dR_stack_11->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_dR_both_16->Modified();
   Z_dR_both_16->cd();
   Z_dR_both_16->SetSelected(Z_dR_both_16);
}
