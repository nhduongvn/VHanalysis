#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_tagFirst_18()
{
//=========Macro generated from canvas: Aplanarity_tagFirst_18/Aplanarity_tagFirst_18
//=========  (Thu Apr 11 14:04:08 2024) by ROOT version 6.28/10
   TCanvas *Aplanarity_tagFirst_18 = new TCanvas("Aplanarity_tagFirst_18", "Aplanarity_tagFirst_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_tagFirst_18->SetHighLightColor(2);
   Aplanarity_tagFirst_18->Range(-0.2,-439432.8,1.133333,3954895);
   Aplanarity_tagFirst_18->SetFillColor(0);
   Aplanarity_tagFirst_18->SetFillStyle(4000);
   Aplanarity_tagFirst_18->SetBorderMode(0);
   Aplanarity_tagFirst_18->SetBorderSize(2);
   Aplanarity_tagFirst_18->SetLeftMargin(0.15);
   Aplanarity_tagFirst_18->SetFrameFillStyle(1000);
   Aplanarity_tagFirst_18->SetFrameBorderMode(0);
   Aplanarity_tagFirst_18->SetFrameFillStyle(1000);
   Aplanarity_tagFirst_18->SetFrameBorderMode(0);
   
   TH1D *VH_tagFirst_Aplanarity__16 = new TH1D("VH_tagFirst_Aplanarity__16","",50,0,1);
   VH_tagFirst_Aplanarity__16->SetBinContent(1,3348059);
   VH_tagFirst_Aplanarity__16->SetBinContent(2,200202.8);
   VH_tagFirst_Aplanarity__16->SetBinContent(3,18243.62);
   VH_tagFirst_Aplanarity__16->SetBinContent(4,22086.66);
   VH_tagFirst_Aplanarity__16->SetBinContent(6,2954.783);
   VH_tagFirst_Aplanarity__16->SetBinContent(8,419.7394);
   VH_tagFirst_Aplanarity__16->SetBinContent(9,383.8705);
   VH_tagFirst_Aplanarity__16->SetBinError(1,593814);
   VH_tagFirst_Aplanarity__16->SetBinError(2,78477.55);
   VH_tagFirst_Aplanarity__16->SetBinError(3,5922.706);
   VH_tagFirst_Aplanarity__16->SetBinError(4,16018.41);
   VH_tagFirst_Aplanarity__16->SetBinError(6,2221.212);
   VH_tagFirst_Aplanarity__16->SetBinError(8,419.7394);
   VH_tagFirst_Aplanarity__16->SetBinError(9,383.8705);
   VH_tagFirst_Aplanarity__16->SetEntries(846);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagFirst_Aplanarity__16->SetLineColor(ci);
   VH_tagFirst_Aplanarity__16->GetXaxis()->SetTitle("Aplanarity");
   VH_tagFirst_Aplanarity__16->GetXaxis()->SetRange(1,50);
   VH_tagFirst_Aplanarity__16->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity__16->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity__16->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity__16->GetYaxis()->SetTitle("Events/0.02");
   VH_tagFirst_Aplanarity__16->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity__16->GetYaxis()->SetLabelSize(0.05);
   VH_tagFirst_Aplanarity__16->GetYaxis()->SetTitleSize(0.057);
   VH_tagFirst_Aplanarity__16->GetYaxis()->SetTitleOffset(1.2);
   VH_tagFirst_Aplanarity__16->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity__16->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Aplanarity__16->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Aplanarity__16->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_Aplanarity__16->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, -- fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_tagFirst_18->Modified();
   Aplanarity_tagFirst_18->cd();
   Aplanarity_tagFirst_18->SetSelected(Aplanarity_tagFirst_18);
}
