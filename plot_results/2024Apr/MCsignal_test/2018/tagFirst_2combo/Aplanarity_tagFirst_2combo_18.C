#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_tagFirst_2combo_18()
{
//=========Macro generated from canvas: Aplanarity_tagFirst_2combo_18/Aplanarity_tagFirst_2combo_18
//=========  (Thu Apr 11 14:04:10 2024) by ROOT version 6.28/10
   TCanvas *Aplanarity_tagFirst_2combo_18 = new TCanvas("Aplanarity_tagFirst_2combo_18", "Aplanarity_tagFirst_2combo_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_tagFirst_2combo_18->SetHighLightColor(2);
   Aplanarity_tagFirst_2combo_18->Range(-0.2,-288.214,1.133333,2593.926);
   Aplanarity_tagFirst_2combo_18->SetFillColor(0);
   Aplanarity_tagFirst_2combo_18->SetFillStyle(4000);
   Aplanarity_tagFirst_2combo_18->SetBorderMode(0);
   Aplanarity_tagFirst_2combo_18->SetBorderSize(2);
   Aplanarity_tagFirst_2combo_18->SetLeftMargin(0.15);
   Aplanarity_tagFirst_2combo_18->SetFrameFillStyle(1000);
   Aplanarity_tagFirst_2combo_18->SetFrameBorderMode(0);
   Aplanarity_tagFirst_2combo_18->SetFrameFillStyle(1000);
   Aplanarity_tagFirst_2combo_18->SetFrameBorderMode(0);
   
   TH1D *VH_tagFirst_2combo_Aplanarity__112 = new TH1D("VH_tagFirst_2combo_Aplanarity__112","",50,0,1);
   VH_tagFirst_2combo_Aplanarity__112->SetBinContent(1,2195.916);
   VH_tagFirst_2combo_Aplanarity__112->SetBinError(1,1185.998);
   VH_tagFirst_2combo_Aplanarity__112->SetEntries(4);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagFirst_2combo_Aplanarity__112->SetLineColor(ci);
   VH_tagFirst_2combo_Aplanarity__112->GetXaxis()->SetTitle("Aplanarity");
   VH_tagFirst_2combo_Aplanarity__112->GetXaxis()->SetRange(1,50);
   VH_tagFirst_2combo_Aplanarity__112->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_2combo_Aplanarity__112->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_2combo_Aplanarity__112->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_2combo_Aplanarity__112->GetYaxis()->SetTitle("Events/0.02");
   VH_tagFirst_2combo_Aplanarity__112->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_2combo_Aplanarity__112->GetYaxis()->SetLabelSize(0.05);
   VH_tagFirst_2combo_Aplanarity__112->GetYaxis()->SetTitleSize(0.057);
   VH_tagFirst_2combo_Aplanarity__112->GetYaxis()->SetTitleOffset(1.2);
   VH_tagFirst_2combo_Aplanarity__112->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_2combo_Aplanarity__112->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_2combo_Aplanarity__112->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_2combo_Aplanarity__112->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_2combo_Aplanarity__112->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, -- fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_tagFirst_2combo_18->Modified();
   Aplanarity_tagFirst_2combo_18->cd();
   Aplanarity_tagFirst_2combo_18->SetSelected(Aplanarity_tagFirst_2combo_18);
}
