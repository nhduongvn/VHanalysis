#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_ZJets_tagFirst_2b1c_18_logY()
{
//=========Macro generated from canvas: Sphericity_ZJets_tagFirst_2b1c_18/Sphericity_ZJets_tagFirst_2b1c_18
//=========  (Thu May 23 20:49:02 2024) by ROOT version 6.28/10
   TCanvas *Sphericity_ZJets_tagFirst_2b1c_18 = new TCanvas("Sphericity_ZJets_tagFirst_2b1c_18", "Sphericity_ZJets_tagFirst_2b1c_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_ZJets_tagFirst_2b1c_18->SetHighLightColor(2);
   Sphericity_ZJets_tagFirst_2b1c_18->Range(-0.2,-1.370395,1.133333,5.225529);
   Sphericity_ZJets_tagFirst_2b1c_18->SetFillColor(0);
   Sphericity_ZJets_tagFirst_2b1c_18->SetFillStyle(4000);
   Sphericity_ZJets_tagFirst_2b1c_18->SetBorderMode(0);
   Sphericity_ZJets_tagFirst_2b1c_18->SetBorderSize(2);
   Sphericity_ZJets_tagFirst_2b1c_18->SetLogy();
   Sphericity_ZJets_tagFirst_2b1c_18->SetLeftMargin(0.15);
   Sphericity_ZJets_tagFirst_2b1c_18->SetFrameFillStyle(1000);
   Sphericity_ZJets_tagFirst_2b1c_18->SetFrameBorderMode(0);
   Sphericity_ZJets_tagFirst_2b1c_18->SetFrameFillStyle(1000);
   Sphericity_ZJets_tagFirst_2b1c_18->SetFrameBorderMode(0);
   
   TH1D *VH_tagFirst_2b1c_Sphericity__2595 = new TH1D("VH_tagFirst_2b1c_Sphericity__2595","",25,0,1);
   VH_tagFirst_2b1c_Sphericity__2595->SetBinContent(1,19426.19);
   VH_tagFirst_2b1c_Sphericity__2595->SetBinContent(2,14980.18);
   VH_tagFirst_2b1c_Sphericity__2595->SetBinContent(3,8945.789);
   VH_tagFirst_2b1c_Sphericity__2595->SetBinContent(4,5231.086);
   VH_tagFirst_2b1c_Sphericity__2595->SetBinContent(5,3026.388);
   VH_tagFirst_2b1c_Sphericity__2595->SetBinContent(6,1549.035);
   VH_tagFirst_2b1c_Sphericity__2595->SetBinContent(7,807.4573);
   VH_tagFirst_2b1c_Sphericity__2595->SetBinContent(8,470.6236);
   VH_tagFirst_2b1c_Sphericity__2595->SetBinContent(9,298.8755);
   VH_tagFirst_2b1c_Sphericity__2595->SetBinContent(10,223.8845);
   VH_tagFirst_2b1c_Sphericity__2595->SetBinContent(11,157.9084);
   VH_tagFirst_2b1c_Sphericity__2595->SetBinContent(12,115.7697);
   VH_tagFirst_2b1c_Sphericity__2595->SetBinContent(13,88.62301);
   VH_tagFirst_2b1c_Sphericity__2595->SetBinContent(14,62.36452);
   VH_tagFirst_2b1c_Sphericity__2595->SetBinContent(15,51.08096);
   VH_tagFirst_2b1c_Sphericity__2595->SetBinContent(16,44.29701);
   VH_tagFirst_2b1c_Sphericity__2595->SetBinContent(17,29.78936);
   VH_tagFirst_2b1c_Sphericity__2595->SetBinContent(18,21.2986);
   VH_tagFirst_2b1c_Sphericity__2595->SetBinContent(19,11.73676);
   VH_tagFirst_2b1c_Sphericity__2595->SetBinContent(20,2.956993);
   VH_tagFirst_2b1c_Sphericity__2595->SetBinContent(21,2.180694);
   VH_tagFirst_2b1c_Sphericity__2595->SetBinContent(22,0.389249);
   VH_tagFirst_2b1c_Sphericity__2595->SetBinContent(23,1.364529);
   VH_tagFirst_2b1c_Sphericity__2595->SetBinError(1,130.2869);
   VH_tagFirst_2b1c_Sphericity__2595->SetBinError(2,128.4005);
   VH_tagFirst_2b1c_Sphericity__2595->SetBinError(3,122.5458);
   VH_tagFirst_2b1c_Sphericity__2595->SetBinError(4,68.2393);
   VH_tagFirst_2b1c_Sphericity__2595->SetBinError(5,46.82714);
   VH_tagFirst_2b1c_Sphericity__2595->SetBinError(6,30.32998);
   VH_tagFirst_2b1c_Sphericity__2595->SetBinError(7,23.36252);
   VH_tagFirst_2b1c_Sphericity__2595->SetBinError(8,18.68027);
   VH_tagFirst_2b1c_Sphericity__2595->SetBinError(9,12.70461);
   VH_tagFirst_2b1c_Sphericity__2595->SetBinError(10,16.30376);
   VH_tagFirst_2b1c_Sphericity__2595->SetBinError(11,8.132723);
   VH_tagFirst_2b1c_Sphericity__2595->SetBinError(12,5.968234);
   VH_tagFirst_2b1c_Sphericity__2595->SetBinError(13,7.653571);
   VH_tagFirst_2b1c_Sphericity__2595->SetBinError(14,4.769986);
   VH_tagFirst_2b1c_Sphericity__2595->SetBinError(15,4.027522);
   VH_tagFirst_2b1c_Sphericity__2595->SetBinError(16,4.950475);
   VH_tagFirst_2b1c_Sphericity__2595->SetBinError(17,3.507204);
   VH_tagFirst_2b1c_Sphericity__2595->SetBinError(18,3.016809);
   VH_tagFirst_2b1c_Sphericity__2595->SetBinError(19,2.612603);
   VH_tagFirst_2b1c_Sphericity__2595->SetBinError(20,0.9435096);
   VH_tagFirst_2b1c_Sphericity__2595->SetBinError(21,1.106835);
   VH_tagFirst_2b1c_Sphericity__2595->SetBinError(22,0.2265629);
   VH_tagFirst_2b1c_Sphericity__2595->SetBinError(23,1.364529);
   VH_tagFirst_2b1c_Sphericity__2595->SetEntries(206013);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagFirst_2b1c_Sphericity__2595->SetLineColor(ci);
   VH_tagFirst_2b1c_Sphericity__2595->GetXaxis()->SetTitle("Sphericity");
   VH_tagFirst_2b1c_Sphericity__2595->GetXaxis()->SetRange(1,25);
   VH_tagFirst_2b1c_Sphericity__2595->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_2b1c_Sphericity__2595->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_2b1c_Sphericity__2595->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_2b1c_Sphericity__2595->GetYaxis()->SetTitle("Events/0.04");
   VH_tagFirst_2b1c_Sphericity__2595->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_2b1c_Sphericity__2595->GetYaxis()->SetLabelSize(0.05);
   VH_tagFirst_2b1c_Sphericity__2595->GetYaxis()->SetTitleSize(0.057);
   VH_tagFirst_2b1c_Sphericity__2595->GetYaxis()->SetTitleOffset(1.2);
   VH_tagFirst_2b1c_Sphericity__2595->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_2b1c_Sphericity__2595->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_2b1c_Sphericity__2595->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_2b1c_Sphericity__2595->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_2b1c_Sphericity__2595->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_ZJets_tagFirst_2b1c_18->Modified();
   Sphericity_ZJets_tagFirst_2b1c_18->cd();
   Sphericity_ZJets_tagFirst_2b1c_18->SetSelected(Sphericity_ZJets_tagFirst_2b1c_18);
}
