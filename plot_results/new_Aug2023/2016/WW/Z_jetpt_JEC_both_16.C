void Z_jetpt_JEC_both_16()
{
//=========Macro generated from canvas: Z_jetpt_JEC_both_16/Z_jetpt_JEC_both_16
//=========  (Tue Aug 22 09:23:40 2023) by ROOT version 6.14/09
   TCanvas *Z_jetpt_JEC_both_16 = new TCanvas("Z_jetpt_JEC_both_16", "Z_jetpt_JEC_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_jetpt_JEC_both_16->SetHighLightColor(2);
   Z_jetpt_JEC_both_16->Range(-60,-0.0175278,340,0.1577502);
   Z_jetpt_JEC_both_16->SetFillColor(0);
   Z_jetpt_JEC_both_16->SetBorderMode(0);
   Z_jetpt_JEC_both_16->SetBorderSize(2);
   Z_jetpt_JEC_both_16->SetLeftMargin(0.15);
   Z_jetpt_JEC_both_16->SetFrameBorderMode(0);
   Z_jetpt_JEC_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Z_jetpt_JEC_stack_6 = new TH1D("VbbHcc_both_Z_jetpt_JEC_stack_6","",150,0,300);
   VbbHcc_both_Z_jetpt_JEC_stack_6->SetBinContent(22,0.1297649);
   VbbHcc_both_Z_jetpt_JEC_stack_6->SetBinContent(24,0.1173155);
   VbbHcc_both_Z_jetpt_JEC_stack_6->SetBinContent(27,0.1142782);
   VbbHcc_both_Z_jetpt_JEC_stack_6->SetBinContent(31,0.1243737);
   VbbHcc_both_Z_jetpt_JEC_stack_6->SetBinContent(41,0.1152503);
   VbbHcc_both_Z_jetpt_JEC_stack_6->SetBinContent(47,0.1234178);
   VbbHcc_both_Z_jetpt_JEC_stack_6->SetBinContent(53,0.1294336);
   VbbHcc_both_Z_jetpt_JEC_stack_6->SetBinContent(61,0.1335451);
   VbbHcc_both_Z_jetpt_JEC_stack_6->SetBinContent(128,0.1195687);
   VbbHcc_both_Z_jetpt_JEC_stack_6->SetBinContent(150,0.07803031);
   VbbHcc_both_Z_jetpt_JEC_stack_6->SetBinError(22,0.1297649);
   VbbHcc_both_Z_jetpt_JEC_stack_6->SetBinError(24,0.1173155);
   VbbHcc_both_Z_jetpt_JEC_stack_6->SetBinError(27,0.1142782);
   VbbHcc_both_Z_jetpt_JEC_stack_6->SetBinError(31,0.1243737);
   VbbHcc_both_Z_jetpt_JEC_stack_6->SetBinError(41,0.1152503);
   VbbHcc_both_Z_jetpt_JEC_stack_6->SetBinError(47,0.1234178);
   VbbHcc_both_Z_jetpt_JEC_stack_6->SetBinError(53,0.1294336);
   VbbHcc_both_Z_jetpt_JEC_stack_6->SetBinError(61,0.1335451);
   VbbHcc_both_Z_jetpt_JEC_stack_6->SetBinError(128,0.1195687);
   VbbHcc_both_Z_jetpt_JEC_stack_6->SetBinError(150,0.07803031);
   VbbHcc_both_Z_jetpt_JEC_stack_6->SetEntries(10);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#9933ff");
   VbbHcc_both_Z_jetpt_JEC_stack_6->SetFillColor(ci);
   VbbHcc_both_Z_jetpt_JEC_stack_6->GetXaxis()->SetTitle("b-jet p_{T} (w/ JEC) [GeV]");
   VbbHcc_both_Z_jetpt_JEC_stack_6->GetXaxis()->SetRange(1,150);
   VbbHcc_both_Z_jetpt_JEC_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_jetpt_JEC_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_jetpt_JEC_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_jetpt_JEC_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_jetpt_JEC_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_jetpt_JEC_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_jetpt_JEC_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_jetpt_JEC_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_jetpt_JEC_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_jetpt_JEC_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_jetpt_JEC_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_jetpt_JEC_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_jetpt_JEC_stack_6->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Z_jetpt_JEC_stack_6->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_jetpt_JEC_both_16->Modified();
   Z_jetpt_JEC_both_16->cd();
   Z_jetpt_JEC_both_16->SetSelected(Z_jetpt_JEC_both_16);
}
