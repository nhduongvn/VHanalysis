void H_jetmass_JEC_algo_18()
{
//=========Macro generated from canvas: H_jetmass_JEC_algo_18/H_jetmass_JEC_algo_18
//=========  (Thu Aug 10 12:24:30 2023) by ROOT version 6.14/09
   TCanvas *H_jetmass_JEC_algo_18 = new TCanvas("H_jetmass_JEC_algo_18", "H_jetmass_JEC_algo_18",0,0,600,600);
   gStyle->SetOptStat(0);
   H_jetmass_JEC_algo_18->SetHighLightColor(2);
   H_jetmass_JEC_algo_18->Range(-60,-1.208283,340,10.87454);
   H_jetmass_JEC_algo_18->SetFillColor(0);
   H_jetmass_JEC_algo_18->SetBorderMode(0);
   H_jetmass_JEC_algo_18->SetBorderSize(2);
   H_jetmass_JEC_algo_18->SetLeftMargin(0.15);
   H_jetmass_JEC_algo_18->SetFrameBorderMode(0);
   H_jetmass_JEC_algo_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_algo_H_jetmass_JEC_stack_6 = new TH1D("VbbHcc_algo_H_jetmass_JEC_stack_6","",150,0,300);
   VbbHcc_algo_H_jetmass_JEC_stack_6->SetBinContent(3,0.6599753);
   VbbHcc_algo_H_jetmass_JEC_stack_6->SetBinContent(5,0.5264131);
   VbbHcc_algo_H_jetmass_JEC_stack_6->SetBinContent(6,1.807144);
   VbbHcc_algo_H_jetmass_JEC_stack_6->SetBinContent(7,2.718146);
   VbbHcc_algo_H_jetmass_JEC_stack_6->SetBinContent(8,2.624454);
   VbbHcc_algo_H_jetmass_JEC_stack_6->SetBinContent(9,9.205963);
   VbbHcc_algo_H_jetmass_JEC_stack_6->SetBinContent(10,4.501625);
   VbbHcc_algo_H_jetmass_JEC_stack_6->SetBinContent(11,5.70823);
   VbbHcc_algo_H_jetmass_JEC_stack_6->SetBinContent(12,1.973305);
   VbbHcc_algo_H_jetmass_JEC_stack_6->SetBinContent(13,0.8550861);
   VbbHcc_algo_H_jetmass_JEC_stack_6->SetBinContent(14,2.071263);
   VbbHcc_algo_H_jetmass_JEC_stack_6->SetBinContent(16,1.935174);
   VbbHcc_algo_H_jetmass_JEC_stack_6->SetBinContent(17,1.747118);
   VbbHcc_algo_H_jetmass_JEC_stack_6->SetBinContent(18,1.54008);
   VbbHcc_algo_H_jetmass_JEC_stack_6->SetBinContent(20,1.071196);
   VbbHcc_algo_H_jetmass_JEC_stack_6->SetBinContent(21,0.633457);
   VbbHcc_algo_H_jetmass_JEC_stack_6->SetBinContent(22,0.4870807);
   VbbHcc_algo_H_jetmass_JEC_stack_6->SetBinContent(30,0.4684126);
   VbbHcc_algo_H_jetmass_JEC_stack_6->SetBinContent(32,0.6501005);
   VbbHcc_algo_H_jetmass_JEC_stack_6->SetBinContent(33,0.4684126);
   VbbHcc_algo_H_jetmass_JEC_stack_6->SetBinContent(36,0.4684126);
   VbbHcc_algo_H_jetmass_JEC_stack_6->SetBinContent(48,0.40108);
   VbbHcc_algo_H_jetmass_JEC_stack_6->SetBinError(3,0.6599753);
   VbbHcc_algo_H_jetmass_JEC_stack_6->SetBinError(5,0.5264131);
   VbbHcc_algo_H_jetmass_JEC_stack_6->SetBinError(6,1.053108);
   VbbHcc_algo_H_jetmass_JEC_stack_6->SetBinError(7,1.233467);
   VbbHcc_algo_H_jetmass_JEC_stack_6->SetBinError(8,1.183132);
   VbbHcc_algo_H_jetmass_JEC_stack_6->SetBinError(9,2.958104);
   VbbHcc_algo_H_jetmass_JEC_stack_6->SetBinError(10,1.511168);
   VbbHcc_algo_H_jetmass_JEC_stack_6->SetBinError(11,1.773426);
   VbbHcc_algo_H_jetmass_JEC_stack_6->SetBinError(12,0.9872205);
   VbbHcc_algo_H_jetmass_JEC_stack_6->SetBinError(13,0.6093041);
   VbbHcc_algo_H_jetmass_JEC_stack_6->SetBinError(14,0.945935);
   VbbHcc_algo_H_jetmass_JEC_stack_6->SetBinError(16,1.118055);
   VbbHcc_algo_H_jetmass_JEC_stack_6->SetBinError(17,1.348016);
   VbbHcc_algo_H_jetmass_JEC_stack_6->SetBinError(18,0.9069281);
   VbbHcc_algo_H_jetmass_JEC_stack_6->SetBinError(20,0.7610149);
   VbbHcc_algo_H_jetmass_JEC_stack_6->SetBinError(21,0.633457);
   VbbHcc_algo_H_jetmass_JEC_stack_6->SetBinError(22,0.4870807);
   VbbHcc_algo_H_jetmass_JEC_stack_6->SetBinError(30,0.4684126);
   VbbHcc_algo_H_jetmass_JEC_stack_6->SetBinError(32,0.6501005);
   VbbHcc_algo_H_jetmass_JEC_stack_6->SetBinError(33,0.4684126);
   VbbHcc_algo_H_jetmass_JEC_stack_6->SetBinError(36,0.4684126);
   VbbHcc_algo_H_jetmass_JEC_stack_6->SetBinError(48,0.40108);
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
