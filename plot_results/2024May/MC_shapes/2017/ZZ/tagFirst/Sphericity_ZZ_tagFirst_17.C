#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_ZZ_tagFirst_17()
{
//=========Macro generated from canvas: Sphericity_ZZ_tagFirst_17/Sphericity_ZZ_tagFirst_17
//=========  (Fri May 24 12:42:11 2024) by ROOT version 6.28/10
   TCanvas *Sphericity_ZZ_tagFirst_17 = new TCanvas("Sphericity_ZZ_tagFirst_17", "Sphericity_ZZ_tagFirst_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_ZZ_tagFirst_17->SetHighLightColor(2);
   Sphericity_ZZ_tagFirst_17->Range(-0.2,-5.320366,1.133333,47.88329);
   Sphericity_ZZ_tagFirst_17->SetFillColor(0);
   Sphericity_ZZ_tagFirst_17->SetFillStyle(4000);
   Sphericity_ZZ_tagFirst_17->SetBorderMode(0);
   Sphericity_ZZ_tagFirst_17->SetBorderSize(2);
   Sphericity_ZZ_tagFirst_17->SetLeftMargin(0.15);
   Sphericity_ZZ_tagFirst_17->SetFrameFillStyle(1000);
   Sphericity_ZZ_tagFirst_17->SetFrameBorderMode(0);
   Sphericity_ZZ_tagFirst_17->SetFrameFillStyle(1000);
   Sphericity_ZZ_tagFirst_17->SetFrameBorderMode(0);
   
   TH1D *VH_tagFirst_Sphericity__449 = new TH1D("VH_tagFirst_Sphericity__449","",25,0,1);
   VH_tagFirst_Sphericity__449->SetBinContent(1,40.53612);
   VH_tagFirst_Sphericity__449->SetBinContent(2,33.32263);
   VH_tagFirst_Sphericity__449->SetBinContent(3,20.77334);
   VH_tagFirst_Sphericity__449->SetBinContent(4,11.64564);
   VH_tagFirst_Sphericity__449->SetBinContent(5,11.07182);
   VH_tagFirst_Sphericity__449->SetBinContent(6,5.190129);
   VH_tagFirst_Sphericity__449->SetBinContent(7,2.227699);
   VH_tagFirst_Sphericity__449->SetBinContent(8,2.576281);
   VH_tagFirst_Sphericity__449->SetBinContent(9,0.415982);
   VH_tagFirst_Sphericity__449->SetBinContent(10,0.31611);
   VH_tagFirst_Sphericity__449->SetBinContent(13,0.2638448);
   VH_tagFirst_Sphericity__449->SetBinError(1,3.510343);
   VH_tagFirst_Sphericity__449->SetBinError(2,3.41638);
   VH_tagFirst_Sphericity__449->SetBinError(3,3.271969);
   VH_tagFirst_Sphericity__449->SetBinError(4,2.006497);
   VH_tagFirst_Sphericity__449->SetBinError(5,2.187516);
   VH_tagFirst_Sphericity__449->SetBinError(6,1.25066);
   VH_tagFirst_Sphericity__449->SetBinError(7,1.106385);
   VH_tagFirst_Sphericity__449->SetBinError(8,1.102064);
   VH_tagFirst_Sphericity__449->SetBinError(9,0.3125559);
   VH_tagFirst_Sphericity__449->SetBinError(10,0.2423187);
   VH_tagFirst_Sphericity__449->SetBinError(13,0.2638448);
   VH_tagFirst_Sphericity__449->SetEntries(481);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagFirst_Sphericity__449->SetLineColor(ci);
   VH_tagFirst_Sphericity__449->GetXaxis()->SetTitle("Sphericity");
   VH_tagFirst_Sphericity__449->GetXaxis()->SetRange(1,25);
   VH_tagFirst_Sphericity__449->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Sphericity__449->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Sphericity__449->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Sphericity__449->GetYaxis()->SetTitle("Events/0.04");
   VH_tagFirst_Sphericity__449->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Sphericity__449->GetYaxis()->SetLabelSize(0.05);
   VH_tagFirst_Sphericity__449->GetYaxis()->SetTitleSize(0.057);
   VH_tagFirst_Sphericity__449->GetYaxis()->SetTitleOffset(1.2);
   VH_tagFirst_Sphericity__449->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Sphericity__449->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Sphericity__449->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Sphericity__449->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_Sphericity__449->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_ZZ_tagFirst_17->Modified();
   Sphericity_ZZ_tagFirst_17->cd();
   Sphericity_ZZ_tagFirst_17->SetSelected(Sphericity_ZZ_tagFirst_17);
}
