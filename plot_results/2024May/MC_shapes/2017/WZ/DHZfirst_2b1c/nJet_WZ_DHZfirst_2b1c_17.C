#ifdef __CLING__
#pragma cling optimize(0)
#endif
void nJet_WZ_DHZfirst_2b1c_17()
{
//=========Macro generated from canvas: nJet_WZ_DHZfirst_2b1c_17/nJet_WZ_DHZfirst_2b1c_17
//=========  (Fri May 24 12:34:44 2024) by ROOT version 6.28/10
   TCanvas *nJet_WZ_DHZfirst_2b1c_17 = new TCanvas("nJet_WZ_DHZfirst_2b1c_17", "nJet_WZ_DHZfirst_2b1c_17",0,0,600,600);
   gStyle->SetOptStat(0);
   nJet_WZ_DHZfirst_2b1c_17->SetHighLightColor(2);
   nJet_WZ_DHZfirst_2b1c_17->Range(-3.3,-102705.3,15.36667,924347.9);
   nJet_WZ_DHZfirst_2b1c_17->SetFillColor(0);
   nJet_WZ_DHZfirst_2b1c_17->SetFillStyle(4000);
   nJet_WZ_DHZfirst_2b1c_17->SetBorderMode(0);
   nJet_WZ_DHZfirst_2b1c_17->SetBorderSize(2);
   nJet_WZ_DHZfirst_2b1c_17->SetLeftMargin(0.15);
   nJet_WZ_DHZfirst_2b1c_17->SetFrameFillStyle(1000);
   nJet_WZ_DHZfirst_2b1c_17->SetFrameBorderMode(0);
   nJet_WZ_DHZfirst_2b1c_17->SetFrameFillStyle(1000);
   nJet_WZ_DHZfirst_2b1c_17->SetFrameBorderMode(0);
   
   TH1D *Jets_cut_nJet__8246 = new TH1D("Jets_cut_nJet__8246","",14,-0.5,13.5);
   Jets_cut_nJet__8246->SetBinContent(1,782516.8);
   Jets_cut_nJet__8246->SetBinContent(2,543854.3);
   Jets_cut_nJet__8246->SetBinContent(3,290224.9);
   Jets_cut_nJet__8246->SetBinContent(4,98767.52);
   Jets_cut_nJet__8246->SetBinContent(5,32866.35);
   Jets_cut_nJet__8246->SetBinContent(6,7972.137);
   Jets_cut_nJet__8246->SetBinContent(7,1547.538);
   Jets_cut_nJet__8246->SetBinContent(8,260.4868);
   Jets_cut_nJet__8246->SetBinContent(9,39.70359);
   Jets_cut_nJet__8246->SetBinContent(10,6.30115);
   Jets_cut_nJet__8246->SetBinContent(11,0.5269558);
   Jets_cut_nJet__8246->SetBinError(1,448.4933);
   Jets_cut_nJet__8246->SetBinError(2,369.422);
   Jets_cut_nJet__8246->SetBinError(3,261.5712);
   Jets_cut_nJet__8246->SetBinError(4,145.868);
   Jets_cut_nJet__8246->SetBinError(5,86.95677);
   Jets_cut_nJet__8246->SetBinError(6,45.54236);
   Jets_cut_nJet__8246->SetBinError(7,20.89107);
   Jets_cut_nJet__8246->SetBinError(8,8.903415);
   Jets_cut_nJet__8246->SetBinError(9,3.477349);
   Jets_cut_nJet__8246->SetBinError(10,1.802634);
   Jets_cut_nJet__8246->SetBinError(11,0.3760631);
   Jets_cut_nJet__8246->SetEntries(7889000);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jets_cut_nJet__8246->SetLineColor(ci);
   Jets_cut_nJet__8246->GetXaxis()->SetTitle("Jet multiplicity");
   Jets_cut_nJet__8246->GetXaxis()->SetRange(1,14);
   Jets_cut_nJet__8246->GetXaxis()->SetLabelFont(42);
   Jets_cut_nJet__8246->GetXaxis()->SetTitleOffset(1);
   Jets_cut_nJet__8246->GetXaxis()->SetTitleFont(42);
   Jets_cut_nJet__8246->GetYaxis()->SetTitle("Events/1.0");
   Jets_cut_nJet__8246->GetYaxis()->SetLabelFont(42);
   Jets_cut_nJet__8246->GetYaxis()->SetLabelSize(0.05);
   Jets_cut_nJet__8246->GetYaxis()->SetTitleSize(0.057);
   Jets_cut_nJet__8246->GetYaxis()->SetTitleOffset(1.2);
   Jets_cut_nJet__8246->GetYaxis()->SetTitleFont(42);
   Jets_cut_nJet__8246->GetZaxis()->SetLabelFont(42);
   Jets_cut_nJet__8246->GetZaxis()->SetTitleOffset(1);
   Jets_cut_nJet__8246->GetZaxis()->SetTitleFont(42);
   Jets_cut_nJet__8246->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   nJet_WZ_DHZfirst_2b1c_17->Modified();
   nJet_WZ_DHZfirst_2b1c_17->cd();
   nJet_WZ_DHZfirst_2b1c_17->SetSelected(nJet_WZ_DHZfirst_2b1c_17);
}
