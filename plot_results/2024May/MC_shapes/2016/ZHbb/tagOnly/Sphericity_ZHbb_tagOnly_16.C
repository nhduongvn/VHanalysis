#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Sphericity_ZHbb_tagOnly_16()
{
//=========Macro generated from canvas: Sphericity_ZHbb_tagOnly_16/Sphericity_ZHbb_tagOnly_16
//=========  (Fri May 24 12:42:21 2024) by ROOT version 6.28/10
   TCanvas *Sphericity_ZHbb_tagOnly_16 = new TCanvas("Sphericity_ZHbb_tagOnly_16", "Sphericity_ZHbb_tagOnly_16",0,0,600,600);
   gStyle->SetOptStat(0);
   Sphericity_ZHbb_tagOnly_16->SetHighLightColor(2);
   Sphericity_ZHbb_tagOnly_16->Range(-0.2,-4.701115,1.133333,42.31003);
   Sphericity_ZHbb_tagOnly_16->SetFillColor(0);
   Sphericity_ZHbb_tagOnly_16->SetFillStyle(4000);
   Sphericity_ZHbb_tagOnly_16->SetBorderMode(0);
   Sphericity_ZHbb_tagOnly_16->SetBorderSize(2);
   Sphericity_ZHbb_tagOnly_16->SetLeftMargin(0.15);
   Sphericity_ZHbb_tagOnly_16->SetFrameFillStyle(1000);
   Sphericity_ZHbb_tagOnly_16->SetFrameBorderMode(0);
   Sphericity_ZHbb_tagOnly_16->SetFrameFillStyle(1000);
   Sphericity_ZHbb_tagOnly_16->SetFrameBorderMode(0);
   
   TH1D *VH_tagOnly_Sphericity__1144 = new TH1D("VH_tagOnly_Sphericity__1144","",25,0,1);
   VH_tagOnly_Sphericity__1144->SetBinContent(1,35.81801);
   VH_tagOnly_Sphericity__1144->SetBinContent(2,31.0481);
   VH_tagOnly_Sphericity__1144->SetBinContent(3,17.88529);
   VH_tagOnly_Sphericity__1144->SetBinContent(4,11.6061);
   VH_tagOnly_Sphericity__1144->SetBinContent(5,7.254312);
   VH_tagOnly_Sphericity__1144->SetBinContent(6,3.839227);
   VH_tagOnly_Sphericity__1144->SetBinContent(7,1.84881);
   VH_tagOnly_Sphericity__1144->SetBinContent(8,0.9463471);
   VH_tagOnly_Sphericity__1144->SetBinContent(9,0.5365736);
   VH_tagOnly_Sphericity__1144->SetBinContent(10,0.4578907);
   VH_tagOnly_Sphericity__1144->SetBinContent(11,0.2963355);
   VH_tagOnly_Sphericity__1144->SetBinContent(12,0.2423704);
   VH_tagOnly_Sphericity__1144->SetBinContent(13,0.1955536);
   VH_tagOnly_Sphericity__1144->SetBinContent(14,0.1494673);
   VH_tagOnly_Sphericity__1144->SetBinContent(15,0.09883774);
   VH_tagOnly_Sphericity__1144->SetBinContent(16,0.07314845);
   VH_tagOnly_Sphericity__1144->SetBinContent(17,0.05347914);
   VH_tagOnly_Sphericity__1144->SetBinContent(18,0.03412937);
   VH_tagOnly_Sphericity__1144->SetBinContent(19,0.01555332);
   VH_tagOnly_Sphericity__1144->SetBinContent(20,0.005561665);
   VH_tagOnly_Sphericity__1144->SetBinContent(21,0.001054582);
   VH_tagOnly_Sphericity__1144->SetBinContent(22,0.001839503);
   VH_tagOnly_Sphericity__1144->SetBinError(1,0.1749855);
   VH_tagOnly_Sphericity__1144->SetBinError(2,0.1624821);
   VH_tagOnly_Sphericity__1144->SetBinError(3,0.1238398);
   VH_tagOnly_Sphericity__1144->SetBinError(4,0.1005292);
   VH_tagOnly_Sphericity__1144->SetBinError(5,0.08032252);
   VH_tagOnly_Sphericity__1144->SetBinError(6,0.05814258);
   VH_tagOnly_Sphericity__1144->SetBinError(7,0.04011713);
   VH_tagOnly_Sphericity__1144->SetBinError(8,0.02767813);
   VH_tagOnly_Sphericity__1144->SetBinError(9,0.02091553);
   VH_tagOnly_Sphericity__1144->SetBinError(10,0.01980371);
   VH_tagOnly_Sphericity__1144->SetBinError(11,0.01537393);
   VH_tagOnly_Sphericity__1144->SetBinError(12,0.01392474);
   VH_tagOnly_Sphericity__1144->SetBinError(13,0.01271487);
   VH_tagOnly_Sphericity__1144->SetBinError(14,0.01135295);
   VH_tagOnly_Sphericity__1144->SetBinError(15,0.008688582);
   VH_tagOnly_Sphericity__1144->SetBinError(16,0.007448751);
   VH_tagOnly_Sphericity__1144->SetBinError(17,0.006654863);
   VH_tagOnly_Sphericity__1144->SetBinError(18,0.005296872);
   VH_tagOnly_Sphericity__1144->SetBinError(19,0.00319047);
   VH_tagOnly_Sphericity__1144->SetBinError(20,0.001900079);
   VH_tagOnly_Sphericity__1144->SetBinError(21,0.0006129514);
   VH_tagOnly_Sphericity__1144->SetBinError(22,0.001521831);
   VH_tagOnly_Sphericity__1144->SetEntries(190087);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagOnly_Sphericity__1144->SetLineColor(ci);
   VH_tagOnly_Sphericity__1144->GetXaxis()->SetTitle("Sphericity");
   VH_tagOnly_Sphericity__1144->GetXaxis()->SetRange(1,25);
   VH_tagOnly_Sphericity__1144->GetXaxis()->SetLabelFont(42);
   VH_tagOnly_Sphericity__1144->GetXaxis()->SetTitleOffset(1);
   VH_tagOnly_Sphericity__1144->GetXaxis()->SetTitleFont(42);
   VH_tagOnly_Sphericity__1144->GetYaxis()->SetTitle("Events/0.04");
   VH_tagOnly_Sphericity__1144->GetYaxis()->SetLabelFont(42);
   VH_tagOnly_Sphericity__1144->GetYaxis()->SetLabelSize(0.05);
   VH_tagOnly_Sphericity__1144->GetYaxis()->SetTitleSize(0.057);
   VH_tagOnly_Sphericity__1144->GetYaxis()->SetTitleOffset(1.2);
   VH_tagOnly_Sphericity__1144->GetYaxis()->SetTitleFont(42);
   VH_tagOnly_Sphericity__1144->GetZaxis()->SetLabelFont(42);
   VH_tagOnly_Sphericity__1144->GetZaxis()->SetTitleOffset(1);
   VH_tagOnly_Sphericity__1144->GetZaxis()->SetTitleFont(42);
   VH_tagOnly_Sphericity__1144->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Sphericity_ZHbb_tagOnly_16->Modified();
   Sphericity_ZHbb_tagOnly_16->cd();
   Sphericity_ZHbb_tagOnly_16->SetSelected(Sphericity_ZHbb_tagOnly_16);
}
