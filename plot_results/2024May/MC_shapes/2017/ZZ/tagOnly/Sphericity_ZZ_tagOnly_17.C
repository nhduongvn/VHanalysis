#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_ZZ_tagOnly_17()
{
//=========Macro generated from canvas: Sphericity_ZZ_tagOnly_17/Sphericity_ZZ_tagOnly_17
//=========  (Fri May 24 12:42:21 2024) by ROOT version 6.28/10
   TCanvas *Sphericity_ZZ_tagOnly_17 = new TCanvas("Sphericity_ZZ_tagOnly_17", "Sphericity_ZZ_tagOnly_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_ZZ_tagOnly_17->SetHighLightColor(2);
   Sphericity_ZZ_tagOnly_17->Range(-0.2,-5.087625,1.133333,45.78863);
   Sphericity_ZZ_tagOnly_17->SetFillColor(0);
   Sphericity_ZZ_tagOnly_17->SetFillStyle(4000);
   Sphericity_ZZ_tagOnly_17->SetBorderMode(0);
   Sphericity_ZZ_tagOnly_17->SetBorderSize(2);
   Sphericity_ZZ_tagOnly_17->SetLeftMargin(0.15);
   Sphericity_ZZ_tagOnly_17->SetFrameFillStyle(1000);
   Sphericity_ZZ_tagOnly_17->SetFrameBorderMode(0);
   Sphericity_ZZ_tagOnly_17->SetFrameFillStyle(1000);
   Sphericity_ZZ_tagOnly_17->SetFrameBorderMode(0);
   
   TH1D *VH_tagOnly_Sphericity__1169 = new TH1D("VH_tagOnly_Sphericity__1169","",25,0,1);
   VH_tagOnly_Sphericity__1169->SetBinContent(1,38.76286);
   VH_tagOnly_Sphericity__1169->SetBinContent(2,29.24955);
   VH_tagOnly_Sphericity__1169->SetBinContent(3,18.92132);
   VH_tagOnly_Sphericity__1169->SetBinContent(4,11.24562);
   VH_tagOnly_Sphericity__1169->SetBinContent(5,9.430886);
   VH_tagOnly_Sphericity__1169->SetBinContent(6,4.027814);
   VH_tagOnly_Sphericity__1169->SetBinContent(7,1.538061);
   VH_tagOnly_Sphericity__1169->SetBinContent(8,1.813664);
   VH_tagOnly_Sphericity__1169->SetBinContent(9,0.1332558);
   VH_tagOnly_Sphericity__1169->SetBinContent(10,0.31611);
   VH_tagOnly_Sphericity__1169->SetBinContent(13,0.2638448);
   VH_tagOnly_Sphericity__1169->SetBinError(1,3.426633);
   VH_tagOnly_Sphericity__1169->SetBinError(2,3.160518);
   VH_tagOnly_Sphericity__1169->SetBinError(3,3.042988);
   VH_tagOnly_Sphericity__1169->SetBinError(4,2.015457);
   VH_tagOnly_Sphericity__1169->SetBinError(5,1.874486);
   VH_tagOnly_Sphericity__1169->SetBinError(6,1.095744);
   VH_tagOnly_Sphericity__1169->SetBinError(7,0.8651514);
   VH_tagOnly_Sphericity__1169->SetBinError(8,0.7955888);
   VH_tagOnly_Sphericity__1169->SetBinError(9,0.1332558);
   VH_tagOnly_Sphericity__1169->SetBinError(10,0.2423187);
   VH_tagOnly_Sphericity__1169->SetBinError(13,0.2638448);
   VH_tagOnly_Sphericity__1169->SetEntries(445);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagOnly_Sphericity__1169->SetLineColor(ci);
   VH_tagOnly_Sphericity__1169->GetXaxis()->SetTitle("Sphericity");
   VH_tagOnly_Sphericity__1169->GetXaxis()->SetRange(1,25);
   VH_tagOnly_Sphericity__1169->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_Sphericity__1169->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_Sphericity__1169->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_Sphericity__1169->GetYaxis()->SetTitle("Events/0.04");
   VH_tagOnly_Sphericity__1169->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_Sphericity__1169->GetYaxis()->SetLabelSize(0.05);
   VH_tagOnly_Sphericity__1169->GetYaxis()->SetTitleSize(0.057);
   VH_tagOnly_Sphericity__1169->GetYaxis()->SetTitleOffset(1.2);
   VH_tagOnly_Sphericity__1169->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_Sphericity__1169->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_Sphericity__1169->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_Sphericity__1169->GetZaxis()->SetTitleFont(42);
   VH_tagOnly_Sphericity__1169->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_ZZ_tagOnly_17->Modified();
   Sphericity_ZZ_tagOnly_17->cd();
   Sphericity_ZZ_tagOnly_17->SetSelected(Sphericity_ZZ_tagOnly_17);
}
