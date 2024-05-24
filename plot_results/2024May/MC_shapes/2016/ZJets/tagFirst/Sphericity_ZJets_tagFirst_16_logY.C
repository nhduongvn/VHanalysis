#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_ZJets_tagFirst_16_logY()
{
//=========Macro generated from canvas: Sphericity_ZJets_tagFirst_16/Sphericity_ZJets_tagFirst_16
//=========  (Thu May 23 20:48:32 2024) by ROOT version 6.28/10
   TCanvas *Sphericity_ZJets_tagFirst_16 = new TCanvas("Sphericity_ZJets_tagFirst_16", "Sphericity_ZJets_tagFirst_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_ZJets_tagFirst_16->SetHighLightColor(2);
   Sphericity_ZJets_tagFirst_16->Range(-0.2,-1.432545,1.133333,4.684468);
   Sphericity_ZJets_tagFirst_16->SetFillColor(0);
   Sphericity_ZJets_tagFirst_16->SetFillStyle(4000);
   Sphericity_ZJets_tagFirst_16->SetBorderMode(0);
   Sphericity_ZJets_tagFirst_16->SetBorderSize(2);
   Sphericity_ZJets_tagFirst_16->SetLogy();
   Sphericity_ZJets_tagFirst_16->SetLeftMargin(0.15);
   Sphericity_ZJets_tagFirst_16->SetFrameFillStyle(1000);
   Sphericity_ZJets_tagFirst_16->SetFrameBorderMode(0);
   Sphericity_ZJets_tagFirst_16->SetFrameFillStyle(1000);
   Sphericity_ZJets_tagFirst_16->SetFrameBorderMode(0);
   
   TH1D *VH_tagFirst_Sphericity__433 = new TH1D("VH_tagFirst_Sphericity__433","",25,0,1);
   VH_tagFirst_Sphericity__433->SetBinContent(1,6240.473);
   VH_tagFirst_Sphericity__433->SetBinContent(2,4884.573);
   VH_tagFirst_Sphericity__433->SetBinContent(3,2898.107);
   VH_tagFirst_Sphericity__433->SetBinContent(4,1750.571);
   VH_tagFirst_Sphericity__433->SetBinContent(5,1012.463);
   VH_tagFirst_Sphericity__433->SetBinContent(6,515.9769);
   VH_tagFirst_Sphericity__433->SetBinContent(7,256.4665);
   VH_tagFirst_Sphericity__433->SetBinContent(8,144.1337);
   VH_tagFirst_Sphericity__433->SetBinContent(9,94.22777);
   VH_tagFirst_Sphericity__433->SetBinContent(10,67.6177);
   VH_tagFirst_Sphericity__433->SetBinContent(11,47.76429);
   VH_tagFirst_Sphericity__433->SetBinContent(12,36.71115);
   VH_tagFirst_Sphericity__433->SetBinContent(13,30.01908);
   VH_tagFirst_Sphericity__433->SetBinContent(14,26.31744);
   VH_tagFirst_Sphericity__433->SetBinContent(15,15.20866);
   VH_tagFirst_Sphericity__433->SetBinContent(16,11.11729);
   VH_tagFirst_Sphericity__433->SetBinContent(17,8.590957);
   VH_tagFirst_Sphericity__433->SetBinContent(18,8.130743);
   VH_tagFirst_Sphericity__433->SetBinContent(19,2.630688);
   VH_tagFirst_Sphericity__433->SetBinContent(20,1.143926);
   VH_tagFirst_Sphericity__433->SetBinContent(21,0.6738307);
   VH_tagFirst_Sphericity__433->SetBinContent(22,0.3021249);
   VH_tagFirst_Sphericity__433->SetBinError(1,48.42875);
   VH_tagFirst_Sphericity__433->SetBinError(2,47.82481);
   VH_tagFirst_Sphericity__433->SetBinError(3,36.90707);
   VH_tagFirst_Sphericity__433->SetBinError(4,26.42795);
   VH_tagFirst_Sphericity__433->SetBinError(5,19.65654);
   VH_tagFirst_Sphericity__433->SetBinError(6,11.94775);
   VH_tagFirst_Sphericity__433->SetBinError(7,8.496647);
   VH_tagFirst_Sphericity__433->SetBinError(8,5.174);
   VH_tagFirst_Sphericity__433->SetBinError(9,3.933832);
   VH_tagFirst_Sphericity__433->SetBinError(10,3.672039);
   VH_tagFirst_Sphericity__433->SetBinError(11,2.20711);
   VH_tagFirst_Sphericity__433->SetBinError(12,2.014695);
   VH_tagFirst_Sphericity__433->SetBinError(13,2.63078);
   VH_tagFirst_Sphericity__433->SetBinError(14,3.354912);
   VH_tagFirst_Sphericity__433->SetBinError(15,1.207931);
   VH_tagFirst_Sphericity__433->SetBinError(16,1.044849);
   VH_tagFirst_Sphericity__433->SetBinError(17,0.90302);
   VH_tagFirst_Sphericity__433->SetBinError(18,1.985888);
   VH_tagFirst_Sphericity__433->SetBinError(19,0.5259687);
   VH_tagFirst_Sphericity__433->SetBinError(20,0.3262692);
   VH_tagFirst_Sphericity__433->SetBinError(21,0.2837214);
   VH_tagFirst_Sphericity__433->SetBinError(22,0.2569024);
   VH_tagFirst_Sphericity__433->SetEntries(170056);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagFirst_Sphericity__433->SetLineColor(ci);
   VH_tagFirst_Sphericity__433->GetXaxis()->SetTitle("Sphericity");
   VH_tagFirst_Sphericity__433->GetXaxis()->SetRange(1,25);
   VH_tagFirst_Sphericity__433->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Sphericity__433->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Sphericity__433->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Sphericity__433->GetYaxis()->SetTitle("Events/0.04");
   VH_tagFirst_Sphericity__433->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Sphericity__433->GetYaxis()->SetLabelSize(0.05);
   VH_tagFirst_Sphericity__433->GetYaxis()->SetTitleSize(0.057);
   VH_tagFirst_Sphericity__433->GetYaxis()->SetTitleOffset(1.2);
   VH_tagFirst_Sphericity__433->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Sphericity__433->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Sphericity__433->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Sphericity__433->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_Sphericity__433->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_ZJets_tagFirst_16->Modified();
   Sphericity_ZJets_tagFirst_16->cd();
   Sphericity_ZJets_tagFirst_16->SetSelected(Sphericity_ZJets_tagFirst_16);
}
