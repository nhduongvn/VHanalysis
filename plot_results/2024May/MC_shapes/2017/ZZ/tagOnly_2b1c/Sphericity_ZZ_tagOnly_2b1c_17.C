#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_ZZ_tagOnly_2b1c_17()
{
//=========Macro generated from canvas: Sphericity_ZZ_tagOnly_2b1c_17/Sphericity_ZZ_tagOnly_2b1c_17
//=========  (Fri May 24 12:42:55 2024) by ROOT version 6.28/10
   TCanvas *Sphericity_ZZ_tagOnly_2b1c_17 = new TCanvas("Sphericity_ZZ_tagOnly_2b1c_17", "Sphericity_ZZ_tagOnly_2b1c_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_ZZ_tagOnly_2b1c_17->SetHighLightColor(2);
   Sphericity_ZZ_tagOnly_2b1c_17->Range(-0.2,-13.68465,1.133333,123.1619);
   Sphericity_ZZ_tagOnly_2b1c_17->SetFillColor(0);
   Sphericity_ZZ_tagOnly_2b1c_17->SetFillStyle(4000);
   Sphericity_ZZ_tagOnly_2b1c_17->SetBorderMode(0);
   Sphericity_ZZ_tagOnly_2b1c_17->SetBorderSize(2);
   Sphericity_ZZ_tagOnly_2b1c_17->SetLeftMargin(0.15);
   Sphericity_ZZ_tagOnly_2b1c_17->SetFrameFillStyle(1000);
   Sphericity_ZZ_tagOnly_2b1c_17->SetFrameBorderMode(0);
   Sphericity_ZZ_tagOnly_2b1c_17->SetFrameFillStyle(1000);
   Sphericity_ZZ_tagOnly_2b1c_17->SetFrameBorderMode(0);
   
   TH1D *VH_tagOnly_2b1c_Sphericity__3329 = new TH1D("VH_tagOnly_2b1c_Sphericity__3329","",25,0,1);
   VH_tagOnly_2b1c_Sphericity__3329->SetBinContent(1,104.264);
   VH_tagOnly_2b1c_Sphericity__3329->SetBinContent(2,81.24993);
   VH_tagOnly_2b1c_Sphericity__3329->SetBinContent(3,52.82952);
   VH_tagOnly_2b1c_Sphericity__3329->SetBinContent(4,33.93865);
   VH_tagOnly_2b1c_Sphericity__3329->SetBinContent(5,25.59822);
   VH_tagOnly_2b1c_Sphericity__3329->SetBinContent(6,11.49091);
   VH_tagOnly_2b1c_Sphericity__3329->SetBinContent(7,3.019327);
   VH_tagOnly_2b1c_Sphericity__3329->SetBinContent(8,1.971237);
   VH_tagOnly_2b1c_Sphericity__3329->SetBinContent(9,1.299554);
   VH_tagOnly_2b1c_Sphericity__3329->SetBinContent(10,0.31611);
   VH_tagOnly_2b1c_Sphericity__3329->SetBinContent(12,0.3321952);
   VH_tagOnly_2b1c_Sphericity__3329->SetBinContent(13,0.2638448);
   VH_tagOnly_2b1c_Sphericity__3329->SetBinContent(15,0.2268378);
   VH_tagOnly_2b1c_Sphericity__3329->SetBinError(1,5.798978);
   VH_tagOnly_2b1c_Sphericity__3329->SetBinError(2,5.330007);
   VH_tagOnly_2b1c_Sphericity__3329->SetBinError(3,4.480618);
   VH_tagOnly_2b1c_Sphericity__3329->SetBinError(4,3.583015);
   VH_tagOnly_2b1c_Sphericity__3329->SetBinError(5,3.136675);
   VH_tagOnly_2b1c_Sphericity__3329->SetBinError(6,1.959821);
   VH_tagOnly_2b1c_Sphericity__3329->SetBinError(7,1.03952);
   VH_tagOnly_2b1c_Sphericity__3329->SetBinError(8,0.811043);
   VH_tagOnly_2b1c_Sphericity__3329->SetBinError(9,0.7669782);
   VH_tagOnly_2b1c_Sphericity__3329->SetBinError(10,0.2423187);
   VH_tagOnly_2b1c_Sphericity__3329->SetBinError(12,0.2350537);
   VH_tagOnly_2b1c_Sphericity__3329->SetBinError(13,0.2638448);
   VH_tagOnly_2b1c_Sphericity__3329->SetBinError(15,0.2268378);
   VH_tagOnly_2b1c_Sphericity__3329->SetEntries(1231);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagOnly_2b1c_Sphericity__3329->SetLineColor(ci);
   VH_tagOnly_2b1c_Sphericity__3329->GetXaxis()->SetTitle("Sphericity");
   VH_tagOnly_2b1c_Sphericity__3329->GetXaxis()->SetRange(1,25);
   VH_tagOnly_2b1c_Sphericity__3329->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_2b1c_Sphericity__3329->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_2b1c_Sphericity__3329->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_2b1c_Sphericity__3329->GetYaxis()->SetTitle("Events/0.04");
   VH_tagOnly_2b1c_Sphericity__3329->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_2b1c_Sphericity__3329->GetYaxis()->SetLabelSize(0.05);
   VH_tagOnly_2b1c_Sphericity__3329->GetYaxis()->SetTitleSize(0.057);
   VH_tagOnly_2b1c_Sphericity__3329->GetYaxis()->SetTitleOffset(1.2);
   VH_tagOnly_2b1c_Sphericity__3329->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_2b1c_Sphericity__3329->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_2b1c_Sphericity__3329->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_2b1c_Sphericity__3329->GetZaxis()->SetTitleFont(42);
   VH_tagOnly_2b1c_Sphericity__3329->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_ZZ_tagOnly_2b1c_17->Modified();
   Sphericity_ZZ_tagOnly_2b1c_17->cd();
   Sphericity_ZZ_tagOnly_2b1c_17->SetSelected(Sphericity_ZZ_tagOnly_2b1c_17);
}
