#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_jetmass_JEC_tagFirst_2combo_18()
{
//=========Macro generated from canvas: H_jetmass_JEC_tagFirst_2combo_18/H_jetmass_JEC_tagFirst_2combo_18
//=========  (Thu May 23 13:53:22 2024) by ROOT version 6.28/10
   TCanvas *H_jetmass_JEC_tagFirst_2combo_18 = new TCanvas("H_jetmass_JEC_tagFirst_2combo_18", "H_jetmass_JEC_tagFirst_2combo_18",0,0,600,600);
   gStyle->SetOptStat(0);
   H_jetmass_JEC_tagFirst_2combo_18->SetHighLightColor(2);
   H_jetmass_JEC_tagFirst_2combo_18->Range(-60,-0.001497275,340,0.01347547);
   H_jetmass_JEC_tagFirst_2combo_18->SetFillColor(0);
   H_jetmass_JEC_tagFirst_2combo_18->SetFillStyle(4000);
   H_jetmass_JEC_tagFirst_2combo_18->SetBorderMode(0);
   H_jetmass_JEC_tagFirst_2combo_18->SetBorderSize(2);
   H_jetmass_JEC_tagFirst_2combo_18->SetLeftMargin(0.15);
   H_jetmass_JEC_tagFirst_2combo_18->SetFrameFillStyle(1000);
   H_jetmass_JEC_tagFirst_2combo_18->SetFrameBorderMode(0);
   H_jetmass_JEC_tagFirst_2combo_18->SetFrameFillStyle(1000);
   H_jetmass_JEC_tagFirst_2combo_18->SetFrameBorderMode(0);
   
   TH1D *VH_tagFirst_2combo_H_jetmass_JEC__116 = new TH1D("VH_tagFirst_2combo_H_jetmass_JEC__116","",150,0,300);
   VH_tagFirst_2combo_H_jetmass_JEC__116->SetBinContent(5,0.002400052);
   VH_tagFirst_2combo_H_jetmass_JEC__116->SetBinContent(6,0.01140781);
   VH_tagFirst_2combo_H_jetmass_JEC__116->SetBinContent(7,0.005262292);
   VH_tagFirst_2combo_H_jetmass_JEC__116->SetBinContent(8,0.009787176);
   VH_tagFirst_2combo_H_jetmass_JEC__116->SetBinContent(9,0.002476757);
   VH_tagFirst_2combo_H_jetmass_JEC__116->SetBinContent(10,0.002124915);
   VH_tagFirst_2combo_H_jetmass_JEC__116->SetBinContent(11,0.004822818);
   VH_tagFirst_2combo_H_jetmass_JEC__116->SetBinContent(12,0.002901436);
   VH_tagFirst_2combo_H_jetmass_JEC__116->SetBinContent(14,0.002105444);
   VH_tagFirst_2combo_H_jetmass_JEC__116->SetBinContent(16,0.002412888);
   VH_tagFirst_2combo_H_jetmass_JEC__116->SetBinContent(17,0.003473147);
   VH_tagFirst_2combo_H_jetmass_JEC__116->SetBinError(5,0.002400052);
   VH_tagFirst_2combo_H_jetmass_JEC__116->SetBinError(6,0.006129951);
   VH_tagFirst_2combo_H_jetmass_JEC__116->SetBinError(7,0.003736921);
   VH_tagFirst_2combo_H_jetmass_JEC__116->SetBinError(8,0.004521198);
   VH_tagFirst_2combo_H_jetmass_JEC__116->SetBinError(9,0.002476757);
   VH_tagFirst_2combo_H_jetmass_JEC__116->SetBinError(10,0.002124915);
   VH_tagFirst_2combo_H_jetmass_JEC__116->SetBinError(11,0.004822818);
   VH_tagFirst_2combo_H_jetmass_JEC__116->SetBinError(12,0.002901436);
   VH_tagFirst_2combo_H_jetmass_JEC__116->SetBinError(14,0.002105444);
   VH_tagFirst_2combo_H_jetmass_JEC__116->SetBinError(16,0.002412888);
   VH_tagFirst_2combo_H_jetmass_JEC__116->SetBinError(17,0.002605079);
   VH_tagFirst_2combo_H_jetmass_JEC__116->SetEntries(20);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagFirst_2combo_H_jetmass_JEC__116->SetLineColor(ci);
   VH_tagFirst_2combo_H_jetmass_JEC__116->GetXaxis()->SetTitle("c-jet mass (w/ JEC) [GeV]");
   VH_tagFirst_2combo_H_jetmass_JEC__116->GetXaxis()->SetRange(1,150);
   VH_tagFirst_2combo_H_jetmass_JEC__116->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_2combo_H_jetmass_JEC__116->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_2combo_H_jetmass_JEC__116->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_2combo_H_jetmass_JEC__116->GetYaxis()->SetTitle("Events/2.0 GeV");
   VH_tagFirst_2combo_H_jetmass_JEC__116->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_2combo_H_jetmass_JEC__116->GetYaxis()->SetLabelSize(0.05);
   VH_tagFirst_2combo_H_jetmass_JEC__116->GetYaxis()->SetTitleSize(0.057);
   VH_tagFirst_2combo_H_jetmass_JEC__116->GetYaxis()->SetTitleOffset(1.2);
   VH_tagFirst_2combo_H_jetmass_JEC__116->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_2combo_H_jetmass_JEC__116->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_2combo_H_jetmass_JEC__116->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_2combo_H_jetmass_JEC__116->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_2combo_H_jetmass_JEC__116->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, -- fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_jetmass_JEC_tagFirst_2combo_18->Modified();
   H_jetmass_JEC_tagFirst_2combo_18->cd();
   H_jetmass_JEC_tagFirst_2combo_18->SetSelected(H_jetmass_JEC_tagFirst_2combo_18);
}
