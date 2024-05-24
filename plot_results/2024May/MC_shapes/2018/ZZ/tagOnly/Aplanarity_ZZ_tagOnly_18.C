#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_ZZ_tagOnly_18()
{
//=========Macro generated from canvas: Aplanarity_ZZ_tagOnly_18/Aplanarity_ZZ_tagOnly_18
//=========  (Fri May 24 12:42:22 2024) by ROOT version 6.28/10
   TCanvas *Aplanarity_ZZ_tagOnly_18 = new TCanvas("Aplanarity_ZZ_tagOnly_18", "Aplanarity_ZZ_tagOnly_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_ZZ_tagOnly_18->SetHighLightColor(2);
   Aplanarity_ZZ_tagOnly_18->Range(-0.2,-26.40078,1.133333,237.607);
   Aplanarity_ZZ_tagOnly_18->SetFillColor(0);
   Aplanarity_ZZ_tagOnly_18->SetFillStyle(4000);
   Aplanarity_ZZ_tagOnly_18->SetBorderMode(0);
   Aplanarity_ZZ_tagOnly_18->SetBorderSize(2);
   Aplanarity_ZZ_tagOnly_18->SetLeftMargin(0.15);
   Aplanarity_ZZ_tagOnly_18->SetFrameFillStyle(1000);
   Aplanarity_ZZ_tagOnly_18->SetFrameBorderMode(0);
   Aplanarity_ZZ_tagOnly_18->SetFrameFillStyle(1000);
   Aplanarity_ZZ_tagOnly_18->SetFrameBorderMode(0);
   
   TH1D *VH_tagOnly_Aplanarity__1200 = new TH1D("VH_tagOnly_Aplanarity__1200","",50,0,1);
   VH_tagOnly_Aplanarity__1200->SetBinContent(1,201.1488);
   VH_tagOnly_Aplanarity__1200->SetBinContent(2,15.70621);
   VH_tagOnly_Aplanarity__1200->SetBinContent(3,2.950277);
   VH_tagOnly_Aplanarity__1200->SetBinContent(4,0.2948286);
   VH_tagOnly_Aplanarity__1200->SetBinError(1,10.60838);
   VH_tagOnly_Aplanarity__1200->SetBinError(2,2.844946);
   VH_tagOnly_Aplanarity__1200->SetBinError(3,1.18083);
   VH_tagOnly_Aplanarity__1200->SetBinError(4,0.2948286);
   VH_tagOnly_Aplanarity__1200->SetEntries(509);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagOnly_Aplanarity__1200->SetLineColor(ci);
   VH_tagOnly_Aplanarity__1200->GetXaxis()->SetTitle("Aplanarity");
   VH_tagOnly_Aplanarity__1200->GetXaxis()->SetRange(1,50);
   VH_tagOnly_Aplanarity__1200->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity__1200->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity__1200->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity__1200->GetYaxis()->SetTitle("Events/0.02");
   VH_tagOnly_Aplanarity__1200->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity__1200->GetYaxis()->SetLabelSize(0.05);
   VH_tagOnly_Aplanarity__1200->GetYaxis()->SetTitleSize(0.057);
   VH_tagOnly_Aplanarity__1200->GetYaxis()->SetTitleOffset(1.2);
   VH_tagOnly_Aplanarity__1200->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity__1200->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity__1200->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity__1200->GetZaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity__1200->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_ZZ_tagOnly_18->Modified();
   Aplanarity_ZZ_tagOnly_18->cd();
   Aplanarity_ZZ_tagOnly_18->SetSelected(Aplanarity_ZZ_tagOnly_18);
}
