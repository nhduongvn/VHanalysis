#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_jetmass_JEC()
{
//=========Macro generated from canvas: H_jetmass_JEC/H_jetmass_JEC
//=========  (Wed Mar 27 16:46:18 2024) by ROOT version 6.28/10
   TCanvas *H_jetmass_JEC = new TCanvas("H_jetmass_JEC", "H_jetmass_JEC",0,0,600,600);
   gStyle->SetOptStat(0);
   H_jetmass_JEC->SetHighLightColor(2);
   H_jetmass_JEC->Range(-60,-0.01231403,340,0.1108263);
   H_jetmass_JEC->SetFillColor(0);
   H_jetmass_JEC->SetFillStyle(4000);
   H_jetmass_JEC->SetBorderMode(0);
   H_jetmass_JEC->SetBorderSize(2);
   H_jetmass_JEC->SetLeftMargin(0.15);
   H_jetmass_JEC->SetFrameFillStyle(1000);
   H_jetmass_JEC->SetFrameBorderMode(0);
   H_jetmass_JEC->SetFrameFillStyle(1000);
   H_jetmass_JEC->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_H_jetmass_JEC__68 = new TH1D("VH_DHZfirst_H_jetmass_JEC__68","",150,0,300);
   VH_DHZfirst_H_jetmass_JEC__68->SetBinContent(4,0.008838846);
   VH_DHZfirst_H_jetmass_JEC__68->SetBinContent(5,0.01761607);
   VH_DHZfirst_H_jetmass_JEC__68->SetBinContent(6,0.04510179);
   VH_DHZfirst_H_jetmass_JEC__68->SetBinContent(7,0.06645372);
   VH_DHZfirst_H_jetmass_JEC__68->SetBinContent(8,0.0938212);
   VH_DHZfirst_H_jetmass_JEC__68->SetBinContent(9,0.04410336);
   VH_DHZfirst_H_jetmass_JEC__68->SetBinContent(10,0.06071757);
   VH_DHZfirst_H_jetmass_JEC__68->SetBinContent(11,0.05749969);
   VH_DHZfirst_H_jetmass_JEC__68->SetBinContent(12,0.02423633);
   VH_DHZfirst_H_jetmass_JEC__68->SetBinContent(13,0.0194277);
   VH_DHZfirst_H_jetmass_JEC__68->SetBinContent(14,0.008736126);
   VH_DHZfirst_H_jetmass_JEC__68->SetBinContent(15,0.01448443);
   VH_DHZfirst_H_jetmass_JEC__68->SetBinContent(16,0.01144129);
   VH_DHZfirst_H_jetmass_JEC__68->SetBinContent(17,0.002185479);
   VH_DHZfirst_H_jetmass_JEC__68->SetBinContent(18,0.002893088);
   VH_DHZfirst_H_jetmass_JEC__68->SetBinContent(19,0.004834527);
   VH_DHZfirst_H_jetmass_JEC__68->SetBinContent(20,0.005073588);
   VH_DHZfirst_H_jetmass_JEC__68->SetBinContent(22,0.002356188);
   VH_DHZfirst_H_jetmass_JEC__68->SetBinContent(23,0.001016603);
   VH_DHZfirst_H_jetmass_JEC__68->SetBinContent(24,0.003879109);
   VH_DHZfirst_H_jetmass_JEC__68->SetBinContent(26,0.004596462);
   VH_DHZfirst_H_jetmass_JEC__68->SetBinError(4,0.005119806);
   VH_DHZfirst_H_jetmass_JEC__68->SetBinError(5,0.006864754);
   VH_DHZfirst_H_jetmass_JEC__68->SetBinError(6,0.01318793);
   VH_DHZfirst_H_jetmass_JEC__68->SetBinError(7,0.01456465);
   VH_DHZfirst_H_jetmass_JEC__68->SetBinError(8,0.01677507);
   VH_DHZfirst_H_jetmass_JEC__68->SetBinError(9,0.01210146);
   VH_DHZfirst_H_jetmass_JEC__68->SetBinError(10,0.01430942);
   VH_DHZfirst_H_jetmass_JEC__68->SetBinError(11,0.02706245);
   VH_DHZfirst_H_jetmass_JEC__68->SetBinError(12,0.008423446);
   VH_DHZfirst_H_jetmass_JEC__68->SetBinError(13,0.007266778);
   VH_DHZfirst_H_jetmass_JEC__68->SetBinError(14,0.004436753);
   VH_DHZfirst_H_jetmass_JEC__68->SetBinError(15,0.006556578);
   VH_DHZfirst_H_jetmass_JEC__68->SetBinError(16,0.006171132);
   VH_DHZfirst_H_jetmass_JEC__68->SetBinError(17,0.002185479);
   VH_DHZfirst_H_jetmass_JEC__68->SetBinError(18,0.002893088);
   VH_DHZfirst_H_jetmass_JEC__68->SetBinError(19,0.003419123);
   VH_DHZfirst_H_jetmass_JEC__68->SetBinError(20,0.003624251);
   VH_DHZfirst_H_jetmass_JEC__68->SetBinError(22,0.002356188);
   VH_DHZfirst_H_jetmass_JEC__68->SetBinError(23,0.001016603);
   VH_DHZfirst_H_jetmass_JEC__68->SetBinError(24,0.003879109);
   VH_DHZfirst_H_jetmass_JEC__68->SetBinError(26,0.004596462);
   VH_DHZfirst_H_jetmass_JEC__68->SetEntries(172);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_H_jetmass_JEC__68->SetLineColor(ci);
   VH_DHZfirst_H_jetmass_JEC__68->GetXaxis()->SetTitle("c-jet mass (w/ JEC) [GeV]");
   VH_DHZfirst_H_jetmass_JEC__68->GetXaxis()->SetRange(1,150);
   VH_DHZfirst_H_jetmass_JEC__68->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_H_jetmass_JEC__68->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_H_jetmass_JEC__68->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_H_jetmass_JEC__68->GetYaxis()->SetTitle("Events/2.0 GeV");
   VH_DHZfirst_H_jetmass_JEC__68->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_H_jetmass_JEC__68->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_H_jetmass_JEC__68->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_H_jetmass_JEC__68->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_H_jetmass_JEC__68->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_H_jetmass_JEC__68->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_H_jetmass_JEC__68->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_H_jetmass_JEC__68->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_H_jetmass_JEC__68->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, -- fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_jetmass_JEC->Modified();
   H_jetmass_JEC->cd();
   H_jetmass_JEC->SetSelected(H_jetmass_JEC);
}
