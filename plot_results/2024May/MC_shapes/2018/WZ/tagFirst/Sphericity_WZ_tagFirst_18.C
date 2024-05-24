#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_WZ_tagFirst_18()
{
//=========Macro generated from canvas: Sphericity_WZ_tagFirst_18/Sphericity_WZ_tagFirst_18
//=========  (Fri May 24 12:42:11 2024) by ROOT version 6.28/10
   TCanvas *Sphericity_WZ_tagFirst_18 = new TCanvas("Sphericity_WZ_tagFirst_18", "Sphericity_WZ_tagFirst_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_WZ_tagFirst_18->SetHighLightColor(2);
   Sphericity_WZ_tagFirst_18->Range(-0.2,-14.47525,1.133333,130.2772);
   Sphericity_WZ_tagFirst_18->SetFillColor(0);
   Sphericity_WZ_tagFirst_18->SetFillStyle(4000);
   Sphericity_WZ_tagFirst_18->SetBorderMode(0);
   Sphericity_WZ_tagFirst_18->SetBorderSize(2);
   Sphericity_WZ_tagFirst_18->SetLeftMargin(0.15);
   Sphericity_WZ_tagFirst_18->SetFrameFillStyle(1000);
   Sphericity_WZ_tagFirst_18->SetFrameBorderMode(0);
   Sphericity_WZ_tagFirst_18->SetFrameFillStyle(1000);
   Sphericity_WZ_tagFirst_18->SetFrameBorderMode(0);
   
   TH1D *VH_tagFirst_Sphericity__447 = new TH1D("VH_tagFirst_Sphericity__447","",25,0,1);
   VH_tagFirst_Sphericity__447->SetBinContent(1,110.2876);
   VH_tagFirst_Sphericity__447->SetBinContent(2,83.83178);
   VH_tagFirst_Sphericity__447->SetBinContent(3,45.12362);
   VH_tagFirst_Sphericity__447->SetBinContent(4,30.59959);
   VH_tagFirst_Sphericity__447->SetBinContent(5,23.93132);
   VH_tagFirst_Sphericity__447->SetBinContent(6,11.9136);
   VH_tagFirst_Sphericity__447->SetBinContent(7,6.616306);
   VH_tagFirst_Sphericity__447->SetBinContent(8,2.435477);
   VH_tagFirst_Sphericity__447->SetBinContent(9,1.453743);
   VH_tagFirst_Sphericity__447->SetBinContent(10,3.418008);
   VH_tagFirst_Sphericity__447->SetBinContent(11,2.299802);
   VH_tagFirst_Sphericity__447->SetBinContent(12,0.3738044);
   VH_tagFirst_Sphericity__447->SetBinContent(14,0.9534691);
   VH_tagFirst_Sphericity__447->SetBinContent(15,0.585561);
   VH_tagFirst_Sphericity__447->SetBinError(1,9.111053);
   VH_tagFirst_Sphericity__447->SetBinError(2,8.295066);
   VH_tagFirst_Sphericity__447->SetBinError(3,6.012677);
   VH_tagFirst_Sphericity__447->SetBinError(4,4.584605);
   VH_tagFirst_Sphericity__447->SetBinError(5,6.399968);
   VH_tagFirst_Sphericity__447->SetBinError(6,3.409294);
   VH_tagFirst_Sphericity__447->SetBinError(7,2.024816);
   VH_tagFirst_Sphericity__447->SetBinError(8,1.291996);
   VH_tagFirst_Sphericity__447->SetBinError(9,1.069379);
   VH_tagFirst_Sphericity__447->SetBinError(10,1.81036);
   VH_tagFirst_Sphericity__447->SetBinError(11,1.451651);
   VH_tagFirst_Sphericity__447->SetBinError(12,0.3738044);
   VH_tagFirst_Sphericity__447->SetBinError(14,0.9534691);
   VH_tagFirst_Sphericity__447->SetBinError(15,0.585561);
   VH_tagFirst_Sphericity__447->SetEntries(523);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagFirst_Sphericity__447->SetLineColor(ci);
   VH_tagFirst_Sphericity__447->GetXaxis()->SetTitle("Sphericity");
   VH_tagFirst_Sphericity__447->GetXaxis()->SetRange(1,25);
   VH_tagFirst_Sphericity__447->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Sphericity__447->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Sphericity__447->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Sphericity__447->GetYaxis()->SetTitle("Events/0.04");
   VH_tagFirst_Sphericity__447->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Sphericity__447->GetYaxis()->SetLabelSize(0.05);
   VH_tagFirst_Sphericity__447->GetYaxis()->SetTitleSize(0.057);
   VH_tagFirst_Sphericity__447->GetYaxis()->SetTitleOffset(1.2);
   VH_tagFirst_Sphericity__447->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Sphericity__447->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Sphericity__447->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Sphericity__447->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_Sphericity__447->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_WZ_tagFirst_18->Modified();
   Sphericity_WZ_tagFirst_18->cd();
   Sphericity_WZ_tagFirst_18->SetSelected(Sphericity_WZ_tagFirst_18);
}
