#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_ZZ_tagFirst_18()
{
//=========Macro generated from canvas: Aplanarity_ZZ_tagFirst_18/Aplanarity_ZZ_tagFirst_18
//=========  (Fri May 24 12:42:12 2024) by ROOT version 6.28/10
   TCanvas *Aplanarity_ZZ_tagFirst_18 = new TCanvas("Aplanarity_ZZ_tagFirst_18", "Aplanarity_ZZ_tagFirst_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_ZZ_tagFirst_18->SetHighLightColor(2);
   Aplanarity_ZZ_tagFirst_18->Range(-0.2,-28.15285,1.133333,253.3756);
   Aplanarity_ZZ_tagFirst_18->SetFillColor(0);
   Aplanarity_ZZ_tagFirst_18->SetFillStyle(4000);
   Aplanarity_ZZ_tagFirst_18->SetBorderMode(0);
   Aplanarity_ZZ_tagFirst_18->SetBorderSize(2);
   Aplanarity_ZZ_tagFirst_18->SetLeftMargin(0.15);
   Aplanarity_ZZ_tagFirst_18->SetFrameFillStyle(1000);
   Aplanarity_ZZ_tagFirst_18->SetFrameBorderMode(0);
   Aplanarity_ZZ_tagFirst_18->SetFrameFillStyle(1000);
   Aplanarity_ZZ_tagFirst_18->SetFrameBorderMode(0);
   
   TH1D *VH_tagFirst_Aplanarity__480 = new TH1D("VH_tagFirst_Aplanarity__480","",50,0,1);
   VH_tagFirst_Aplanarity__480->SetBinContent(1,214.4979);
   VH_tagFirst_Aplanarity__480->SetBinContent(2,18.33098);
   VH_tagFirst_Aplanarity__480->SetBinContent(3,3.288103);
   VH_tagFirst_Aplanarity__480->SetBinContent(4,0.2948286);
   VH_tagFirst_Aplanarity__480->SetBinContent(6,1.062598);
   VH_tagFirst_Aplanarity__480->SetBinError(1,10.96193);
   VH_tagFirst_Aplanarity__480->SetBinError(2,3.072006);
   VH_tagFirst_Aplanarity__480->SetBinError(3,1.228205);
   VH_tagFirst_Aplanarity__480->SetBinError(4,0.2948286);
   VH_tagFirst_Aplanarity__480->SetBinError(6,1.062598);
   VH_tagFirst_Aplanarity__480->SetEntries(548);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagFirst_Aplanarity__480->SetLineColor(ci);
   VH_tagFirst_Aplanarity__480->GetXaxis()->SetTitle("Aplanarity");
   VH_tagFirst_Aplanarity__480->GetXaxis()->SetRange(1,50);
   VH_tagFirst_Aplanarity__480->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity__480->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity__480->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity__480->GetYaxis()->SetTitle("Events/0.02");
   VH_tagFirst_Aplanarity__480->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity__480->GetYaxis()->SetLabelSize(0.05);
   VH_tagFirst_Aplanarity__480->GetYaxis()->SetTitleSize(0.057);
   VH_tagFirst_Aplanarity__480->GetYaxis()->SetTitleOffset(1.2);
   VH_tagFirst_Aplanarity__480->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity__480->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity__480->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity__480->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity__480->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_ZZ_tagFirst_18->Modified();
   Aplanarity_ZZ_tagFirst_18->cd();
   Aplanarity_ZZ_tagFirst_18->SetSelected(Aplanarity_ZZ_tagFirst_18);
}
