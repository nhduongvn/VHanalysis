void H_jetpt_JEC_both_17()
{
//=========Macro generated from canvas: H_jetpt_JEC_both_17/H_jetpt_JEC_both_17
//=========  (Tue Aug 22 09:23:24 2023) by ROOT version 6.14/09
   TCanvas *H_jetpt_JEC_both_17 = new TCanvas("H_jetpt_JEC_both_17", "H_jetpt_JEC_both_17",0,0,600,600);
   gStyle->SetOptStat(0);
   H_jetpt_JEC_both_17->SetHighLightColor(2);
   H_jetpt_JEC_both_17->Range(-60,-7207.426,340,64866.83);
   H_jetpt_JEC_both_17->SetFillColor(0);
   H_jetpt_JEC_both_17->SetBorderMode(0);
   H_jetpt_JEC_both_17->SetBorderSize(2);
   H_jetpt_JEC_both_17->SetLeftMargin(0.15);
   H_jetpt_JEC_both_17->SetFrameBorderMode(0);
   H_jetpt_JEC_both_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_H_jetpt_JEC_stack_1 = new TH1D("VbbHcc_both_H_jetpt_JEC_stack_1","",150,0,300);
   VbbHcc_both_H_jetpt_JEC_stack_1->SetBinContent(0,80559.54);
   VbbHcc_both_H_jetpt_JEC_stack_1->SetBinContent(1,66.59721);
   VbbHcc_both_H_jetpt_JEC_stack_1->SetBinContent(2,54913.72);
   VbbHcc_both_H_jetpt_JEC_stack_1->SetBinContent(3,25357.39);
   VbbHcc_both_H_jetpt_JEC_stack_1->SetBinContent(151,37115.55);
   VbbHcc_both_H_jetpt_JEC_stack_1->SetBinError(0,3341.319);
   VbbHcc_both_H_jetpt_JEC_stack_1->SetBinError(1,35.8236);
   VbbHcc_both_H_jetpt_JEC_stack_1->SetBinError(2,3227.568);
   VbbHcc_both_H_jetpt_JEC_stack_1->SetBinError(3,1696.162);
   VbbHcc_both_H_jetpt_JEC_stack_1->SetBinError(151,26401.48);
   VbbHcc_both_H_jetpt_JEC_stack_1->SetEntries(9795);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff6600");
   VbbHcc_both_H_jetpt_JEC_stack_1->SetFillColor(ci);
   VbbHcc_both_H_jetpt_JEC_stack_1->GetXaxis()->SetTitle("c-jet p_{T} (w/ JEC) [GeV]");
   VbbHcc_both_H_jetpt_JEC_stack_1->GetXaxis()->SetRange(1,150);
   VbbHcc_both_H_jetpt_JEC_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_jetpt_JEC_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_jetpt_JEC_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_jetpt_JEC_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_jetpt_JEC_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_jetpt_JEC_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_jetpt_JEC_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_jetpt_JEC_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_jetpt_JEC_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_jetpt_JEC_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_jetpt_JEC_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_jetpt_JEC_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_jetpt_JEC_stack_1->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_H_jetpt_JEC_stack_1->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_jetpt_JEC_both_17->Modified();
   H_jetpt_JEC_both_17->cd();
   H_jetpt_JEC_both_17->SetSelected(H_jetpt_JEC_both_17);
}
