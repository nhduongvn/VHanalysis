#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_jetmass_noJEC_WW_DHZfirst_16_logY()
{
//=========Macro generated from canvas: H_jetmass_noJEC_WW_DHZfirst_16/H_jetmass_noJEC_WW_DHZfirst_16
//=========  (Thu May 23 20:48:53 2024) by ROOT version 6.28/10
   TCanvas *H_jetmass_noJEC_WW_DHZfirst_16 = new TCanvas("H_jetmass_noJEC_WW_DHZfirst_16", "H_jetmass_noJEC_WW_DHZfirst_16",0,0,600,600);
   gStyle->SetOptStat(0);
   H_jetmass_noJEC_WW_DHZfirst_16->SetHighLightColor(2);
   H_jetmass_noJEC_WW_DHZfirst_16->Range(-60,-1.509333,340,0.4800196);
   H_jetmass_noJEC_WW_DHZfirst_16->SetFillColor(0);
   H_jetmass_noJEC_WW_DHZfirst_16->SetFillStyle(4000);
   H_jetmass_noJEC_WW_DHZfirst_16->SetBorderMode(0);
   H_jetmass_noJEC_WW_DHZfirst_16->SetBorderSize(2);
   H_jetmass_noJEC_WW_DHZfirst_16->SetLogy();
   H_jetmass_noJEC_WW_DHZfirst_16->SetLeftMargin(0.15);
   H_jetmass_noJEC_WW_DHZfirst_16->SetFrameFillStyle(1000);
   H_jetmass_noJEC_WW_DHZfirst_16->SetFrameBorderMode(0);
   H_jetmass_noJEC_WW_DHZfirst_16->SetFrameFillStyle(1000);
   H_jetmass_noJEC_WW_DHZfirst_16->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_H_jetmass_noJEC__2002 = new TH1D("VH_DHZfirst_H_jetmass_noJEC__2002","",150,0,300);
   VH_DHZfirst_H_jetmass_noJEC__2002->SetBinContent(5,0.5166067);
   VH_DHZfirst_H_jetmass_noJEC__2002->SetBinContent(6,0.7125794);
   VH_DHZfirst_H_jetmass_noJEC__2002->SetBinContent(7,0.6333582);
   VH_DHZfirst_H_jetmass_noJEC__2002->SetBinContent(8,1.008174);
   VH_DHZfirst_H_jetmass_noJEC__2002->SetBinContent(9,0.2088387);
   VH_DHZfirst_H_jetmass_noJEC__2002->SetBinContent(10,0.3629166);
   VH_DHZfirst_H_jetmass_noJEC__2002->SetBinContent(11,0.2085051);
   VH_DHZfirst_H_jetmass_noJEC__2002->SetBinContent(12,0.09786616);
   VH_DHZfirst_H_jetmass_noJEC__2002->SetBinContent(13,0.5015855);
   VH_DHZfirst_H_jetmass_noJEC__2002->SetBinContent(14,0.658186);
   VH_DHZfirst_H_jetmass_noJEC__2002->SetBinContent(15,0.3383341);
   VH_DHZfirst_H_jetmass_noJEC__2002->SetBinContent(16,0.1123678);
   VH_DHZfirst_H_jetmass_noJEC__2002->SetBinContent(17,0.2017659);
   VH_DHZfirst_H_jetmass_noJEC__2002->SetBinContent(18,0.3818051);
   VH_DHZfirst_H_jetmass_noJEC__2002->SetBinContent(22,0.1016428);
   VH_DHZfirst_H_jetmass_noJEC__2002->SetBinContent(23,0.1422154);
   VH_DHZfirst_H_jetmass_noJEC__2002->SetBinContent(24,0.1140815);
   VH_DHZfirst_H_jetmass_noJEC__2002->SetBinContent(25,0.1162515);
   VH_DHZfirst_H_jetmass_noJEC__2002->SetBinContent(26,0.1563058);
   VH_DHZfirst_H_jetmass_noJEC__2002->SetBinContent(28,0.130456);
   VH_DHZfirst_H_jetmass_noJEC__2002->SetBinContent(32,0.1069328);
   VH_DHZfirst_H_jetmass_noJEC__2002->SetBinContent(40,0.1305371);
   VH_DHZfirst_H_jetmass_noJEC__2002->SetBinContent(47,0.1252842);
   VH_DHZfirst_H_jetmass_noJEC__2002->SetBinContent(49,0.1579972);
   VH_DHZfirst_H_jetmass_noJEC__2002->SetBinError(5,0.2324856);
   VH_DHZfirst_H_jetmass_noJEC__2002->SetBinError(6,0.254139);
   VH_DHZfirst_H_jetmass_noJEC__2002->SetBinError(7,0.2643436);
   VH_DHZfirst_H_jetmass_noJEC__2002->SetBinError(8,0.3444546);
   VH_DHZfirst_H_jetmass_noJEC__2002->SetBinError(9,0.1476713);
   VH_DHZfirst_H_jetmass_noJEC__2002->SetBinError(10,0.1926448);
   VH_DHZfirst_H_jetmass_noJEC__2002->SetBinError(11,0.1557747);
   VH_DHZfirst_H_jetmass_noJEC__2002->SetBinError(12,0.09786616);
   VH_DHZfirst_H_jetmass_noJEC__2002->SetBinError(13,0.2301508);
   VH_DHZfirst_H_jetmass_noJEC__2002->SetBinError(14,0.2697299);
   VH_DHZfirst_H_jetmass_noJEC__2002->SetBinError(15,0.1957276);
   VH_DHZfirst_H_jetmass_noJEC__2002->SetBinError(16,0.1123678);
   VH_DHZfirst_H_jetmass_noJEC__2002->SetBinError(17,0.1426708);
   VH_DHZfirst_H_jetmass_noJEC__2002->SetBinError(18,0.2244659);
   VH_DHZfirst_H_jetmass_noJEC__2002->SetBinError(22,0.1016428);
   VH_DHZfirst_H_jetmass_noJEC__2002->SetBinError(23,0.1422154);
   VH_DHZfirst_H_jetmass_noJEC__2002->SetBinError(24,0.1140815);
   VH_DHZfirst_H_jetmass_noJEC__2002->SetBinError(25,0.1162515);
   VH_DHZfirst_H_jetmass_noJEC__2002->SetBinError(26,0.1563058);
   VH_DHZfirst_H_jetmass_noJEC__2002->SetBinError(28,0.130456);
   VH_DHZfirst_H_jetmass_noJEC__2002->SetBinError(32,0.1069328);
   VH_DHZfirst_H_jetmass_noJEC__2002->SetBinError(40,0.1305371);
   VH_DHZfirst_H_jetmass_noJEC__2002->SetBinError(47,0.1252842);
   VH_DHZfirst_H_jetmass_noJEC__2002->SetBinError(49,0.1579972);
   VH_DHZfirst_H_jetmass_noJEC__2002->SetEntries(67);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_H_jetmass_noJEC__2002->SetLineColor(ci);
   VH_DHZfirst_H_jetmass_noJEC__2002->GetXaxis()->SetTitle("c-jet mass [GeV]");
   VH_DHZfirst_H_jetmass_noJEC__2002->GetXaxis()->SetRange(1,150);
   VH_DHZfirst_H_jetmass_noJEC__2002->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_H_jetmass_noJEC__2002->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_H_jetmass_noJEC__2002->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_H_jetmass_noJEC__2002->GetYaxis()->SetTitle("Events/2.0 GeV");
   VH_DHZfirst_H_jetmass_noJEC__2002->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_H_jetmass_noJEC__2002->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_H_jetmass_noJEC__2002->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_H_jetmass_noJEC__2002->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_H_jetmass_noJEC__2002->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_H_jetmass_noJEC__2002->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_H_jetmass_noJEC__2002->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_H_jetmass_noJEC__2002->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_H_jetmass_noJEC__2002->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_jetmass_noJEC_WW_DHZfirst_16->Modified();
   H_jetmass_noJEC_WW_DHZfirst_16->cd();
   H_jetmass_noJEC_WW_DHZfirst_16->SetSelected(H_jetmass_noJEC_WW_DHZfirst_16);
}
