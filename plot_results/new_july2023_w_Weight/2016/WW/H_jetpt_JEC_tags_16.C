void H_jetpt_JEC_tags_16()
{
//=========Macro generated from canvas: H_jetpt_JEC_tags_16/H_jetpt_JEC_tags_16
//=========  (Thu Aug 10 12:23:40 2023) by ROOT version 6.14/09
   TCanvas *H_jetpt_JEC_tags_16 = new TCanvas("H_jetpt_JEC_tags_16", "H_jetpt_JEC_tags_16",0,0,600,600);
   gStyle->SetOptStat(0);
   H_jetpt_JEC_tags_16->SetHighLightColor(2);
   H_jetpt_JEC_tags_16->Range(-60,-0.03694247,340,0.3324822);
   H_jetpt_JEC_tags_16->SetFillColor(0);
   H_jetpt_JEC_tags_16->SetBorderMode(0);
   H_jetpt_JEC_tags_16->SetBorderSize(2);
   H_jetpt_JEC_tags_16->SetLeftMargin(0.15);
   H_jetpt_JEC_tags_16->SetFrameBorderMode(0);
   H_jetpt_JEC_tags_16->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_H_jetpt_JEC_stack_6 = new TH1D("VbbHcc_tags_H_jetpt_JEC_stack_6","",150,0,300);
   VbbHcc_tags_H_jetpt_JEC_stack_6->SetBinContent(29,0.1535887);
   VbbHcc_tags_H_jetpt_JEC_stack_6->SetBinContent(41,0.1333553);
   VbbHcc_tags_H_jetpt_JEC_stack_6->SetBinContent(44,0.1344897);
   VbbHcc_tags_H_jetpt_JEC_stack_6->SetBinContent(55,0.1440206);
   VbbHcc_tags_H_jetpt_JEC_stack_6->SetBinContent(57,0.2814664);
   VbbHcc_tags_H_jetpt_JEC_stack_6->SetBinContent(58,0.1587488);
   VbbHcc_tags_H_jetpt_JEC_stack_6->SetBinContent(65,0.08576627);
   VbbHcc_tags_H_jetpt_JEC_stack_6->SetBinContent(71,0.139529);
   VbbHcc_tags_H_jetpt_JEC_stack_6->SetBinContent(78,0.1622891);
   VbbHcc_tags_H_jetpt_JEC_stack_6->SetBinContent(151,0.1552273);
   VbbHcc_tags_H_jetpt_JEC_stack_6->SetBinError(29,0.1535887);
   VbbHcc_tags_H_jetpt_JEC_stack_6->SetBinError(41,0.1333553);
   VbbHcc_tags_H_jetpt_JEC_stack_6->SetBinError(44,0.1344897);
   VbbHcc_tags_H_jetpt_JEC_stack_6->SetBinError(55,0.1440206);
   VbbHcc_tags_H_jetpt_JEC_stack_6->SetBinError(57,0.1991006);
   VbbHcc_tags_H_jetpt_JEC_stack_6->SetBinError(58,0.1587488);
   VbbHcc_tags_H_jetpt_JEC_stack_6->SetBinError(65,0.08576627);
   VbbHcc_tags_H_jetpt_JEC_stack_6->SetBinError(71,0.139529);
   VbbHcc_tags_H_jetpt_JEC_stack_6->SetBinError(78,0.1622891);
   VbbHcc_tags_H_jetpt_JEC_stack_6->SetBinError(151,0.1552273);
   VbbHcc_tags_H_jetpt_JEC_stack_6->SetEntries(11);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#9933ff");
   VbbHcc_tags_H_jetpt_JEC_stack_6->SetFillColor(ci);
   VbbHcc_tags_H_jetpt_JEC_stack_6->GetXaxis()->SetTitle("c-jet p_{T} (w/ JEC) [GeV]");
   VbbHcc_tags_H_jetpt_JEC_stack_6->GetXaxis()->SetRange(1,150);
   VbbHcc_tags_H_jetpt_JEC_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_H_jetpt_JEC_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_jetpt_JEC_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_jetpt_JEC_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_H_jetpt_JEC_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_H_jetpt_JEC_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_jetpt_JEC_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_jetpt_JEC_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_tags_H_jetpt_JEC_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_H_jetpt_JEC_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_H_jetpt_JEC_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_tags_H_jetpt_JEC_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_tags_H_jetpt_JEC_stack_6->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_H_jetpt_JEC_stack_6->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_jetpt_JEC_tags_16->Modified();
   H_jetpt_JEC_tags_16->cd();
   H_jetpt_JEC_tags_16->SetSelected(H_jetpt_JEC_tags_16);
}
