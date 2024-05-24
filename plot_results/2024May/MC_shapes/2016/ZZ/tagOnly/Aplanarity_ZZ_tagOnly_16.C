#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_ZZ_tagOnly_16()
{
//=========Macro generated from canvas: Aplanarity_ZZ_tagOnly_16/Aplanarity_ZZ_tagOnly_16
//=========  (Fri May 24 12:42:22 2024) by ROOT version 6.28/10
   TCanvas *Aplanarity_ZZ_tagOnly_16 = new TCanvas("Aplanarity_ZZ_tagOnly_16", "Aplanarity_ZZ_tagOnly_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Aplanarity_ZZ_tagOnly_16->SetHighLightColor(2);
   Aplanarity_ZZ_tagOnly_16->Range(-0.2,-18.92481,1.133333,170.3233);
   Aplanarity_ZZ_tagOnly_16->SetFillColor(0);
   Aplanarity_ZZ_tagOnly_16->SetFillStyle(4000);
   Aplanarity_ZZ_tagOnly_16->SetBorderMode(0);
   Aplanarity_ZZ_tagOnly_16->SetBorderSize(2);
   Aplanarity_ZZ_tagOnly_16->SetLeftMargin(0.15);
   Aplanarity_ZZ_tagOnly_16->SetFrameFillStyle(1000);
   Aplanarity_ZZ_tagOnly_16->SetFrameBorderMode(0);
   Aplanarity_ZZ_tagOnly_16->SetFrameFillStyle(1000);
   Aplanarity_ZZ_tagOnly_16->SetFrameBorderMode(0);
   
   TH1D *VH_tagOnly_Aplanarity__1198 = new TH1D("VH_tagOnly_Aplanarity__1198","",50,0,1);
   VH_tagOnly_Aplanarity__1198->SetBinContent(1,144.189);
   VH_tagOnly_Aplanarity__1198->SetBinContent(2,16.87199);
   VH_tagOnly_Aplanarity__1198->SetBinContent(3,3.563198);
   VH_tagOnly_Aplanarity__1198->SetBinContent(4,1.237765);
   VH_tagOnly_Aplanarity__1198->SetBinContent(5,0.7960226);
   VH_tagOnly_Aplanarity__1198->SetBinContent(6,0.6878721);
   VH_tagOnly_Aplanarity__1198->SetBinContent(8,0.2290902);
   VH_tagOnly_Aplanarity__1198->SetBinError(1,5.527608);
   VH_tagOnly_Aplanarity__1198->SetBinError(2,1.863418);
   VH_tagOnly_Aplanarity__1198->SetBinError(3,0.8384271);
   VH_tagOnly_Aplanarity__1198->SetBinError(4,0.5120562);
   VH_tagOnly_Aplanarity__1198->SetBinError(5,0.4053771);
   VH_tagOnly_Aplanarity__1198->SetBinError(6,0.3518065);
   VH_tagOnly_Aplanarity__1198->SetBinError(8,0.2290902);
   VH_tagOnly_Aplanarity__1198->SetEntries(834);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagOnly_Aplanarity__1198->SetLineColor(ci);
   VH_tagOnly_Aplanarity__1198->GetXaxis()->SetTitle("Aplanarity");
   VH_tagOnly_Aplanarity__1198->GetXaxis()->SetRange(1,50);
   VH_tagOnly_Aplanarity__1198->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity__1198->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity__1198->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity__1198->GetYaxis()->SetTitle("Events/0.02");
   VH_tagOnly_Aplanarity__1198->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity__1198->GetYaxis()->SetLabelSize(0.05);
   VH_tagOnly_Aplanarity__1198->GetYaxis()->SetTitleSize(0.057);
   VH_tagOnly_Aplanarity__1198->GetYaxis()->SetTitleOffset(1.2);
   VH_tagOnly_Aplanarity__1198->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity__1198->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_Aplanarity__1198->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_Aplanarity__1198->GetZaxis()->SetTitleFont(42);
   VH_tagOnly_Aplanarity__1198->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_ZZ_tagOnly_16->Modified();
   Aplanarity_ZZ_tagOnly_16->cd();
   Aplanarity_ZZ_tagOnly_16->SetSelected(Aplanarity_ZZ_tagOnly_16);
}
