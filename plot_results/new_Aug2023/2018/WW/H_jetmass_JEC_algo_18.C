void H_jetmass_JEC_algo_18()
{
//=========Macro generated from canvas: H_jetmass_JEC_algo_18/H_jetmass_JEC_algo_18
//=========  (Tue Aug 22 09:22:10 2023) by ROOT version 6.14/09
   TCanvas *H_jetmass_JEC_algo_18 = new TCanvas("H_jetmass_JEC_algo_18", "H_jetmass_JEC_algo_18",0,0,600,600);
   gStyle->SetOptStat(0);
   H_jetmass_JEC_algo_18->SetHighLightColor(2);
   H_jetmass_JEC_algo_18->Range(-60,-1.106579,340,9.959212);
   H_jetmass_JEC_algo_18->SetFillColor(0);
   H_jetmass_JEC_algo_18->SetBorderMode(0);
   H_jetmass_JEC_algo_18->SetBorderSize(2);
   H_jetmass_JEC_algo_18->SetLeftMargin(0.15);
   H_jetmass_JEC_algo_18->SetFrameBorderMode(0);
   H_jetmass_JEC_algo_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_H_jetmass_JEC_stack_6 = new TH1D("VbbHcc_algo_H_jetmass_JEC_stack_6","",150,0,300);
   VbbHcc_algo_H_jetmass_JEC_stack_6->SetBinContent(5,0.6076863);
   VbbHcc_algo_H_jetmass_JEC_stack_6->SetBinContent(6,2.277427);
   VbbHcc_algo_H_jetmass_JEC_stack_6->SetBinContent(7,2.539224);
   VbbHcc_algo_H_jetmass_JEC_stack_6->SetBinContent(8,2.543632);
   VbbHcc_algo_H_jetmass_JEC_stack_6->SetBinContent(9,8.431079);
   VbbHcc_algo_H_jetmass_JEC_stack_6->SetBinContent(10,4.166937);
   VbbHcc_algo_H_jetmass_JEC_stack_6->SetBinContent(11,5.431048);
   VbbHcc_algo_H_jetmass_JEC_stack_6->SetBinContent(12,1.775274);
   VbbHcc_algo_H_jetmass_JEC_stack_6->SetBinContent(13,0.9895323);
   VbbHcc_algo_H_jetmass_JEC_stack_6->SetBinContent(14,1.256966);
   VbbHcc_algo_H_jetmass_JEC_stack_6->SetBinContent(16,2.288046);
   VbbHcc_algo_H_jetmass_JEC_stack_6->SetBinContent(17,2.017602);
   VbbHcc_algo_H_jetmass_JEC_stack_6->SetBinContent(18,1.767738);
   VbbHcc_algo_H_jetmass_JEC_stack_6->SetBinContent(20,1.231082);
   VbbHcc_algo_H_jetmass_JEC_stack_6->SetBinContent(21,0.7240563);
   VbbHcc_algo_H_jetmass_JEC_stack_6->SetBinContent(22,0.5622814);
   VbbHcc_algo_H_jetmass_JEC_stack_6->SetBinContent(30,0.5430975);
   VbbHcc_algo_H_jetmass_JEC_stack_6->SetBinContent(33,0.5354066);
   VbbHcc_algo_H_jetmass_JEC_stack_6->SetBinError(5,0.6076863);
   VbbHcc_algo_H_jetmass_JEC_stack_6->SetBinError(6,1.3385);
   VbbHcc_algo_H_jetmass_JEC_stack_6->SetBinError(7,1.294397);
   VbbHcc_algo_H_jetmass_JEC_stack_6->SetBinError(8,1.277234);
   VbbHcc_algo_H_jetmass_JEC_stack_6->SetBinError(9,3.225207);
   VbbHcc_algo_H_jetmass_JEC_stack_6->SetBinError(10,1.585124);
   VbbHcc_algo_H_jetmass_JEC_stack_6->SetBinError(11,1.881964);
   VbbHcc_algo_H_jetmass_JEC_stack_6->SetBinError(12,1.025789);
   VbbHcc_algo_H_jetmass_JEC_stack_6->SetBinError(13,0.705293);
   VbbHcc_algo_H_jetmass_JEC_stack_6->SetBinError(14,0.7413601);
   VbbHcc_algo_H_jetmass_JEC_stack_6->SetBinError(16,1.323171);
   VbbHcc_algo_H_jetmass_JEC_stack_6->SetBinError(17,1.560015);
   VbbHcc_algo_H_jetmass_JEC_stack_6->SetBinError(18,1.04195);
   VbbHcc_algo_H_jetmass_JEC_stack_6->SetBinError(20,0.875026);
   VbbHcc_algo_H_jetmass_JEC_stack_6->SetBinError(21,0.7240563);
   VbbHcc_algo_H_jetmass_JEC_stack_6->SetBinError(22,0.5622814);
   VbbHcc_algo_H_jetmass_JEC_stack_6->SetBinError(30,0.5430975);
   VbbHcc_algo_H_jetmass_JEC_stack_6->SetBinError(33,0.5354066);
   VbbHcc_algo_H_jetmass_JEC_stack_6->SetEntries(60);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#9933ff");
   VbbHcc_algo_H_jetmass_JEC_stack_6->SetFillColor(ci);
   VbbHcc_algo_H_jetmass_JEC_stack_6->GetXaxis()->SetTitle("c-jet mass (w/ JEC) [GeV]");
   VbbHcc_algo_H_jetmass_JEC_stack_6->GetXaxis()->SetRange(1,150);
   VbbHcc_algo_H_jetmass_JEC_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_jetmass_JEC_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_jetmass_JEC_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_jetmass_JEC_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_jetmass_JEC_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_jetmass_JEC_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_jetmass_JEC_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_jetmass_JEC_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_jetmass_JEC_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_jetmass_JEC_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_jetmass_JEC_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_jetmass_JEC_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_jetmass_JEC_stack_6->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_H_jetmass_JEC_stack_6->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_jetmass_JEC_algo_18->Modified();
   H_jetmass_JEC_algo_18->cd();
   H_jetmass_JEC_algo_18->SetSelected(H_jetmass_JEC_algo_18);
}
