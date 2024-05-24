#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_WJets_tagOnly_2b1c_16()
{
//=========Macro generated from canvas: Sphericity_WJets_tagOnly_2b1c_16/Sphericity_WJets_tagOnly_2b1c_16
//=========  (Fri May 24 12:42:54 2024) by ROOT version 6.28/10
   TCanvas *Sphericity_WJets_tagOnly_2b1c_16 = new TCanvas("Sphericity_WJets_tagOnly_2b1c_16", "Sphericity_WJets_tagOnly_2b1c_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_WJets_tagOnly_2b1c_16->SetHighLightColor(2);
   Sphericity_WJets_tagOnly_2b1c_16->Range(-0.2,-1350.511,1.133333,12154.6);
   Sphericity_WJets_tagOnly_2b1c_16->SetFillColor(0);
   Sphericity_WJets_tagOnly_2b1c_16->SetFillStyle(4000);
   Sphericity_WJets_tagOnly_2b1c_16->SetBorderMode(0);
   Sphericity_WJets_tagOnly_2b1c_16->SetBorderSize(2);
   Sphericity_WJets_tagOnly_2b1c_16->SetLeftMargin(0.15);
   Sphericity_WJets_tagOnly_2b1c_16->SetFrameFillStyle(1000);
   Sphericity_WJets_tagOnly_2b1c_16->SetFrameBorderMode(0);
   Sphericity_WJets_tagOnly_2b1c_16->SetFrameFillStyle(1000);
   Sphericity_WJets_tagOnly_2b1c_16->SetFrameBorderMode(0);
   
   TH1D *VH_tagOnly_2b1c_Sphericity__3310 = new TH1D("VH_tagOnly_2b1c_Sphericity__3310","",25,0,1);
   VH_tagOnly_2b1c_Sphericity__3310->SetBinContent(1,10289.61);
   VH_tagOnly_2b1c_Sphericity__3310->SetBinContent(2,8490.801);
   VH_tagOnly_2b1c_Sphericity__3310->SetBinContent(3,4881.824);
   VH_tagOnly_2b1c_Sphericity__3310->SetBinContent(4,2943.504);
   VH_tagOnly_2b1c_Sphericity__3310->SetBinContent(5,1648.853);
   VH_tagOnly_2b1c_Sphericity__3310->SetBinContent(6,838.1101);
   VH_tagOnly_2b1c_Sphericity__3310->SetBinContent(7,387.9392);
   VH_tagOnly_2b1c_Sphericity__3310->SetBinContent(8,223.4512);
   VH_tagOnly_2b1c_Sphericity__3310->SetBinContent(9,135.5838);
   VH_tagOnly_2b1c_Sphericity__3310->SetBinContent(10,89.87003);
   VH_tagOnly_2b1c_Sphericity__3310->SetBinContent(11,85.64126);
   VH_tagOnly_2b1c_Sphericity__3310->SetBinContent(12,50.36353);
   VH_tagOnly_2b1c_Sphericity__3310->SetBinContent(13,33.94257);
   VH_tagOnly_2b1c_Sphericity__3310->SetBinContent(14,22.70896);
   VH_tagOnly_2b1c_Sphericity__3310->SetBinContent(15,17.1226);
   VH_tagOnly_2b1c_Sphericity__3310->SetBinContent(16,14.7732);
   VH_tagOnly_2b1c_Sphericity__3310->SetBinContent(17,8.347878);
   VH_tagOnly_2b1c_Sphericity__3310->SetBinContent(18,4.956318);
   VH_tagOnly_2b1c_Sphericity__3310->SetBinContent(19,3.224726);
   VH_tagOnly_2b1c_Sphericity__3310->SetBinContent(20,0.9075788);
   VH_tagOnly_2b1c_Sphericity__3310->SetBinContent(21,0.08314192);
   VH_tagOnly_2b1c_Sphericity__3310->SetBinContent(22,0.1154144);
   VH_tagOnly_2b1c_Sphericity__3310->SetBinContent(23,0.03557255);
   VH_tagOnly_2b1c_Sphericity__3310->SetBinError(1,101.0246);
   VH_tagOnly_2b1c_Sphericity__3310->SetBinError(2,106.1669);
   VH_tagOnly_2b1c_Sphericity__3310->SetBinError(3,76.47915);
   VH_tagOnly_2b1c_Sphericity__3310->SetBinError(4,59.32449);
   VH_tagOnly_2b1c_Sphericity__3310->SetBinError(5,41.61159);
   VH_tagOnly_2b1c_Sphericity__3310->SetBinError(6,27.22541);
   VH_tagOnly_2b1c_Sphericity__3310->SetBinError(7,18.30521);
   VH_tagOnly_2b1c_Sphericity__3310->SetBinError(8,17.47215);
   VH_tagOnly_2b1c_Sphericity__3310->SetBinError(9,9.074858);
   VH_tagOnly_2b1c_Sphericity__3310->SetBinError(10,5.610798);
   VH_tagOnly_2b1c_Sphericity__3310->SetBinError(11,12.39829);
   VH_tagOnly_2b1c_Sphericity__3310->SetBinError(12,6.284009);
   VH_tagOnly_2b1c_Sphericity__3310->SetBinError(13,3.047865);
   VH_tagOnly_2b1c_Sphericity__3310->SetBinError(14,2.216819);
   VH_tagOnly_2b1c_Sphericity__3310->SetBinError(15,1.869395);
   VH_tagOnly_2b1c_Sphericity__3310->SetBinError(16,3.989159);
   VH_tagOnly_2b1c_Sphericity__3310->SetBinError(17,1.276295);
   VH_tagOnly_2b1c_Sphericity__3310->SetBinError(18,0.8174914);
   VH_tagOnly_2b1c_Sphericity__3310->SetBinError(19,0.6244396);
   VH_tagOnly_2b1c_Sphericity__3310->SetBinError(20,0.3143206);
   VH_tagOnly_2b1c_Sphericity__3310->SetBinError(21,0.08314192);
   VH_tagOnly_2b1c_Sphericity__3310->SetBinError(22,0.08253558);
   VH_tagOnly_2b1c_Sphericity__3310->SetBinError(23,0.03557255);
   VH_tagOnly_2b1c_Sphericity__3310->SetEntries(274175);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagOnly_2b1c_Sphericity__3310->SetLineColor(ci);
   VH_tagOnly_2b1c_Sphericity__3310->GetXaxis()->SetTitle("Sphericity");
   VH_tagOnly_2b1c_Sphericity__3310->GetXaxis()->SetRange(1,25);
   VH_tagOnly_2b1c_Sphericity__3310->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_2b1c_Sphericity__3310->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_2b1c_Sphericity__3310->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_2b1c_Sphericity__3310->GetYaxis()->SetTitle("Events/0.04");
   VH_tagOnly_2b1c_Sphericity__3310->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_2b1c_Sphericity__3310->GetYaxis()->SetLabelSize(0.05);
   VH_tagOnly_2b1c_Sphericity__3310->GetYaxis()->SetTitleSize(0.057);
   VH_tagOnly_2b1c_Sphericity__3310->GetYaxis()->SetTitleOffset(1.2);
   VH_tagOnly_2b1c_Sphericity__3310->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_2b1c_Sphericity__3310->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_2b1c_Sphericity__3310->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_2b1c_Sphericity__3310->GetZaxis()->SetTitleFont(42);
   VH_tagOnly_2b1c_Sphericity__3310->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_WJets_tagOnly_2b1c_16->Modified();
   Sphericity_WJets_tagOnly_2b1c_16->cd();
   Sphericity_WJets_tagOnly_2b1c_16->SetSelected(Sphericity_WJets_tagOnly_2b1c_16);
}
