#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_WZ_tagFirst_2b1c_18()
{
//=========Macro generated from canvas: Sphericity_WZ_tagFirst_2b1c_18/Sphericity_WZ_tagFirst_2b1c_18
//=========  (Fri May 24 12:42:43 2024) by ROOT version 6.28/10
   TCanvas *Sphericity_WZ_tagFirst_2b1c_18 = new TCanvas("Sphericity_WZ_tagFirst_2b1c_18", "Sphericity_WZ_tagFirst_2b1c_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_WZ_tagFirst_2b1c_18->SetHighLightColor(2);
   Sphericity_WZ_tagFirst_2b1c_18->Range(-0.2,-29.86804,1.133333,268.8124);
   Sphericity_WZ_tagFirst_2b1c_18->SetFillColor(0);
   Sphericity_WZ_tagFirst_2b1c_18->SetFillStyle(4000);
   Sphericity_WZ_tagFirst_2b1c_18->SetBorderMode(0);
   Sphericity_WZ_tagFirst_2b1c_18->SetBorderSize(2);
   Sphericity_WZ_tagFirst_2b1c_18->SetLeftMargin(0.15);
   Sphericity_WZ_tagFirst_2b1c_18->SetFrameFillStyle(1000);
   Sphericity_WZ_tagFirst_2b1c_18->SetFrameBorderMode(0);
   Sphericity_WZ_tagFirst_2b1c_18->SetFrameFillStyle(1000);
   Sphericity_WZ_tagFirst_2b1c_18->SetFrameBorderMode(0);
   
   TH1D *VH_tagFirst_2b1c_Sphericity__2607 = new TH1D("VH_tagFirst_2b1c_Sphericity__2607","",25,0,1);
   VH_tagFirst_2b1c_Sphericity__2607->SetBinContent(1,227.566);
   VH_tagFirst_2b1c_Sphericity__2607->SetBinContent(2,168.9494);
   VH_tagFirst_2b1c_Sphericity__2607->SetBinContent(3,82.9743);
   VH_tagFirst_2b1c_Sphericity__2607->SetBinContent(4,62.94237);
   VH_tagFirst_2b1c_Sphericity__2607->SetBinContent(5,45.22764);
   VH_tagFirst_2b1c_Sphericity__2607->SetBinContent(6,28.91468);
   VH_tagFirst_2b1c_Sphericity__2607->SetBinContent(7,8.911804);
   VH_tagFirst_2b1c_Sphericity__2607->SetBinContent(8,5.489019);
   VH_tagFirst_2b1c_Sphericity__2607->SetBinContent(9,2.795062);
   VH_tagFirst_2b1c_Sphericity__2607->SetBinContent(10,3.971691);
   VH_tagFirst_2b1c_Sphericity__2607->SetBinContent(11,1.936229);
   VH_tagFirst_2b1c_Sphericity__2607->SetBinContent(12,1.698432);
   VH_tagFirst_2b1c_Sphericity__2607->SetBinContent(14,1.910916);
   VH_tagFirst_2b1c_Sphericity__2607->SetBinContent(15,0.585561);
   VH_tagFirst_2b1c_Sphericity__2607->SetBinContent(17,0.5198154);
   VH_tagFirst_2b1c_Sphericity__2607->SetBinContent(19,0.3847792);
   VH_tagFirst_2b1c_Sphericity__2607->SetBinError(1,13.46974);
   VH_tagFirst_2b1c_Sphericity__2607->SetBinError(2,10.91229);
   VH_tagFirst_2b1c_Sphericity__2607->SetBinError(3,7.523733);
   VH_tagFirst_2b1c_Sphericity__2607->SetBinError(4,6.450824);
   VH_tagFirst_2b1c_Sphericity__2607->SetBinError(5,7.379152);
   VH_tagFirst_2b1c_Sphericity__2607->SetBinError(6,4.992514);
   VH_tagFirst_2b1c_Sphericity__2607->SetBinError(7,2.276356);
   VH_tagFirst_2b1c_Sphericity__2607->SetBinError(8,1.943669);
   VH_tagFirst_2b1c_Sphericity__2607->SetBinError(9,1.496089);
   VH_tagFirst_2b1c_Sphericity__2607->SetBinError(10,1.893137);
   VH_tagFirst_2b1c_Sphericity__2607->SetBinError(11,1.405385);
   VH_tagFirst_2b1c_Sphericity__2607->SetBinError(12,1.05065);
   VH_tagFirst_2b1c_Sphericity__2607->SetBinError(14,1.171334);
   VH_tagFirst_2b1c_Sphericity__2607->SetBinError(15,0.585561);
   VH_tagFirst_2b1c_Sphericity__2607->SetBinError(17,0.5198154);
   VH_tagFirst_2b1c_Sphericity__2607->SetBinError(19,0.3847792);
   VH_tagFirst_2b1c_Sphericity__2607->SetEntries(1137);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagFirst_2b1c_Sphericity__2607->SetLineColor(ci);
   VH_tagFirst_2b1c_Sphericity__2607->GetXaxis()->SetTitle("Sphericity");
   VH_tagFirst_2b1c_Sphericity__2607->GetXaxis()->SetRange(1,25);
   VH_tagFirst_2b1c_Sphericity__2607->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_2b1c_Sphericity__2607->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_2b1c_Sphericity__2607->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_2b1c_Sphericity__2607->GetYaxis()->SetTitle("Events/0.04");
   VH_tagFirst_2b1c_Sphericity__2607->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_2b1c_Sphericity__2607->GetYaxis()->SetLabelSize(0.05);
   VH_tagFirst_2b1c_Sphericity__2607->GetYaxis()->SetTitleSize(0.057);
   VH_tagFirst_2b1c_Sphericity__2607->GetYaxis()->SetTitleOffset(1.2);
   VH_tagFirst_2b1c_Sphericity__2607->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_2b1c_Sphericity__2607->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_2b1c_Sphericity__2607->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_2b1c_Sphericity__2607->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_2b1c_Sphericity__2607->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_WZ_tagFirst_2b1c_18->Modified();
   Sphericity_WZ_tagFirst_2b1c_18->cd();
   Sphericity_WZ_tagFirst_2b1c_18->SetSelected(Sphericity_WZ_tagFirst_2b1c_18);
}
