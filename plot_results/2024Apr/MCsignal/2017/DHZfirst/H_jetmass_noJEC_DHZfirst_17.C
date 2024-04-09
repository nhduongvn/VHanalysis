#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_jetmass_noJEC_DHZfirst_17()
{
//=========Macro generated from canvas: H_jetmass_noJEC_DHZfirst_17/H_jetmass_noJEC_DHZfirst_17
//=========  (Mon Apr  8 11:27:53 2024) by ROOT version 6.28/10
   TCanvas *H_jetmass_noJEC_DHZfirst_17 = new TCanvas("H_jetmass_noJEC_DHZfirst_17", "H_jetmass_noJEC_DHZfirst_17",0,0,600,600);
   gStyle->SetOptStat(0);
   H_jetmass_noJEC_DHZfirst_17->SetHighLightColor(2);
   H_jetmass_noJEC_DHZfirst_17->Range(-60,-0.004712602,340,0.04241341);
   H_jetmass_noJEC_DHZfirst_17->SetFillColor(0);
   H_jetmass_noJEC_DHZfirst_17->SetFillStyle(4000);
   H_jetmass_noJEC_DHZfirst_17->SetBorderMode(0);
   H_jetmass_noJEC_DHZfirst_17->SetBorderSize(2);
   H_jetmass_noJEC_DHZfirst_17->SetLeftMargin(0.15);
   H_jetmass_noJEC_DHZfirst_17->SetFrameFillStyle(1000);
   H_jetmass_noJEC_DHZfirst_17->SetFrameBorderMode(0);
   H_jetmass_noJEC_DHZfirst_17->SetFrameFillStyle(1000);
   H_jetmass_noJEC_DHZfirst_17->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_H_jetmass_noJEC__200 = new TH1D("VH_DHZfirst_H_jetmass_noJEC__200","",150,0,300);
   VH_DHZfirst_H_jetmass_noJEC__200->SetBinContent(4,0.003372598);
   VH_DHZfirst_H_jetmass_noJEC__200->SetBinContent(5,0.01971742);
   VH_DHZfirst_H_jetmass_noJEC__200->SetBinContent(6,0.02824487);
   VH_DHZfirst_H_jetmass_noJEC__200->SetBinContent(7,0.03590553);
   VH_DHZfirst_H_jetmass_noJEC__200->SetBinContent(8,0.02627606);
   VH_DHZfirst_H_jetmass_noJEC__200->SetBinContent(9,0.02574201);
   VH_DHZfirst_H_jetmass_noJEC__200->SetBinContent(10,0.02750601);
   VH_DHZfirst_H_jetmass_noJEC__200->SetBinContent(11,0.01787093);
   VH_DHZfirst_H_jetmass_noJEC__200->SetBinContent(12,0.00616001);
   VH_DHZfirst_H_jetmass_noJEC__200->SetBinContent(13,0.01676526);
   VH_DHZfirst_H_jetmass_noJEC__200->SetBinContent(14,0.007289274);
   VH_DHZfirst_H_jetmass_noJEC__200->SetBinContent(15,0.01862353);
   VH_DHZfirst_H_jetmass_noJEC__200->SetBinContent(16,0.004226855);
   VH_DHZfirst_H_jetmass_noJEC__200->SetBinContent(17,0.002834392);
   VH_DHZfirst_H_jetmass_noJEC__200->SetBinContent(18,0.001879696);
   VH_DHZfirst_H_jetmass_noJEC__200->SetBinContent(19,0.003772612);
   VH_DHZfirst_H_jetmass_noJEC__200->SetBinContent(20,0.001336506);
   VH_DHZfirst_H_jetmass_noJEC__200->SetBinContent(21,0.002096956);
   VH_DHZfirst_H_jetmass_noJEC__200->SetBinContent(22,0.001224989);
   VH_DHZfirst_H_jetmass_noJEC__200->SetBinContent(48,0.002896017);
   VH_DHZfirst_H_jetmass_noJEC__200->SetBinError(4,0.001964891);
   VH_DHZfirst_H_jetmass_noJEC__200->SetBinError(5,0.006069004);
   VH_DHZfirst_H_jetmass_noJEC__200->SetBinError(6,0.00664255);
   VH_DHZfirst_H_jetmass_noJEC__200->SetBinError(7,0.007089682);
   VH_DHZfirst_H_jetmass_noJEC__200->SetBinError(8,0.005898031);
   VH_DHZfirst_H_jetmass_noJEC__200->SetBinError(9,0.005726038);
   VH_DHZfirst_H_jetmass_noJEC__200->SetBinError(10,0.005911364);
   VH_DHZfirst_H_jetmass_noJEC__200->SetBinError(11,0.005043094);
   VH_DHZfirst_H_jetmass_noJEC__200->SetBinError(12,0.002886886);
   VH_DHZfirst_H_jetmass_noJEC__200->SetBinError(13,0.004929813);
   VH_DHZfirst_H_jetmass_noJEC__200->SetBinError(14,0.003110759);
   VH_DHZfirst_H_jetmass_noJEC__200->SetBinError(15,0.005981208);
   VH_DHZfirst_H_jetmass_noJEC__200->SetBinError(16,0.002715557);
   VH_DHZfirst_H_jetmass_noJEC__200->SetBinError(17,0.002008519);
   VH_DHZfirst_H_jetmass_noJEC__200->SetBinError(18,0.001339435);
   VH_DHZfirst_H_jetmass_noJEC__200->SetBinError(19,0.002237554);
   VH_DHZfirst_H_jetmass_noJEC__200->SetBinError(20,0.001336506);
   VH_DHZfirst_H_jetmass_noJEC__200->SetBinError(21,0.002096956);
   VH_DHZfirst_H_jetmass_noJEC__200->SetBinError(22,0.001224989);
   VH_DHZfirst_H_jetmass_noJEC__200->SetBinError(48,0.002896017);
   VH_DHZfirst_H_jetmass_noJEC__200->SetEntries(199);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_H_jetmass_noJEC__200->SetLineColor(ci);
   VH_DHZfirst_H_jetmass_noJEC__200->GetXaxis()->SetTitle("c-jet mass [GeV]");
   VH_DHZfirst_H_jetmass_noJEC__200->GetXaxis()->SetRange(1,150);
   VH_DHZfirst_H_jetmass_noJEC__200->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_H_jetmass_noJEC__200->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_H_jetmass_noJEC__200->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_H_jetmass_noJEC__200->GetYaxis()->SetTitle("Events/2.0 GeV");
   VH_DHZfirst_H_jetmass_noJEC__200->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_H_jetmass_noJEC__200->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_H_jetmass_noJEC__200->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_H_jetmass_noJEC__200->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_H_jetmass_noJEC__200->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_H_jetmass_noJEC__200->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_H_jetmass_noJEC__200->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_H_jetmass_noJEC__200->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_H_jetmass_noJEC__200->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_jetmass_noJEC_DHZfirst_17->Modified();
   H_jetmass_noJEC_DHZfirst_17->cd();
   H_jetmass_noJEC_DHZfirst_17->SetSelected(H_jetmass_noJEC_DHZfirst_17);
}
