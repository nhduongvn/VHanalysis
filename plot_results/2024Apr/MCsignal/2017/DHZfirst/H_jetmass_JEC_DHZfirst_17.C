#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_jetmass_JEC_DHZfirst_17()
{
//=========Macro generated from canvas: H_jetmass_JEC_DHZfirst_17/H_jetmass_JEC_DHZfirst_17
//=========  (Mon Apr  8 11:27:53 2024) by ROOT version 6.28/10
   TCanvas *H_jetmass_JEC_DHZfirst_17 = new TCanvas("H_jetmass_JEC_DHZfirst_17", "H_jetmass_JEC_DHZfirst_17",0,0,600,600);
   gStyle->SetOptStat(0);
   H_jetmass_JEC_DHZfirst_17->SetHighLightColor(2);
   H_jetmass_JEC_DHZfirst_17->Range(-60,-0.00461541,340,0.04153868);
   H_jetmass_JEC_DHZfirst_17->SetFillColor(0);
   H_jetmass_JEC_DHZfirst_17->SetFillStyle(4000);
   H_jetmass_JEC_DHZfirst_17->SetBorderMode(0);
   H_jetmass_JEC_DHZfirst_17->SetBorderSize(2);
   H_jetmass_JEC_DHZfirst_17->SetLeftMargin(0.15);
   H_jetmass_JEC_DHZfirst_17->SetFrameFillStyle(1000);
   H_jetmass_JEC_DHZfirst_17->SetFrameBorderMode(0);
   H_jetmass_JEC_DHZfirst_17->SetFrameFillStyle(1000);
   H_jetmass_JEC_DHZfirst_17->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_H_jetmass_JEC__203 = new TH1D("VH_DHZfirst_H_jetmass_JEC__203","",150,0,300);
   VH_DHZfirst_H_jetmass_JEC__203->SetBinContent(4,0.003252455);
   VH_DHZfirst_H_jetmass_JEC__203->SetBinContent(5,0.01689928);
   VH_DHZfirst_H_jetmass_JEC__203->SetBinContent(6,0.03165813);
   VH_DHZfirst_H_jetmass_JEC__203->SetBinContent(7,0.03297188);
   VH_DHZfirst_H_jetmass_JEC__203->SetBinContent(8,0.03516502);
   VH_DHZfirst_H_jetmass_JEC__203->SetBinContent(9,0.02248082);
   VH_DHZfirst_H_jetmass_JEC__203->SetBinContent(10,0.02388179);
   VH_DHZfirst_H_jetmass_JEC__203->SetBinContent(11,0.01760677);
   VH_DHZfirst_H_jetmass_JEC__203->SetBinContent(12,0.007380193);
   VH_DHZfirst_H_jetmass_JEC__203->SetBinContent(13,0.01498397);
   VH_DHZfirst_H_jetmass_JEC__203->SetBinContent(14,0.01040641);
   VH_DHZfirst_H_jetmass_JEC__203->SetBinContent(15,0.01160789);
   VH_DHZfirst_H_jetmass_JEC__203->SetBinContent(16,0.01073006);
   VH_DHZfirst_H_jetmass_JEC__203->SetBinContent(17,0.001510085);
   VH_DHZfirst_H_jetmass_JEC__203->SetBinContent(18,0.004751081);
   VH_DHZfirst_H_jetmass_JEC__203->SetBinContent(19,0.0009012266);
   VH_DHZfirst_H_jetmass_JEC__203->SetBinContent(21,0.001336506);
   VH_DHZfirst_H_jetmass_JEC__203->SetBinContent(22,0.002096956);
   VH_DHZfirst_H_jetmass_JEC__203->SetBinContent(23,0.001224989);
   VH_DHZfirst_H_jetmass_JEC__203->SetBinContent(45,0.002896017);
   VH_DHZfirst_H_jetmass_JEC__203->SetBinError(4,0.001910275);
   VH_DHZfirst_H_jetmass_JEC__203->SetBinError(5,0.005182938);
   VH_DHZfirst_H_jetmass_JEC__203->SetBinError(6,0.0074298);
   VH_DHZfirst_H_jetmass_JEC__203->SetBinError(7,0.006881818);
   VH_DHZfirst_H_jetmass_JEC__203->SetBinError(8,0.006882092);
   VH_DHZfirst_H_jetmass_JEC__203->SetBinError(9,0.005336213);
   VH_DHZfirst_H_jetmass_JEC__203->SetBinError(10,0.005451684);
   VH_DHZfirst_H_jetmass_JEC__203->SetBinError(11,0.004874421);
   VH_DHZfirst_H_jetmass_JEC__203->SetBinError(12,0.00298327);
   VH_DHZfirst_H_jetmass_JEC__203->SetBinError(13,0.004718951);
   VH_DHZfirst_H_jetmass_JEC__203->SetBinError(14,0.003677399);
   VH_DHZfirst_H_jetmass_JEC__203->SetBinError(15,0.004876915);
   VH_DHZfirst_H_jetmass_JEC__203->SetBinError(16,0.004402313);
   VH_DHZfirst_H_jetmass_JEC__203->SetBinError(17,0.001510085);
   VH_DHZfirst_H_jetmass_JEC__203->SetBinError(18,0.002447146);
   VH_DHZfirst_H_jetmass_JEC__203->SetBinError(19,0.0009012266);
   VH_DHZfirst_H_jetmass_JEC__203->SetBinError(21,0.001336506);
   VH_DHZfirst_H_jetmass_JEC__203->SetBinError(22,0.002096956);
   VH_DHZfirst_H_jetmass_JEC__203->SetBinError(23,0.001224989);
   VH_DHZfirst_H_jetmass_JEC__203->SetBinError(45,0.002896017);
   VH_DHZfirst_H_jetmass_JEC__203->SetEntries(199);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_H_jetmass_JEC__203->SetLineColor(ci);
   VH_DHZfirst_H_jetmass_JEC__203->GetXaxis()->SetTitle("c-jet mass (w/ JEC) [GeV]");
   VH_DHZfirst_H_jetmass_JEC__203->GetXaxis()->SetRange(1,150);
   VH_DHZfirst_H_jetmass_JEC__203->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_H_jetmass_JEC__203->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_H_jetmass_JEC__203->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_H_jetmass_JEC__203->GetYaxis()->SetTitle("Events/2.0 GeV");
   VH_DHZfirst_H_jetmass_JEC__203->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_H_jetmass_JEC__203->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_H_jetmass_JEC__203->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_H_jetmass_JEC__203->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_H_jetmass_JEC__203->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_H_jetmass_JEC__203->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_H_jetmass_JEC__203->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_H_jetmass_JEC__203->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_H_jetmass_JEC__203->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_jetmass_JEC_DHZfirst_17->Modified();
   H_jetmass_JEC_DHZfirst_17->cd();
   H_jetmass_JEC_DHZfirst_17->SetSelected(H_jetmass_JEC_DHZfirst_17);
}
