#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_WJets_tagFirst_2b1c_17()
{
//=========Macro generated from canvas: Sphericity_WJets_tagFirst_2b1c_17/Sphericity_WJets_tagFirst_2b1c_17
//=========  (Fri May 24 12:42:43 2024) by ROOT version 6.28/10
   TCanvas *Sphericity_WJets_tagFirst_2b1c_17 = new TCanvas("Sphericity_WJets_tagFirst_2b1c_17", "Sphericity_WJets_tagFirst_2b1c_17",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_WJets_tagFirst_2b1c_17->SetHighLightColor(2);
   Sphericity_WJets_tagFirst_2b1c_17->Range(-0.2,-636.1656,1.133333,5725.49);
   Sphericity_WJets_tagFirst_2b1c_17->SetFillColor(0);
   Sphericity_WJets_tagFirst_2b1c_17->SetFillStyle(4000);
   Sphericity_WJets_tagFirst_2b1c_17->SetBorderMode(0);
   Sphericity_WJets_tagFirst_2b1c_17->SetBorderSize(2);
   Sphericity_WJets_tagFirst_2b1c_17->SetLeftMargin(0.15);
   Sphericity_WJets_tagFirst_2b1c_17->SetFrameFillStyle(1000);
   Sphericity_WJets_tagFirst_2b1c_17->SetFrameBorderMode(0);
   Sphericity_WJets_tagFirst_2b1c_17->SetFrameFillStyle(1000);
   Sphericity_WJets_tagFirst_2b1c_17->SetFrameBorderMode(0);
   
   TH1D *VH_tagFirst_2b1c_Sphericity__2591 = new TH1D("VH_tagFirst_2b1c_Sphericity__2591","",25,0,1);
   VH_tagFirst_2b1c_Sphericity__2591->SetBinContent(1,4846.975);
   VH_tagFirst_2b1c_Sphericity__2591->SetBinContent(2,3509.375);
   VH_tagFirst_2b1c_Sphericity__2591->SetBinContent(3,2044.208);
   VH_tagFirst_2b1c_Sphericity__2591->SetBinContent(4,1183.514);
   VH_tagFirst_2b1c_Sphericity__2591->SetBinContent(5,722.3892);
   VH_tagFirst_2b1c_Sphericity__2591->SetBinContent(6,381.9448);
   VH_tagFirst_2b1c_Sphericity__2591->SetBinContent(7,191.106);
   VH_tagFirst_2b1c_Sphericity__2591->SetBinContent(8,108.1014);
   VH_tagFirst_2b1c_Sphericity__2591->SetBinContent(9,82.64703);
   VH_tagFirst_2b1c_Sphericity__2591->SetBinContent(10,63.98718);
   VH_tagFirst_2b1c_Sphericity__2591->SetBinContent(11,35.60065);
   VH_tagFirst_2b1c_Sphericity__2591->SetBinContent(12,36.52809);
   VH_tagFirst_2b1c_Sphericity__2591->SetBinContent(13,25.62257);
   VH_tagFirst_2b1c_Sphericity__2591->SetBinContent(14,30.74829);
   VH_tagFirst_2b1c_Sphericity__2591->SetBinContent(15,11.15304);
   VH_tagFirst_2b1c_Sphericity__2591->SetBinContent(16,11.60817);
   VH_tagFirst_2b1c_Sphericity__2591->SetBinContent(17,7.740651);
   VH_tagFirst_2b1c_Sphericity__2591->SetBinContent(18,4.410891);
   VH_tagFirst_2b1c_Sphericity__2591->SetBinContent(19,1.90136);
   VH_tagFirst_2b1c_Sphericity__2591->SetBinContent(20,0.358627);
   VH_tagFirst_2b1c_Sphericity__2591->SetBinContent(21,0.3411253);
   VH_tagFirst_2b1c_Sphericity__2591->SetBinError(1,73.41275);
   VH_tagFirst_2b1c_Sphericity__2591->SetBinError(2,65.64233);
   VH_tagFirst_2b1c_Sphericity__2591->SetBinError(3,51.92032);
   VH_tagFirst_2b1c_Sphericity__2591->SetBinError(4,35.6814);
   VH_tagFirst_2b1c_Sphericity__2591->SetBinError(5,35.9718);
   VH_tagFirst_2b1c_Sphericity__2591->SetBinError(6,16.81906);
   VH_tagFirst_2b1c_Sphericity__2591->SetBinError(7,12.79743);
   VH_tagFirst_2b1c_Sphericity__2591->SetBinError(8,7.085599);
   VH_tagFirst_2b1c_Sphericity__2591->SetBinError(9,8.765113);
   VH_tagFirst_2b1c_Sphericity__2591->SetBinError(10,9.986219);
   VH_tagFirst_2b1c_Sphericity__2591->SetBinError(11,3.15666);
   VH_tagFirst_2b1c_Sphericity__2591->SetBinError(12,5.673716);
   VH_tagFirst_2b1c_Sphericity__2591->SetBinError(13,4.559489);
   VH_tagFirst_2b1c_Sphericity__2591->SetBinError(14,7.520425);
   VH_tagFirst_2b1c_Sphericity__2591->SetBinError(15,1.837747);
   VH_tagFirst_2b1c_Sphericity__2591->SetBinError(16,2.015842);
   VH_tagFirst_2b1c_Sphericity__2591->SetBinError(17,1.384693);
   VH_tagFirst_2b1c_Sphericity__2591->SetBinError(18,0.8319703);
   VH_tagFirst_2b1c_Sphericity__2591->SetBinError(19,0.4472921);
   VH_tagFirst_2b1c_Sphericity__2591->SetBinError(20,0.2865219);
   VH_tagFirst_2b1c_Sphericity__2591->SetBinError(21,0.2975578);
   VH_tagFirst_2b1c_Sphericity__2591->SetEntries(88892);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagFirst_2b1c_Sphericity__2591->SetLineColor(ci);
   VH_tagFirst_2b1c_Sphericity__2591->GetXaxis()->SetTitle("Sphericity");
   VH_tagFirst_2b1c_Sphericity__2591->GetXaxis()->SetRange(1,25);
   VH_tagFirst_2b1c_Sphericity__2591->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_2b1c_Sphericity__2591->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_2b1c_Sphericity__2591->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_2b1c_Sphericity__2591->GetYaxis()->SetTitle("Events/0.04");
   VH_tagFirst_2b1c_Sphericity__2591->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_2b1c_Sphericity__2591->GetYaxis()->SetLabelSize(0.05);
   VH_tagFirst_2b1c_Sphericity__2591->GetYaxis()->SetTitleSize(0.057);
   VH_tagFirst_2b1c_Sphericity__2591->GetYaxis()->SetTitleOffset(1.2);
   VH_tagFirst_2b1c_Sphericity__2591->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_2b1c_Sphericity__2591->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_2b1c_Sphericity__2591->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_2b1c_Sphericity__2591->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_2b1c_Sphericity__2591->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_WJets_tagFirst_2b1c_17->Modified();
   Sphericity_WJets_tagFirst_2b1c_17->cd();
   Sphericity_WJets_tagFirst_2b1c_17->SetSelected(Sphericity_WJets_tagFirst_2b1c_17);
}
