#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_jetmass_JEC_DHZfirst_16()
{
//=========Macro generated from canvas: H_jetmass_JEC_DHZfirst_16/H_jetmass_JEC_DHZfirst_16
//=========  (Mon Apr  8 11:27:53 2024) by ROOT version 6.28/10
   TCanvas *H_jetmass_JEC_DHZfirst_16 = new TCanvas("H_jetmass_JEC_DHZfirst_16", "H_jetmass_JEC_DHZfirst_16",0,0,600,600);
   gStyle->SetOptStat(0);
   H_jetmass_JEC_DHZfirst_16->SetHighLightColor(2);
   H_jetmass_JEC_DHZfirst_16->Range(-60,-0.007321644,340,0.06589479);
   H_jetmass_JEC_DHZfirst_16->SetFillColor(0);
   H_jetmass_JEC_DHZfirst_16->SetFillStyle(4000);
   H_jetmass_JEC_DHZfirst_16->SetBorderMode(0);
   H_jetmass_JEC_DHZfirst_16->SetBorderSize(2);
   H_jetmass_JEC_DHZfirst_16->SetLeftMargin(0.15);
   H_jetmass_JEC_DHZfirst_16->SetFrameFillStyle(1000);
   H_jetmass_JEC_DHZfirst_16->SetFrameBorderMode(0);
   H_jetmass_JEC_DHZfirst_16->SetFrameFillStyle(1000);
   H_jetmass_JEC_DHZfirst_16->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_H_jetmass_JEC__202 = new TH1D("VH_DHZfirst_H_jetmass_JEC__202","",150,0,300);
   VH_DHZfirst_H_jetmass_JEC__202->SetBinContent(3,0.003640037);
   VH_DHZfirst_H_jetmass_JEC__202->SetBinContent(4,0.01400257);
   VH_DHZfirst_H_jetmass_JEC__202->SetBinContent(5,0.05239012);
   VH_DHZfirst_H_jetmass_JEC__202->SetBinContent(6,0.05578395);
   VH_DHZfirst_H_jetmass_JEC__202->SetBinContent(7,0.0393656);
   VH_DHZfirst_H_jetmass_JEC__202->SetBinContent(8,0.04294008);
   VH_DHZfirst_H_jetmass_JEC__202->SetBinContent(9,0.02011235);
   VH_DHZfirst_H_jetmass_JEC__202->SetBinContent(10,0.02127496);
   VH_DHZfirst_H_jetmass_JEC__202->SetBinContent(11,0.02497569);
   VH_DHZfirst_H_jetmass_JEC__202->SetBinContent(12,0.008426307);
   VH_DHZfirst_H_jetmass_JEC__202->SetBinContent(13,0.006321025);
   VH_DHZfirst_H_jetmass_JEC__202->SetBinContent(14,0.006294404);
   VH_DHZfirst_H_jetmass_JEC__202->SetBinContent(15,0.004804023);
   VH_DHZfirst_H_jetmass_JEC__202->SetBinContent(16,0.004722083);
   VH_DHZfirst_H_jetmass_JEC__202->SetBinContent(17,0.004193103);
   VH_DHZfirst_H_jetmass_JEC__202->SetBinContent(18,0.002012833);
   VH_DHZfirst_H_jetmass_JEC__202->SetBinContent(19,0.002229434);
   VH_DHZfirst_H_jetmass_JEC__202->SetBinContent(23,0.001931281);
   VH_DHZfirst_H_jetmass_JEC__202->SetBinContent(36,0.002201754);
   VH_DHZfirst_H_jetmass_JEC__202->SetBinContent(37,0.001902779);
   VH_DHZfirst_H_jetmass_JEC__202->SetBinContent(49,0.002445654);
   VH_DHZfirst_H_jetmass_JEC__202->SetBinError(3,0.002573908);
   VH_DHZfirst_H_jetmass_JEC__202->SetBinError(4,0.005006435);
   VH_DHZfirst_H_jetmass_JEC__202->SetBinError(5,0.01002724);
   VH_DHZfirst_H_jetmass_JEC__202->SetBinError(6,0.01046616);
   VH_DHZfirst_H_jetmass_JEC__202->SetBinError(7,0.008835314);
   VH_DHZfirst_H_jetmass_JEC__202->SetBinError(8,0.009060174);
   VH_DHZfirst_H_jetmass_JEC__202->SetBinError(9,0.00614713);
   VH_DHZfirst_H_jetmass_JEC__202->SetBinError(10,0.006763959);
   VH_DHZfirst_H_jetmass_JEC__202->SetBinError(11,0.007245552);
   VH_DHZfirst_H_jetmass_JEC__202->SetBinError(12,0.004240176);
   VH_DHZfirst_H_jetmass_JEC__202->SetBinError(13,0.003653433);
   VH_DHZfirst_H_jetmass_JEC__202->SetBinError(14,0.003638941);
   VH_DHZfirst_H_jetmass_JEC__202->SetBinError(15,0.003398298);
   VH_DHZfirst_H_jetmass_JEC__202->SetBinError(16,0.003372069);
   VH_DHZfirst_H_jetmass_JEC__202->SetBinError(17,0.002972195);
   VH_DHZfirst_H_jetmass_JEC__202->SetBinError(18,0.002012833);
   VH_DHZfirst_H_jetmass_JEC__202->SetBinError(19,0.002229434);
   VH_DHZfirst_H_jetmass_JEC__202->SetBinError(23,0.001931281);
   VH_DHZfirst_H_jetmass_JEC__202->SetBinError(36,0.002201754);
   VH_DHZfirst_H_jetmass_JEC__202->SetBinError(37,0.001902779);
   VH_DHZfirst_H_jetmass_JEC__202->SetBinError(49,0.002445654);
   VH_DHZfirst_H_jetmass_JEC__202->SetEntries(167);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_H_jetmass_JEC__202->SetLineColor(ci);
   VH_DHZfirst_H_jetmass_JEC__202->GetXaxis()->SetTitle("c-jet mass (w/ JEC) [GeV]");
   VH_DHZfirst_H_jetmass_JEC__202->GetXaxis()->SetRange(1,150);
   VH_DHZfirst_H_jetmass_JEC__202->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_H_jetmass_JEC__202->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_H_jetmass_JEC__202->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_H_jetmass_JEC__202->GetYaxis()->SetTitle("Events/2.0 GeV");
   VH_DHZfirst_H_jetmass_JEC__202->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_H_jetmass_JEC__202->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_H_jetmass_JEC__202->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_H_jetmass_JEC__202->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_H_jetmass_JEC__202->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_H_jetmass_JEC__202->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_H_jetmass_JEC__202->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_H_jetmass_JEC__202->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_H_jetmass_JEC__202->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_jetmass_JEC_DHZfirst_16->Modified();
   H_jetmass_JEC_DHZfirst_16->cd();
   H_jetmass_JEC_DHZfirst_16->SetSelected(H_jetmass_JEC_DHZfirst_16);
}
