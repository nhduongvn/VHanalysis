#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_ZJets_tagFirst_17()
{
//=========Macro generated from canvas: Sphericity_ZJets_tagFirst_17/Sphericity_ZJets_tagFirst_17
//=========  (Fri May 24 12:42:11 2024) by ROOT version 6.28/10
   TCanvas *Sphericity_ZJets_tagFirst_17 = new TCanvas("Sphericity_ZJets_tagFirst_17", "Sphericity_ZJets_tagFirst_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_ZJets_tagFirst_17->SetHighLightColor(2);
   Sphericity_ZJets_tagFirst_17->Range(-0.2,-575.9321,1.133333,5183.389);
   Sphericity_ZJets_tagFirst_17->SetFillColor(0);
   Sphericity_ZJets_tagFirst_17->SetFillStyle(4000);
   Sphericity_ZJets_tagFirst_17->SetBorderMode(0);
   Sphericity_ZJets_tagFirst_17->SetBorderSize(2);
   Sphericity_ZJets_tagFirst_17->SetLeftMargin(0.15);
   Sphericity_ZJets_tagFirst_17->SetFrameFillStyle(1000);
   Sphericity_ZJets_tagFirst_17->SetFrameBorderMode(0);
   Sphericity_ZJets_tagFirst_17->SetFrameFillStyle(1000);
   Sphericity_ZJets_tagFirst_17->SetFrameBorderMode(0);
   
   TH1D *VH_tagFirst_Sphericity__434 = new TH1D("VH_tagFirst_Sphericity__434","",25,0,1);
   VH_tagFirst_Sphericity__434->SetBinContent(1,4388.054);
   VH_tagFirst_Sphericity__434->SetBinContent(2,3242.776);
   VH_tagFirst_Sphericity__434->SetBinContent(3,1844.794);
   VH_tagFirst_Sphericity__434->SetBinContent(4,1129.302);
   VH_tagFirst_Sphericity__434->SetBinContent(5,640.395);
   VH_tagFirst_Sphericity__434->SetBinContent(6,364.4437);
   VH_tagFirst_Sphericity__434->SetBinContent(7,197.1409);
   VH_tagFirst_Sphericity__434->SetBinContent(8,120.6469);
   VH_tagFirst_Sphericity__434->SetBinContent(9,71.10062);
   VH_tagFirst_Sphericity__434->SetBinContent(10,53.62366);
   VH_tagFirst_Sphericity__434->SetBinContent(11,39.0834);
   VH_tagFirst_Sphericity__434->SetBinContent(12,28.57234);
   VH_tagFirst_Sphericity__434->SetBinContent(13,22.74972);
   VH_tagFirst_Sphericity__434->SetBinContent(14,17.60949);
   VH_tagFirst_Sphericity__434->SetBinContent(15,14.85051);
   VH_tagFirst_Sphericity__434->SetBinContent(16,7.559423);
   VH_tagFirst_Sphericity__434->SetBinContent(17,11.05075);
   VH_tagFirst_Sphericity__434->SetBinContent(18,5.769647);
   VH_tagFirst_Sphericity__434->SetBinContent(19,1.602621);
   VH_tagFirst_Sphericity__434->SetBinContent(20,1.065093);
   VH_tagFirst_Sphericity__434->SetBinContent(21,0.1803689);
   VH_tagFirst_Sphericity__434->SetBinError(1,43.92028);
   VH_tagFirst_Sphericity__434->SetBinError(2,42.40082);
   VH_tagFirst_Sphericity__434->SetBinError(3,28.1723);
   VH_tagFirst_Sphericity__434->SetBinError(4,25.6343);
   VH_tagFirst_Sphericity__434->SetBinError(5,14.62988);
   VH_tagFirst_Sphericity__434->SetBinError(6,13.95139);
   VH_tagFirst_Sphericity__434->SetBinError(7,9.620525);
   VH_tagFirst_Sphericity__434->SetBinError(8,5.708402);
   VH_tagFirst_Sphericity__434->SetBinError(9,4.068751);
   VH_tagFirst_Sphericity__434->SetBinError(10,3.535815);
   VH_tagFirst_Sphericity__434->SetBinError(11,2.855665);
   VH_tagFirst_Sphericity__434->SetBinError(12,2.065087);
   VH_tagFirst_Sphericity__434->SetBinError(13,2.000782);
   VH_tagFirst_Sphericity__434->SetBinError(14,1.671759);
   VH_tagFirst_Sphericity__434->SetBinError(15,1.530574);
   VH_tagFirst_Sphericity__434->SetBinError(16,0.9803397);
   VH_tagFirst_Sphericity__434->SetBinError(17,3.629156);
   VH_tagFirst_Sphericity__434->SetBinError(18,1.079037);
   VH_tagFirst_Sphericity__434->SetBinError(19,0.5235552);
   VH_tagFirst_Sphericity__434->SetBinError(20,0.4066955);
   VH_tagFirst_Sphericity__434->SetBinError(21,0.1057716);
   VH_tagFirst_Sphericity__434->SetEntries(95670);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagFirst_Sphericity__434->SetLineColor(ci);
   VH_tagFirst_Sphericity__434->GetXaxis()->SetTitle("Sphericity");
   VH_tagFirst_Sphericity__434->GetXaxis()->SetRange(1,25);
   VH_tagFirst_Sphericity__434->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Sphericity__434->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Sphericity__434->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Sphericity__434->GetYaxis()->SetTitle("Events/0.04");
   VH_tagFirst_Sphericity__434->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Sphericity__434->GetYaxis()->SetLabelSize(0.05);
   VH_tagFirst_Sphericity__434->GetYaxis()->SetTitleSize(0.057);
   VH_tagFirst_Sphericity__434->GetYaxis()->SetTitleOffset(1.2);
   VH_tagFirst_Sphericity__434->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Sphericity__434->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Sphericity__434->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Sphericity__434->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_Sphericity__434->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_ZJets_tagFirst_17->Modified();
   Sphericity_ZJets_tagFirst_17->cd();
   Sphericity_ZJets_tagFirst_17->SetSelected(Sphericity_ZJets_tagFirst_17);
}
