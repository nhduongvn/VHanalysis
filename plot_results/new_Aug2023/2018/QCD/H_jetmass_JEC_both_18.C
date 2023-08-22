void H_jetmass_JEC_both_18()
{
//=========Macro generated from canvas: H_jetmass_JEC_both_18/H_jetmass_JEC_both_18
//=========  (Tue Aug 22 09:23:34 2023) by ROOT version 6.14/09
   TCanvas *H_jetmass_JEC_both_18 = new TCanvas("H_jetmass_JEC_both_18", "H_jetmass_JEC_both_18",0,0,600,600);
   gStyle->SetOptStat(0);
   H_jetmass_JEC_both_18->SetHighLightColor(2);
   H_jetmass_JEC_both_18->Range(-60,-17135.35,340,154218.2);
   H_jetmass_JEC_both_18->SetFillColor(0);
   H_jetmass_JEC_both_18->SetBorderMode(0);
   H_jetmass_JEC_both_18->SetBorderSize(2);
   H_jetmass_JEC_both_18->SetLeftMargin(0.15);
   H_jetmass_JEC_both_18->SetFrameBorderMode(0);
   H_jetmass_JEC_both_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_both_H_jetmass_JEC_stack_1 = new TH1D("VbbHcc_both_H_jetmass_JEC_stack_1","",150,0,300);
   VbbHcc_both_H_jetmass_JEC_stack_1->SetBinContent(1,425.1182);
   VbbHcc_both_H_jetmass_JEC_stack_1->SetBinContent(2,90886.63);
   VbbHcc_both_H_jetmass_JEC_stack_1->SetBinContent(3,130555.1);
   VbbHcc_both_H_jetmass_JEC_stack_1->SetBinError(1,342.4379);
   VbbHcc_both_H_jetmass_JEC_stack_1->SetBinError(2,6035.552);
   VbbHcc_both_H_jetmass_JEC_stack_1->SetBinError(3,4648.154);
   VbbHcc_both_H_jetmass_JEC_stack_1->SetEntries(9895);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff6600");
   VbbHcc_both_H_jetmass_JEC_stack_1->SetFillColor(ci);
   VbbHcc_both_H_jetmass_JEC_stack_1->GetXaxis()->SetTitle("c-jet mass (w/ JEC) [GeV]");
   VbbHcc_both_H_jetmass_JEC_stack_1->GetXaxis()->SetRange(1,150);
   VbbHcc_both_H_jetmass_JEC_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_H_jetmass_JEC_stack_1->GetXaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_jetmass_JEC_stack_1->GetXaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_jetmass_JEC_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_H_jetmass_JEC_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_H_jetmass_JEC_stack_1->GetYaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_jetmass_JEC_stack_1->GetYaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_jetmass_JEC_stack_1->GetYaxis()->SetTitleOffset(0);
   VbbHcc_both_H_jetmass_JEC_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_H_jetmass_JEC_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_H_jetmass_JEC_stack_1->GetZaxis()->SetLabelSize(0.035);
   VbbHcc_both_H_jetmass_JEC_stack_1->GetZaxis()->SetTitleSize(0.035);
   VbbHcc_both_H_jetmass_JEC_stack_1->GetZaxis()->SetTitleFont(42);
   VbbHcc_both_H_jetmass_JEC_stack_1->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_jetmass_JEC_both_18->Modified();
   H_jetmass_JEC_both_18->cd();
   H_jetmass_JEC_both_18->SetSelected(H_jetmass_JEC_both_18);
}
