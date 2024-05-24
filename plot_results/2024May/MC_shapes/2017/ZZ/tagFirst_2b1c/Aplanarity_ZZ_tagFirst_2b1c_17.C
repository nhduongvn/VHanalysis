#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_ZZ_tagFirst_2b1c_17()
{
//=========Macro generated from canvas: Aplanarity_ZZ_tagFirst_2b1c_17/Aplanarity_ZZ_tagFirst_2b1c_17
//=========  (Fri May 24 12:42:43 2024) by ROOT version 6.28/10
   TCanvas *Aplanarity_ZZ_tagFirst_2b1c_17 = new TCanvas("Aplanarity_ZZ_tagFirst_2b1c_17", "Aplanarity_ZZ_tagFirst_2b1c_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_ZZ_tagFirst_2b1c_17->SetHighLightColor(2);
   Aplanarity_ZZ_tagFirst_2b1c_17->Range(-0.2,-29.64892,1.133333,266.8403);
   Aplanarity_ZZ_tagFirst_2b1c_17->SetFillColor(0);
   Aplanarity_ZZ_tagFirst_2b1c_17->SetFillStyle(4000);
   Aplanarity_ZZ_tagFirst_2b1c_17->SetBorderMode(0);
   Aplanarity_ZZ_tagFirst_2b1c_17->SetBorderSize(2);
   Aplanarity_ZZ_tagFirst_2b1c_17->SetLeftMargin(0.15);
   Aplanarity_ZZ_tagFirst_2b1c_17->SetFrameFillStyle(1000);
   Aplanarity_ZZ_tagFirst_2b1c_17->SetFrameBorderMode(0);
   Aplanarity_ZZ_tagFirst_2b1c_17->SetFrameFillStyle(1000);
   Aplanarity_ZZ_tagFirst_2b1c_17->SetFrameBorderMode(0);
   
   TH1D *VH_tagFirst_2b1c_Aplanarity__2639 = new TH1D("VH_tagFirst_2b1c_Aplanarity__2639","",50,0,1);
   VH_tagFirst_2b1c_Aplanarity__2639->SetBinContent(1,225.8965);
   VH_tagFirst_2b1c_Aplanarity__2639->SetBinContent(2,22.04938);
   VH_tagFirst_2b1c_Aplanarity__2639->SetBinContent(3,8.556113);
   VH_tagFirst_2b1c_Aplanarity__2639->SetBinContent(4,1.273786);
   VH_tagFirst_2b1c_Aplanarity__2639->SetBinContent(5,0.3244393);
   VH_tagFirst_2b1c_Aplanarity__2639->SetBinContent(7,0.3839143);
   VH_tagFirst_2b1c_Aplanarity__2639->SetBinError(1,9.046395);
   VH_tagFirst_2b1c_Aplanarity__2639->SetBinError(2,2.717011);
   VH_tagFirst_2b1c_Aplanarity__2639->SetBinError(3,1.95208);
   VH_tagFirst_2b1c_Aplanarity__2639->SetBinError(4,0.545282);
   VH_tagFirst_2b1c_Aplanarity__2639->SetBinError(5,0.229434);
   VH_tagFirst_2b1c_Aplanarity__2639->SetBinError(7,0.2717453);
   VH_tagFirst_2b1c_Aplanarity__2639->SetEntries(992);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagFirst_2b1c_Aplanarity__2639->SetLineColor(ci);
   VH_tagFirst_2b1c_Aplanarity__2639->GetXaxis()->SetTitle("Aplanarity");
   VH_tagFirst_2b1c_Aplanarity__2639->GetXaxis()->SetRange(1,50);
   VH_tagFirst_2b1c_Aplanarity__2639->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_2b1c_Aplanarity__2639->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_2b1c_Aplanarity__2639->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_2b1c_Aplanarity__2639->GetYaxis()->SetTitle("Events/0.02");
   VH_tagFirst_2b1c_Aplanarity__2639->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_2b1c_Aplanarity__2639->GetYaxis()->SetLabelSize(0.05);
   VH_tagFirst_2b1c_Aplanarity__2639->GetYaxis()->SetTitleSize(0.057);
   VH_tagFirst_2b1c_Aplanarity__2639->GetYaxis()->SetTitleOffset(1.2);
   VH_tagFirst_2b1c_Aplanarity__2639->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_2b1c_Aplanarity__2639->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_2b1c_Aplanarity__2639->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_2b1c_Aplanarity__2639->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_2b1c_Aplanarity__2639->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_ZZ_tagFirst_2b1c_17->Modified();
   Aplanarity_ZZ_tagFirst_2b1c_17->cd();
   Aplanarity_ZZ_tagFirst_2b1c_17->SetSelected(Aplanarity_ZZ_tagFirst_2b1c_17);
}
