#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_ZJets_tagFirst_18()
{
//=========Macro generated from canvas: Sphericity_ZJets_tagFirst_18/Sphericity_ZJets_tagFirst_18
//=========  (Fri May 24 12:42:11 2024) by ROOT version 6.28/10
   TCanvas *Sphericity_ZJets_tagFirst_18 = new TCanvas("Sphericity_ZJets_tagFirst_18", "Sphericity_ZJets_tagFirst_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_ZJets_tagFirst_18->SetHighLightColor(2);
   Sphericity_ZJets_tagFirst_18->Range(-0.2,-1210.378,1.133333,10893.4);
   Sphericity_ZJets_tagFirst_18->SetFillColor(0);
   Sphericity_ZJets_tagFirst_18->SetFillStyle(4000);
   Sphericity_ZJets_tagFirst_18->SetBorderMode(0);
   Sphericity_ZJets_tagFirst_18->SetBorderSize(2);
   Sphericity_ZJets_tagFirst_18->SetLeftMargin(0.15);
   Sphericity_ZJets_tagFirst_18->SetFrameFillStyle(1000);
   Sphericity_ZJets_tagFirst_18->SetFrameBorderMode(0);
   Sphericity_ZJets_tagFirst_18->SetFrameFillStyle(1000);
   Sphericity_ZJets_tagFirst_18->SetFrameBorderMode(0);
   
   TH1D *VH_tagFirst_Sphericity__435 = new TH1D("VH_tagFirst_Sphericity__435","",25,0,1);
   VH_tagFirst_Sphericity__435->SetBinContent(1,9221.93);
   VH_tagFirst_Sphericity__435->SetBinContent(2,6924.471);
   VH_tagFirst_Sphericity__435->SetBinContent(3,4081.746);
   VH_tagFirst_Sphericity__435->SetBinContent(4,2431.199);
   VH_tagFirst_Sphericity__435->SetBinContent(5,1416.019);
   VH_tagFirst_Sphericity__435->SetBinContent(6,769.4577);
   VH_tagFirst_Sphericity__435->SetBinContent(7,406.2394);
   VH_tagFirst_Sphericity__435->SetBinContent(8,247.0052);
   VH_tagFirst_Sphericity__435->SetBinContent(9,162.4497);
   VH_tagFirst_Sphericity__435->SetBinContent(10,122.8514);
   VH_tagFirst_Sphericity__435->SetBinContent(11,95.84699);
   VH_tagFirst_Sphericity__435->SetBinContent(12,66.93418);
   VH_tagFirst_Sphericity__435->SetBinContent(13,44.97689);
   VH_tagFirst_Sphericity__435->SetBinContent(14,29.41829);
   VH_tagFirst_Sphericity__435->SetBinContent(15,28.78401);
   VH_tagFirst_Sphericity__435->SetBinContent(16,19.42006);
   VH_tagFirst_Sphericity__435->SetBinContent(17,16.6781);
   VH_tagFirst_Sphericity__435->SetBinContent(18,11.6697);
   VH_tagFirst_Sphericity__435->SetBinContent(19,4.411235);
   VH_tagFirst_Sphericity__435->SetBinContent(20,1.434021);
   VH_tagFirst_Sphericity__435->SetBinContent(21,0.9932285);
   VH_tagFirst_Sphericity__435->SetBinContent(22,0.1315472);
   VH_tagFirst_Sphericity__435->SetBinContent(23,1.364529);
   VH_tagFirst_Sphericity__435->SetBinError(1,88.03542);
   VH_tagFirst_Sphericity__435->SetBinError(2,86.70171);
   VH_tagFirst_Sphericity__435->SetBinError(3,68.35669);
   VH_tagFirst_Sphericity__435->SetBinError(4,45.61749);
   VH_tagFirst_Sphericity__435->SetBinError(5,30.2144);
   VH_tagFirst_Sphericity__435->SetBinError(6,22.19774);
   VH_tagFirst_Sphericity__435->SetBinError(7,16.34974);
   VH_tagFirst_Sphericity__435->SetBinError(8,15.62531);
   VH_tagFirst_Sphericity__435->SetBinError(9,10.5646);
   VH_tagFirst_Sphericity__435->SetBinError(10,15.20551);
   VH_tagFirst_Sphericity__435->SetBinError(11,8.35796);
   VH_tagFirst_Sphericity__435->SetBinError(12,4.790465);
   VH_tagFirst_Sphericity__435->SetBinError(13,3.716863);
   VH_tagFirst_Sphericity__435->SetBinError(14,3.980839);
   VH_tagFirst_Sphericity__435->SetBinError(15,3.045181);
   VH_tagFirst_Sphericity__435->SetBinError(16,2.400546);
   VH_tagFirst_Sphericity__435->SetBinError(17,2.976869);
   VH_tagFirst_Sphericity__435->SetBinError(18,2.531145);
   VH_tagFirst_Sphericity__435->SetBinError(19,1.591638);
   VH_tagFirst_Sphericity__435->SetBinError(20,0.662515);
   VH_tagFirst_Sphericity__435->SetBinError(21,0.5350004);
   VH_tagFirst_Sphericity__435->SetBinError(22,0.1315472);
   VH_tagFirst_Sphericity__435->SetBinError(23,1.364529);
   VH_tagFirst_Sphericity__435->SetEntries(94686);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagFirst_Sphericity__435->SetLineColor(ci);
   VH_tagFirst_Sphericity__435->GetXaxis()->SetTitle("Sphericity");
   VH_tagFirst_Sphericity__435->GetXaxis()->SetRange(1,25);
   VH_tagFirst_Sphericity__435->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Sphericity__435->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Sphericity__435->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Sphericity__435->GetYaxis()->SetTitle("Events/0.04");
   VH_tagFirst_Sphericity__435->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Sphericity__435->GetYaxis()->SetLabelSize(0.05);
   VH_tagFirst_Sphericity__435->GetYaxis()->SetTitleSize(0.057);
   VH_tagFirst_Sphericity__435->GetYaxis()->SetTitleOffset(1.2);
   VH_tagFirst_Sphericity__435->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Sphericity__435->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Sphericity__435->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Sphericity__435->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_Sphericity__435->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_ZJets_tagFirst_18->Modified();
   Sphericity_ZJets_tagFirst_18->cd();
   Sphericity_ZJets_tagFirst_18->SetSelected(Sphericity_ZJets_tagFirst_18);
}
