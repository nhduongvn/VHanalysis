void dPhi_HZ_both_16_logY()
{
//=========Macro generated from canvas: dPhi_HZ_both_16/dPhi_HZ_both_16
//=========  (Tue Aug 22 09:18:27 2023) by ROOT version 6.14/09
   TCanvas *dPhi_HZ_both_16 = new TCanvas("dPhi_HZ_both_16", "dPhi_HZ_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   dPhi_HZ_both_16->SetHighLightColor(2);
   dPhi_HZ_both_16->Range(-5.6,-1.51026,5.066667,-0.4953302);
   dPhi_HZ_both_16->SetFillColor(0);
   dPhi_HZ_both_16->SetBorderMode(0);
   dPhi_HZ_both_16->SetBorderSize(2);
   dPhi_HZ_both_16->SetLogy();
   dPhi_HZ_both_16->SetLeftMargin(0.15);
   dPhi_HZ_both_16->SetFrameBorderMode(0);
   dPhi_HZ_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_dPhi_HZ_stack_6 = new TH1D("VbbHcc_both_dPhi_HZ_stack_6","",480,-4,4);
   VbbHcc_both_dPhi_HZ_stack_6->SetBinContent(66,0.1152503);
   VbbHcc_both_dPhi_HZ_stack_6->SetBinContent(184,0.1294336);
   VbbHcc_both_dPhi_HZ_stack_6->SetBinContent(203,0.1173155);
   VbbHcc_both_dPhi_HZ_stack_6->SetBinContent(235,0.1335451);
   VbbHcc_both_dPhi_HZ_stack_6->SetBinContent(281,0.1234178);
   VbbHcc_both_dPhi_HZ_stack_6->SetBinContent(290,0.1297649);
   VbbHcc_both_dPhi_HZ_stack_6->SetBinContent(339,0.1195687);
   VbbHcc_both_dPhi_HZ_stack_6->SetBinContent(342,0.07803031);
   VbbHcc_both_dPhi_HZ_stack_6->SetBinContent(355,0.1142782);
   VbbHcc_both_dPhi_HZ_stack_6->SetBinContent(399,0.1243737);
   VbbHcc_both_dPhi_HZ_stack_6->SetBinError(66,0.1152503);
   VbbHcc_both_dPhi_HZ_stack_6->SetBinError(184,0.1294336);
   VbbHcc_both_dPhi_HZ_stack_6->SetBinError(203,0.1173155);
   VbbHcc_both_dPhi_HZ_stack_6->SetBinError(235,0.1335451);
   VbbHcc_both_dPhi_HZ_stack_6->SetBinError(281,0.1234178);
   VbbHcc_both_dPhi_HZ_stack_6->SetBinError(290,0.1297649);
   VbbHcc_both_dPhi_HZ_stack_6->SetBinError(339,0.1195687);
   VbbHcc_both_dPhi_HZ_stack_6->SetBinError(342,0.07803031);
   VbbHcc_both_dPhi_HZ_stack_6->SetBinError(355,0.1142782);
   VbbHcc_both_dPhi_HZ_stack_6->SetBinError(399,0.1243737);
   VbbHcc_both_dPhi_HZ_stack_6->SetEntries(10);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#9933ff");
   VbbHcc_both_dPhi_HZ_stack_6->SetFillColor(ci);
   VbbHcc_both_dPhi_HZ_stack_6->GetXaxis()->SetTitle("#Delta#Phi_{ZH}");
   VbbHcc_both_dPhi_HZ_stack_6->GetXaxis()->SetRange(1,480);
   VbbHcc_both_dPhi_HZ_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_dPhi_HZ_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_dPhi_HZ_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_dPhi_HZ_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_dPhi_HZ_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_dPhi_HZ_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_dPhi_HZ_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_dPhi_HZ_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_dPhi_HZ_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_dPhi_HZ_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_dPhi_HZ_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_dPhi_HZ_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_dPhi_HZ_stack_6->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_dPhi_HZ_stack_6->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   dPhi_HZ_both_16->Modified();
   dPhi_HZ_both_16->cd();
   dPhi_HZ_both_16->SetSelected(dPhi_HZ_both_16);
}
