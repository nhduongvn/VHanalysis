#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_ZZ_tagFirst_2b1c_18()
{
//=========Macro generated from canvas: Aplanarity_ZZ_tagFirst_2b1c_18/Aplanarity_ZZ_tagFirst_2b1c_18
//=========  (Fri May 24 12:42:43 2024) by ROOT version 6.28/10
   TCanvas *Aplanarity_ZZ_tagFirst_2b1c_18 = new TCanvas("Aplanarity_ZZ_tagFirst_2b1c_18", "Aplanarity_ZZ_tagFirst_2b1c_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_ZZ_tagFirst_2b1c_18->SetHighLightColor(2);
   Aplanarity_ZZ_tagFirst_2b1c_18->Range(-0.2,-60.55479,1.133333,544.9931);
   Aplanarity_ZZ_tagFirst_2b1c_18->SetFillColor(0);
   Aplanarity_ZZ_tagFirst_2b1c_18->SetFillStyle(4000);
   Aplanarity_ZZ_tagFirst_2b1c_18->SetBorderMode(0);
   Aplanarity_ZZ_tagFirst_2b1c_18->SetBorderSize(2);
   Aplanarity_ZZ_tagFirst_2b1c_18->SetLeftMargin(0.15);
   Aplanarity_ZZ_tagFirst_2b1c_18->SetFrameFillStyle(1000);
   Aplanarity_ZZ_tagFirst_2b1c_18->SetFrameBorderMode(0);
   Aplanarity_ZZ_tagFirst_2b1c_18->SetFrameFillStyle(1000);
   Aplanarity_ZZ_tagFirst_2b1c_18->SetFrameBorderMode(0);
   
   TH1D *VH_tagFirst_2b1c_Aplanarity__2640 = new TH1D("VH_tagFirst_2b1c_Aplanarity__2640","",50,0,1);
   VH_tagFirst_2b1c_Aplanarity__2640->SetBinContent(1,461.3698);
   VH_tagFirst_2b1c_Aplanarity__2640->SetBinContent(2,39.25232);
   VH_tagFirst_2b1c_Aplanarity__2640->SetBinContent(3,7.427183);
   VH_tagFirst_2b1c_Aplanarity__2640->SetBinContent(4,1.689434);
   VH_tagFirst_2b1c_Aplanarity__2640->SetBinContent(5,0.4524488);
   VH_tagFirst_2b1c_Aplanarity__2640->SetBinContent(11,0.346379);
   VH_tagFirst_2b1c_Aplanarity__2640->SetBinError(1,16.02437);
   VH_tagFirst_2b1c_Aplanarity__2640->SetBinError(2,4.6657);
   VH_tagFirst_2b1c_Aplanarity__2640->SetBinError(3,1.79941);
   VH_tagFirst_2b1c_Aplanarity__2640->SetBinError(4,0.7850938);
   VH_tagFirst_2b1c_Aplanarity__2640->SetBinError(5,0.4524488);
   VH_tagFirst_2b1c_Aplanarity__2640->SetBinError(11,0.346379);
   VH_tagFirst_2b1c_Aplanarity__2640->SetEntries(1195);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagFirst_2b1c_Aplanarity__2640->SetLineColor(ci);
   VH_tagFirst_2b1c_Aplanarity__2640->GetXaxis()->SetTitle("Aplanarity");
   VH_tagFirst_2b1c_Aplanarity__2640->GetXaxis()->SetRange(1,50);
   VH_tagFirst_2b1c_Aplanarity__2640->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_2b1c_Aplanarity__2640->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_2b1c_Aplanarity__2640->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_2b1c_Aplanarity__2640->GetYaxis()->SetTitle("Events/0.02");
   VH_tagFirst_2b1c_Aplanarity__2640->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_2b1c_Aplanarity__2640->GetYaxis()->SetLabelSize(0.05);
   VH_tagFirst_2b1c_Aplanarity__2640->GetYaxis()->SetTitleSize(0.057);
   VH_tagFirst_2b1c_Aplanarity__2640->GetYaxis()->SetTitleOffset(1.2);
   VH_tagFirst_2b1c_Aplanarity__2640->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_2b1c_Aplanarity__2640->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_2b1c_Aplanarity__2640->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_2b1c_Aplanarity__2640->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_2b1c_Aplanarity__2640->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_ZZ_tagFirst_2b1c_18->Modified();
   Aplanarity_ZZ_tagFirst_2b1c_18->cd();
   Aplanarity_ZZ_tagFirst_2b1c_18->SetSelected(Aplanarity_ZZ_tagFirst_2b1c_18);
}
