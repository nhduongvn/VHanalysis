void Z_jetpt_noJEC_both_16_logY()
{
//=========Macro generated from canvas: Z_jetpt_noJEC_both_16/Z_jetpt_noJEC_both_16
//=========  (Tue Aug 22 09:19:04 2023) by ROOT version 6.14/09
   TCanvas *Z_jetpt_noJEC_both_16 = new TCanvas("Z_jetpt_noJEC_both_16", "Z_jetpt_noJEC_both_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_jetpt_noJEC_both_16->SetHighLightColor(2);
   Z_jetpt_noJEC_both_16->Range(-60,-1.542989,340,-0.2007617);
   Z_jetpt_noJEC_both_16->SetFillColor(0);
   Z_jetpt_noJEC_both_16->SetBorderMode(0);
   Z_jetpt_noJEC_both_16->SetBorderSize(2);
   Z_jetpt_noJEC_both_16->SetLogy();
   Z_jetpt_noJEC_both_16->SetLeftMargin(0.15);
   Z_jetpt_noJEC_both_16->SetFrameBorderMode(0);
   Z_jetpt_noJEC_both_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_Z_jetpt_noJEC_stack_6 = new TH1D("VbbHcc_both_Z_jetpt_noJEC_stack_6","",150,0,300);
   VbbHcc_both_Z_jetpt_noJEC_stack_6->SetBinContent(24,0.2440432);
   VbbHcc_both_Z_jetpt_noJEC_stack_6->SetBinContent(26,0.2416892);
   VbbHcc_both_Z_jetpt_noJEC_stack_6->SetBinContent(38,0.1152503);
   VbbHcc_both_Z_jetpt_noJEC_stack_6->SetBinContent(47,0.1234178);
   VbbHcc_both_Z_jetpt_noJEC_stack_6->SetBinContent(52,0.1294336);
   VbbHcc_both_Z_jetpt_noJEC_stack_6->SetBinContent(60,0.1335451);
   VbbHcc_both_Z_jetpt_noJEC_stack_6->SetBinContent(126,0.1195687);
   VbbHcc_both_Z_jetpt_noJEC_stack_6->SetBinContent(150,0.07803031);
   VbbHcc_both_Z_jetpt_noJEC_stack_6->SetBinError(24,0.1729117);
   VbbHcc_both_Z_jetpt_noJEC_stack_6->SetBinError(26,0.1709729);
   VbbHcc_both_Z_jetpt_noJEC_stack_6->SetBinError(38,0.1152503);
   VbbHcc_both_Z_jetpt_noJEC_stack_6->SetBinError(47,0.1234178);
   VbbHcc_both_Z_jetpt_noJEC_stack_6->SetBinError(52,0.1294336);
   VbbHcc_both_Z_jetpt_noJEC_stack_6->SetBinError(60,0.1335451);
   VbbHcc_both_Z_jetpt_noJEC_stack_6->SetBinError(126,0.1195687);
   VbbHcc_both_Z_jetpt_noJEC_stack_6->SetBinError(150,0.07803031);
   VbbHcc_both_Z_jetpt_noJEC_stack_6->SetEntries(10);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#9933ff");
   VbbHcc_both_Z_jetpt_noJEC_stack_6->SetFillColor(ci);
   VbbHcc_both_Z_jetpt_noJEC_stack_6->GetXaxis()->SetTitle("b-jet p_{T} [GeV]");
   VbbHcc_both_Z_jetpt_noJEC_stack_6->GetXaxis()->SetRange(1,150);
   VbbHcc_both_Z_jetpt_noJEC_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Z_jetpt_noJEC_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_jetpt_noJEC_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_jetpt_noJEC_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Z_jetpt_noJEC_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Z_jetpt_noJEC_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_jetpt_noJEC_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_jetpt_noJEC_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_Z_jetpt_noJEC_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Z_jetpt_noJEC_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Z_jetpt_noJEC_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_Z_jetpt_noJEC_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_Z_jetpt_noJEC_stack_6->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_Z_jetpt_noJEC_stack_6->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_jetpt_noJEC_both_16->Modified();
   Z_jetpt_noJEC_both_16->cd();
   Z_jetpt_noJEC_both_16->SetSelected(Z_jetpt_noJEC_both_16);
}
