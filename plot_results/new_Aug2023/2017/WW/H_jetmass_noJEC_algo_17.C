void H_jetmass_noJEC_algo_17()
{
//=========Macro generated from canvas: H_jetmass_noJEC_algo_17/H_jetmass_noJEC_algo_17
//=========  (Tue Aug 22 09:22:06 2023) by ROOT version 6.14/09
   TCanvas *H_jetmass_noJEC_algo_17 = new TCanvas("H_jetmass_noJEC_algo_17", "H_jetmass_noJEC_algo_17",0,0,600,600);
   gStyle->SetOptStat(0);
   H_jetmass_noJEC_algo_17->SetHighLightColor(2);
   H_jetmass_noJEC_algo_17->Range(-60,-0.3824911,340,3.44242);
   H_jetmass_noJEC_algo_17->SetFillColor(0);
   H_jetmass_noJEC_algo_17->SetBorderMode(0);
   H_jetmass_noJEC_algo_17->SetBorderSize(2);
   H_jetmass_noJEC_algo_17->SetLeftMargin(0.15);
   H_jetmass_noJEC_algo_17->SetFrameBorderMode(0);
   H_jetmass_noJEC_algo_17->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_H_jetmass_noJEC_stack_6 = new TH1D("VbbHcc_algo_H_jetmass_noJEC_stack_6","",150,0,300);
   VbbHcc_algo_H_jetmass_noJEC_stack_6->SetBinContent(7,1.396588);
   VbbHcc_algo_H_jetmass_noJEC_stack_6->SetBinContent(8,1.616096);
   VbbHcc_algo_H_jetmass_noJEC_stack_6->SetBinContent(9,2.914218);
   VbbHcc_algo_H_jetmass_noJEC_stack_6->SetBinContent(10,2.119676);
   VbbHcc_algo_H_jetmass_noJEC_stack_6->SetBinContent(11,2.867662);
   VbbHcc_algo_H_jetmass_noJEC_stack_6->SetBinContent(12,0.9692573);
   VbbHcc_algo_H_jetmass_noJEC_stack_6->SetBinContent(13,2.618139);
   VbbHcc_algo_H_jetmass_noJEC_stack_6->SetBinContent(14,2.328438);
   VbbHcc_algo_H_jetmass_noJEC_stack_6->SetBinContent(15,0.8400371);
   VbbHcc_algo_H_jetmass_noJEC_stack_6->SetBinContent(16,1.265164);
   VbbHcc_algo_H_jetmass_noJEC_stack_6->SetBinContent(18,0.6642912);
   VbbHcc_algo_H_jetmass_noJEC_stack_6->SetBinContent(20,0.9409535);
   VbbHcc_algo_H_jetmass_noJEC_stack_6->SetBinContent(22,0.9833121);
   VbbHcc_algo_H_jetmass_noJEC_stack_6->SetBinContent(23,0.6281947);
   VbbHcc_algo_H_jetmass_noJEC_stack_6->SetBinContent(28,0.08416768);
   VbbHcc_algo_H_jetmass_noJEC_stack_6->SetBinContent(36,0.345623);
   VbbHcc_algo_H_jetmass_noJEC_stack_6->SetBinContent(40,0.320737);
   VbbHcc_algo_H_jetmass_noJEC_stack_6->SetBinContent(41,0.3056934);
   VbbHcc_algo_H_jetmass_noJEC_stack_6->SetBinContent(43,0.3776318);
   VbbHcc_algo_H_jetmass_noJEC_stack_6->SetBinContent(44,0.6636153);
   VbbHcc_algo_H_jetmass_noJEC_stack_6->SetBinContent(45,0.3674994);
   VbbHcc_algo_H_jetmass_noJEC_stack_6->SetBinContent(52,0.4018544);
   VbbHcc_algo_H_jetmass_noJEC_stack_6->SetBinError(7,0.6306554);
   VbbHcc_algo_H_jetmass_noJEC_stack_6->SetBinError(8,0.7237071);
   VbbHcc_algo_H_jetmass_noJEC_stack_6->SetBinError(9,0.8901282);
   VbbHcc_algo_H_jetmass_noJEC_stack_6->SetBinError(10,0.8091085);
   VbbHcc_algo_H_jetmass_noJEC_stack_6->SetBinError(11,0.9262833);
   VbbHcc_algo_H_jetmass_noJEC_stack_6->SetBinError(12,0.565873);
   VbbHcc_algo_H_jetmass_noJEC_stack_6->SetBinError(13,0.9528741);
   VbbHcc_algo_H_jetmass_noJEC_stack_6->SetBinError(14,0.8352832);
   VbbHcc_algo_H_jetmass_noJEC_stack_6->SetBinError(15,0.4884591);
   VbbHcc_algo_H_jetmass_noJEC_stack_6->SetBinError(16,0.6410849);
   VbbHcc_algo_H_jetmass_noJEC_stack_6->SetBinError(18,0.4745254);
   VbbHcc_algo_H_jetmass_noJEC_stack_6->SetBinError(20,0.5568023);
   VbbHcc_algo_H_jetmass_noJEC_stack_6->SetBinError(22,0.5692451);
   VbbHcc_algo_H_jetmass_noJEC_stack_6->SetBinError(23,0.4462789);
   VbbHcc_algo_H_jetmass_noJEC_stack_6->SetBinError(28,0.08416768);
   VbbHcc_algo_H_jetmass_noJEC_stack_6->SetBinError(36,0.345623);
   VbbHcc_algo_H_jetmass_noJEC_stack_6->SetBinError(40,0.320737);
   VbbHcc_algo_H_jetmass_noJEC_stack_6->SetBinError(41,0.3056934);
   VbbHcc_algo_H_jetmass_noJEC_stack_6->SetBinError(43,0.3776318);
   VbbHcc_algo_H_jetmass_noJEC_stack_6->SetBinError(44,0.4733285);
   VbbHcc_algo_H_jetmass_noJEC_stack_6->SetBinError(45,0.3674994);
   VbbHcc_algo_H_jetmass_noJEC_stack_6->SetBinError(52,0.4018544);
   VbbHcc_algo_H_jetmass_noJEC_stack_6->SetEntries(83);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#9933ff");
   VbbHcc_algo_H_jetmass_noJEC_stack_6->SetFillColor(ci);
   VbbHcc_algo_H_jetmass_noJEC_stack_6->GetXaxis()->SetTitle("c-jet mass [GeV]");
   VbbHcc_algo_H_jetmass_noJEC_stack_6->GetXaxis()->SetRange(1,150);
   VbbHcc_algo_H_jetmass_noJEC_stack_6->GetXaxis()->SetLabelFont(42);
   VbbHcc_algo_H_jetmass_noJEC_stack_6->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_jetmass_noJEC_stack_6->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_jetmass_noJEC_stack_6->GetXaxis()->SetTitleFont(42);
   VbbHcc_algo_H_jetmass_noJEC_stack_6->GetYaxis()->SetLabelFont(42);
   VbbHcc_algo_H_jetmass_noJEC_stack_6->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_jetmass_noJEC_stack_6->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_jetmass_noJEC_stack_6->GetYaxis()->SetTitleOffset(0);
   VbbHcc_algo_H_jetmass_noJEC_stack_6->GetYaxis()->SetTitleFont(42);
   VbbHcc_algo_H_jetmass_noJEC_stack_6->GetZaxis()->SetLabelFont(42);
   VbbHcc_algo_H_jetmass_noJEC_stack_6->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_algo_H_jetmass_noJEC_stack_6->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_algo_H_jetmass_noJEC_stack_6->GetZaxis()->SetTitleFont(42);
   VbbHcc_algo_H_jetmass_noJEC_stack_6->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_jetmass_noJEC_algo_17->Modified();
   H_jetmass_noJEC_algo_17->cd();
   H_jetmass_noJEC_algo_17->SetSelected(H_jetmass_noJEC_algo_17);
}
