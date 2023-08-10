void H_jetmass_JEC_algo_18_logY()
{
//=========Macro generated from canvas: H_jetmass_JEC_algo_18/H_jetmass_JEC_algo_18
//=========  (Thu Aug 10 12:32:25 2023) by ROOT version 6.14/09
   TCanvas *H_jetmass_JEC_algo_18 = new TCanvas("H_jetmass_JEC_algo_18", "H_jetmass_JEC_algo_18",0,0,600,600);
   gStyle->SetOptStat(0);
   H_jetmass_JEC_algo_18->SetHighLightColor(2);
   H_jetmass_JEC_algo_18->Range(-60,-0.8614389,340,1.294445);
   H_jetmass_JEC_algo_18->SetFillColor(0);
   H_jetmass_JEC_algo_18->SetBorderMode(0);
   H_jetmass_JEC_algo_18->SetBorderSize(2);
   H_jetmass_JEC_algo_18->SetLogy();
   H_jetmass_JEC_algo_18->SetLeftMargin(0.15);
   H_jetmass_JEC_algo_18->SetFrameBorderMode(0);
   H_jetmass_JEC_algo_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_H_jetmass_JEC_stack_6 = new TH1D("VbbHcc_algo_H_jetmass_JEC_stack_6","",150,0,300);
   VbbHcc_algo_H_jetmass_JEC_stack_6->SetBinContent(3,0.4520427);
   VbbHcc_algo_H_jetmass_JEC_stack_6->SetBinContent(5,0.4520427);
   VbbHcc_algo_H_jetmass_JEC_stack_6->SetBinContent(6,1.356128);
   VbbHcc_algo_H_jetmass_JEC_stack_6->SetBinContent(7,2.260213);
   VbbHcc_algo_H_jetmass_JEC_stack_6->SetBinContent(8,2.260213);
   VbbHcc_algo_H_jetmass_JEC_stack_6->SetBinContent(9,6.328597);
   VbbHcc_algo_H_jetmass_JEC_stack_6->SetBinContent(10,4.068384);
   VbbHcc_algo_H_jetmass_JEC_stack_6->SetBinContent(11,4.972469);
   VbbHcc_algo_H_jetmass_JEC_stack_6->SetBinContent(12,1.808171);
   VbbHcc_algo_H_jetmass_JEC_stack_6->SetBinContent(13,0.9040853);
   VbbHcc_algo_H_jetmass_JEC_stack_6->SetBinContent(14,2.260213);
   VbbHcc_algo_H_jetmass_JEC_stack_6->SetBinContent(16,1.356128);
   VbbHcc_algo_H_jetmass_JEC_stack_6->SetBinContent(17,0.9040853);
   VbbHcc_algo_H_jetmass_JEC_stack_6->SetBinContent(18,1.356128);
   VbbHcc_algo_H_jetmass_JEC_stack_6->SetBinContent(20,0.9040853);
   VbbHcc_algo_H_jetmass_JEC_stack_6->SetBinContent(21,0.4520427);
   VbbHcc_algo_H_jetmass_JEC_stack_6->SetBinContent(22,0.4520427);
   VbbHcc_algo_H_jetmass_JEC_stack_6->SetBinContent(30,0.4520427);
   VbbHcc_algo_H_jetmass_JEC_stack_6->SetBinContent(32,0.4520427);
   VbbHcc_algo_H_jetmass_JEC_stack_6->SetBinContent(33,0.4520427);
   VbbHcc_algo_H_jetmass_JEC_stack_6->SetBinContent(36,0.4520427);
   VbbHcc_algo_H_jetmass_JEC_stack_6->SetBinContent(48,0.4520427);
   VbbHcc_algo_H_jetmass_JEC_stack_6->SetBinError(3,0.4520427);
   VbbHcc_algo_H_jetmass_JEC_stack_6->SetBinError(5,0.4520427);
   VbbHcc_algo_H_jetmass_JEC_stack_6->SetBinError(6,0.7829609);
   VbbHcc_algo_H_jetmass_JEC_stack_6->SetBinError(7,1.010798);
   VbbHcc_algo_H_jetmass_JEC_stack_6->SetBinError(8,1.010798);
   VbbHcc_algo_H_jetmass_JEC_stack_6->SetBinError(9,1.691389);
   VbbHcc_algo_H_jetmass_JEC_stack_6->SetBinError(10,1.356128);
   VbbHcc_algo_H_jetmass_JEC_stack_6->SetBinError(11,1.499256);
   VbbHcc_algo_H_jetmass_JEC_stack_6->SetBinError(12,0.9040853);
   VbbHcc_algo_H_jetmass_JEC_stack_6->SetBinError(13,0.6392849);
   VbbHcc_algo_H_jetmass_JEC_stack_6->SetBinError(14,1.010798);
   VbbHcc_algo_H_jetmass_JEC_stack_6->SetBinError(16,0.7829609);
   VbbHcc_algo_H_jetmass_JEC_stack_6->SetBinError(17,0.6392849);
   VbbHcc_algo_H_jetmass_JEC_stack_6->SetBinError(18,0.7829609);
   VbbHcc_algo_H_jetmass_JEC_stack_6->SetBinError(20,0.6392849);
   VbbHcc_algo_H_jetmass_JEC_stack_6->SetBinError(21,0.4520427);
   VbbHcc_algo_H_jetmass_JEC_stack_6->SetBinError(22,0.4520427);
   VbbHcc_algo_H_jetmass_JEC_stack_6->SetBinError(30,0.4520427);
   VbbHcc_algo_H_jetmass_JEC_stack_6->SetBinError(32,0.4520427);
   VbbHcc_algo_H_jetmass_JEC_stack_6->SetBinError(33,0.4520427);
   VbbHcc_algo_H_jetmass_JEC_stack_6->SetBinError(36,0.4520427);
   VbbHcc_algo_H_jetmass_JEC_stack_6->SetBinError(48,0.4520427);
   VbbHcc_algo_H_jetmass_JEC_stack_6->SetEntries(77);

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
