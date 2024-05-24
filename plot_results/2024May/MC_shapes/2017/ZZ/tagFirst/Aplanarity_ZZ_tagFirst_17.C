#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_ZZ_tagFirst_17()
{
//=========Macro generated from canvas: Aplanarity_ZZ_tagFirst_17/Aplanarity_ZZ_tagFirst_17
//=========  (Fri May 24 12:42:12 2024) by ROOT version 6.28/10
   TCanvas *Aplanarity_ZZ_tagFirst_17 = new TCanvas("Aplanarity_ZZ_tagFirst_17", "Aplanarity_ZZ_tagFirst_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_ZZ_tagFirst_17->SetHighLightColor(2);
   Aplanarity_ZZ_tagFirst_17->Range(-0.2,-14.5523,1.133333,130.9707);
   Aplanarity_ZZ_tagFirst_17->SetFillColor(0);
   Aplanarity_ZZ_tagFirst_17->SetFillStyle(4000);
   Aplanarity_ZZ_tagFirst_17->SetBorderMode(0);
   Aplanarity_ZZ_tagFirst_17->SetBorderSize(2);
   Aplanarity_ZZ_tagFirst_17->SetLeftMargin(0.15);
   Aplanarity_ZZ_tagFirst_17->SetFrameFillStyle(1000);
   Aplanarity_ZZ_tagFirst_17->SetFrameBorderMode(0);
   Aplanarity_ZZ_tagFirst_17->SetFrameFillStyle(1000);
   Aplanarity_ZZ_tagFirst_17->SetFrameBorderMode(0);
   
   TH1D *VH_tagFirst_Aplanarity__479 = new TH1D("VH_tagFirst_Aplanarity__479","",50,0,1);
   VH_tagFirst_Aplanarity__479->SetBinContent(1,110.8746);
   VH_tagFirst_Aplanarity__479->SetBinContent(2,11.61009);
   VH_tagFirst_Aplanarity__479->SetBinContent(3,4.354695);
   VH_tagFirst_Aplanarity__479->SetBinContent(4,0.7375593);
   VH_tagFirst_Aplanarity__479->SetBinContent(6,0.7626167);
   VH_tagFirst_Aplanarity__479->SetBinError(1,6.443799);
   VH_tagFirst_Aplanarity__479->SetBinError(2,1.88746);
   VH_tagFirst_Aplanarity__479->SetBinError(3,1.368426);
   VH_tagFirst_Aplanarity__479->SetBinError(4,0.4480842);
   VH_tagFirst_Aplanarity__479->SetBinError(6,0.7626167);
   VH_tagFirst_Aplanarity__479->SetEntries(481);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagFirst_Aplanarity__479->SetLineColor(ci);
   VH_tagFirst_Aplanarity__479->GetXaxis()->SetTitle("Aplanarity");
   VH_tagFirst_Aplanarity__479->GetXaxis()->SetRange(1,50);
   VH_tagFirst_Aplanarity__479->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity__479->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity__479->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity__479->GetYaxis()->SetTitle("Events/0.02");
   VH_tagFirst_Aplanarity__479->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity__479->GetYaxis()->SetLabelSize(0.05);
   VH_tagFirst_Aplanarity__479->GetYaxis()->SetTitleSize(0.057);
   VH_tagFirst_Aplanarity__479->GetYaxis()->SetTitleOffset(1.2);
   VH_tagFirst_Aplanarity__479->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity__479->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity__479->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity__479->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity__479->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_ZZ_tagFirst_17->Modified();
   Aplanarity_ZZ_tagFirst_17->cd();
   Aplanarity_ZZ_tagFirst_17->SetSelected(Aplanarity_ZZ_tagFirst_17);
}
