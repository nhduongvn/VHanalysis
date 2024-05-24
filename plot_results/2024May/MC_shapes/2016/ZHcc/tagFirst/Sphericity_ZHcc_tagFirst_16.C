#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_ZHcc_tagFirst_16()
{
//=========Macro generated from canvas: Sphericity_ZHcc_tagFirst_16/Sphericity_ZHcc_tagFirst_16
//=========  (Fri May 24 12:42:11 2024) by ROOT version 6.28/10
   TCanvas *Sphericity_ZHcc_tagFirst_16 = new TCanvas("Sphericity_ZHcc_tagFirst_16", "Sphericity_ZHcc_tagFirst_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_ZHcc_tagFirst_16->SetHighLightColor(2);
   Sphericity_ZHcc_tagFirst_16->Range(-0.2,-0.1145769,1.133333,1.031192);
   Sphericity_ZHcc_tagFirst_16->SetFillColor(0);
   Sphericity_ZHcc_tagFirst_16->SetFillStyle(4000);
   Sphericity_ZHcc_tagFirst_16->SetBorderMode(0);
   Sphericity_ZHcc_tagFirst_16->SetBorderSize(2);
   Sphericity_ZHcc_tagFirst_16->SetLeftMargin(0.15);
   Sphericity_ZHcc_tagFirst_16->SetFrameFillStyle(1000);
   Sphericity_ZHcc_tagFirst_16->SetFrameBorderMode(0);
   Sphericity_ZHcc_tagFirst_16->SetFrameFillStyle(1000);
   Sphericity_ZHcc_tagFirst_16->SetFrameBorderMode(0);
   
   TH1D *VH_tagFirst_Sphericity__421 = new TH1D("VH_tagFirst_Sphericity__421","",25,0,1);
   VH_tagFirst_Sphericity__421->SetBinContent(1,0.8729665);
   VH_tagFirst_Sphericity__421->SetBinContent(2,0.7644001);
   VH_tagFirst_Sphericity__421->SetBinContent(3,0.4126246);
   VH_tagFirst_Sphericity__421->SetBinContent(4,0.2618782);
   VH_tagFirst_Sphericity__421->SetBinContent(5,0.1536841);
   VH_tagFirst_Sphericity__421->SetBinContent(6,0.1075355);
   VH_tagFirst_Sphericity__421->SetBinContent(7,0.04022037);
   VH_tagFirst_Sphericity__421->SetBinContent(8,0.02390119);
   VH_tagFirst_Sphericity__421->SetBinContent(9,0.01406715);
   VH_tagFirst_Sphericity__421->SetBinContent(10,0.004757846);
   VH_tagFirst_Sphericity__421->SetBinContent(11,0.009969735);
   VH_tagFirst_Sphericity__421->SetBinContent(12,0.007162736);
   VH_tagFirst_Sphericity__421->SetBinContent(13,0.006660923);
   VH_tagFirst_Sphericity__421->SetBinContent(14,0.004020397);
   VH_tagFirst_Sphericity__421->SetBinContent(15,0.002272909);
   VH_tagFirst_Sphericity__421->SetBinContent(16,0.001216084);
   VH_tagFirst_Sphericity__421->SetBinContent(17,0.000865385);
   VH_tagFirst_Sphericity__421->SetBinContent(18,0.0004514806);
   VH_tagFirst_Sphericity__421->SetBinContent(20,0.0001434371);
   VH_tagFirst_Sphericity__421->SetBinError(1,0.03604028);
   VH_tagFirst_Sphericity__421->SetBinError(2,0.03303822);
   VH_tagFirst_Sphericity__421->SetBinError(3,0.02486537);
   VH_tagFirst_Sphericity__421->SetBinError(4,0.01955736);
   VH_tagFirst_Sphericity__421->SetBinError(5,0.01559738);
   VH_tagFirst_Sphericity__421->SetBinError(6,0.01323585);
   VH_tagFirst_Sphericity__421->SetBinError(7,0.008147627);
   VH_tagFirst_Sphericity__421->SetBinError(8,0.005840407);
   VH_tagFirst_Sphericity__421->SetBinError(9,0.004971532);
   VH_tagFirst_Sphericity__421->SetBinError(10,0.002329238);
   VH_tagFirst_Sphericity__421->SetBinError(11,0.004111338);
   VH_tagFirst_Sphericity__421->SetBinError(12,0.00287577);
   VH_tagFirst_Sphericity__421->SetBinError(13,0.003448071);
   VH_tagFirst_Sphericity__421->SetBinError(14,0.002155695);
   VH_tagFirst_Sphericity__421->SetBinError(15,0.0008849323);
   VH_tagFirst_Sphericity__421->SetBinError(16,0.0006141574);
   VH_tagFirst_Sphericity__421->SetBinError(17,0.0005055334);
   VH_tagFirst_Sphericity__421->SetBinError(18,0.0003249433);
   VH_tagFirst_Sphericity__421->SetBinError(20,0.0001434371);
   VH_tagFirst_Sphericity__421->SetEntries(4073);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagFirst_Sphericity__421->SetLineColor(ci);
   VH_tagFirst_Sphericity__421->GetXaxis()->SetTitle("Sphericity");
   VH_tagFirst_Sphericity__421->GetXaxis()->SetRange(1,25);
   VH_tagFirst_Sphericity__421->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_Sphericity__421->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_Sphericity__421->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_Sphericity__421->GetYaxis()->SetTitle("Events/0.04");
   VH_tagFirst_Sphericity__421->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_Sphericity__421->GetYaxis()->SetLabelSize(0.05);
   VH_tagFirst_Sphericity__421->GetYaxis()->SetTitleSize(0.057);
   VH_tagFirst_Sphericity__421->GetYaxis()->SetTitleOffset(1.2);
   VH_tagFirst_Sphericity__421->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_Sphericity__421->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_Sphericity__421->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_Sphericity__421->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_Sphericity__421->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_ZHcc_tagFirst_16->Modified();
   Sphericity_ZHcc_tagFirst_16->cd();
   Sphericity_ZHcc_tagFirst_16->SetSelected(Sphericity_ZHcc_tagFirst_16);
}
