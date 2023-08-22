void H_jetmass_noJEC_algo_18()
{
//=========Macro generated from canvas: H_jetmass_noJEC_algo_18/H_jetmass_noJEC_algo_18
//=========  (Tue Aug 22 09:22:07 2023) by ROOT version 6.14/09
   TCanvas *H_jetmass_noJEC_algo_18 = new TCanvas("H_jetmass_noJEC_algo_18", "H_jetmass_noJEC_algo_18",0,0,600,600);
   gStyle->SetOptStat(0);
   H_jetmass_noJEC_algo_18->SetHighLightColor(2);
   H_jetmass_noJEC_algo_18->Range(-60,-0.8676094,340,7.808484);
   H_jetmass_noJEC_algo_18->SetFillColor(0);
   H_jetmass_noJEC_algo_18->SetBorderMode(0);
   H_jetmass_noJEC_algo_18->SetBorderSize(2);
   H_jetmass_noJEC_algo_18->SetLeftMargin(0.15);
   H_jetmass_noJEC_algo_18->SetFrameBorderMode(0);
   H_jetmass_noJEC_algo_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_H_jetmass_noJEC_stack_6 = new TH1D("VbbHcc_algo_H_jetmass_noJEC_stack_6","",150,0,300);
   VbbHcc_algo_H_jetmass_noJEC_stack_6->SetBinContent(5,0.6076863);
   VbbHcc_algo_H_jetmass_noJEC_stack_6->SetBinContent(6,2.277427);
   VbbHcc_algo_H_jetmass_noJEC_stack_6->SetBinContent(7,3.063912);
   VbbHcc_algo_H_jetmass_noJEC_stack_6->SetBinContent(8,2.625002);
   VbbHcc_algo_H_jetmass_noJEC_stack_6->SetBinContent(9,5.282983);
   VbbHcc_algo_H_jetmass_noJEC_stack_6->SetBinContent(10,5.572453);
   VbbHcc_algo_H_jetmass_noJEC_stack_6->SetBinContent(11,6.610357);
   VbbHcc_algo_H_jetmass_noJEC_stack_6->SetBinContent(12,1.600218);
   VbbHcc_algo_H_jetmass_noJEC_stack_6->SetBinContent(13,0.5643811);
   VbbHcc_algo_H_jetmass_noJEC_stack_6->SetBinContent(14,2.305231);
   VbbHcc_algo_H_jetmass_noJEC_stack_6->SetBinContent(15,0.3245155);
   VbbHcc_algo_H_jetmass_noJEC_stack_6->SetBinContent(16,1.472686);
   VbbHcc_algo_H_jetmass_noJEC_stack_6->SetBinContent(17,1.455056);
   VbbHcc_algo_H_jetmass_noJEC_stack_6->SetBinContent(18,2.330283);
   VbbHcc_algo_H_jetmass_noJEC_stack_6->SetBinContent(19,0.6783453);
   VbbHcc_algo_H_jetmass_noJEC_stack_6->SetBinContent(20,0.5527369);
   VbbHcc_algo_H_jetmass_noJEC_stack_6->SetBinContent(22,1.286338);
   VbbHcc_algo_H_jetmass_noJEC_stack_6->SetBinContent(29,0.5430975);
   VbbHcc_algo_H_jetmass_noJEC_stack_6->SetBinContent(34,0.5354066);
   VbbHcc_algo_H_jetmass_noJEC_stack_6->SetBinError(5,0.6076863);
   VbbHcc_algo_H_jetmass_noJEC_stack_6->SetBinError(6,1.3385);
   VbbHcc_algo_H_jetmass_noJEC_stack_6->SetBinError(7,1.385352);
   VbbHcc_algo_H_jetmass_noJEC_stack_6->SetBinError(8,1.324724);
   VbbHcc_algo_H_jetmass_noJEC_stack_6->SetBinError(9,1.890157);
   VbbHcc_algo_H_jetmass_noJEC_stack_6->SetBinError(10,2.885909);
   VbbHcc_algo_H_jetmass_noJEC_stack_6->SetBinError(11,2.058965);
   VbbHcc_algo_H_jetmass_noJEC_stack_6->SetBinError(12,0.932198);
   VbbHcc_algo_H_jetmass_noJEC_stack_6->SetBinError(13,0.5643811);
   VbbHcc_algo_H_jetmass_noJEC_stack_6->SetBinError(14,1.191568);
   VbbHcc_algo_H_jetmass_noJEC_stack_6->SetBinError(15,0.3245155);
   VbbHcc_algo_H_jetmass_noJEC_stack_6->SetBinError(16,1.042099);
   VbbHcc_algo_H_jetmass_noJEC_stack_6->SetBinError(17,1.455056);
   VbbHcc_algo_H_jetmass_noJEC_stack_6->SetBinError(18,1.18411);
   VbbHcc_algo_H_jetmass_noJEC_stack_6->SetBinError(19,0.6783453);
   VbbHcc_algo_H_jetmass_noJEC_stack_6->SetBinError(20,0.5527369);
   VbbHcc_algo_H_jetmass_noJEC_stack_6->SetBinError(22,0.9167431);
   VbbHcc_algo_H_jetmass_noJEC_stack_6->SetBinError(29,0.5430975);
   VbbHcc_algo_H_jetmass_noJEC_stack_6->SetBinError(34,0.5354066);
   VbbHcc_algo_H_jetmass_noJEC_stack_6->SetEntries(60);

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_jetmass_noJEC_algo_18->Modified();
   H_jetmass_noJEC_algo_18->cd();
   H_jetmass_noJEC_algo_18->SetSelected(H_jetmass_noJEC_algo_18);
}
