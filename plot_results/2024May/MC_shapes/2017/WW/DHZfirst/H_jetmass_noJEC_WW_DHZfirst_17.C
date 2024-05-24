#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_jetmass_noJEC_WW_DHZfirst_17()
{
//=========Macro generated from canvas: H_jetmass_noJEC_WW_DHZfirst_17/H_jetmass_noJEC_WW_DHZfirst_17
//=========  (Fri May 24 12:42:34 2024) by ROOT version 6.28/10
   TCanvas *H_jetmass_noJEC_WW_DHZfirst_17 = new TCanvas("H_jetmass_noJEC_WW_DHZfirst_17", "H_jetmass_noJEC_WW_DHZfirst_17",0,0,600,600);
   gStyle->SetOptStat(0);
   H_jetmass_noJEC_WW_DHZfirst_17->SetHighLightColor(2);
   H_jetmass_noJEC_WW_DHZfirst_17->Range(-60,-0.09850247,340,0.8865222);
   H_jetmass_noJEC_WW_DHZfirst_17->SetFillColor(0);
   H_jetmass_noJEC_WW_DHZfirst_17->SetFillStyle(4000);
   H_jetmass_noJEC_WW_DHZfirst_17->SetBorderMode(0);
   H_jetmass_noJEC_WW_DHZfirst_17->SetBorderSize(2);
   H_jetmass_noJEC_WW_DHZfirst_17->SetLeftMargin(0.15);
   H_jetmass_noJEC_WW_DHZfirst_17->SetFrameFillStyle(1000);
   H_jetmass_noJEC_WW_DHZfirst_17->SetFrameBorderMode(0);
   H_jetmass_noJEC_WW_DHZfirst_17->SetFrameFillStyle(1000);
   H_jetmass_noJEC_WW_DHZfirst_17->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_H_jetmass_noJEC__2003 = new TH1D("VH_DHZfirst_H_jetmass_noJEC__2003","",150,0,300);
   VH_DHZfirst_H_jetmass_noJEC__2003->SetBinContent(4,0.4956396);
   VH_DHZfirst_H_jetmass_noJEC__2003->SetBinContent(7,0.5551525);
   VH_DHZfirst_H_jetmass_noJEC__2003->SetBinContent(9,0.750495);
   VH_DHZfirst_H_jetmass_noJEC__2003->SetBinContent(11,0.2553652);
   VH_DHZfirst_H_jetmass_noJEC__2003->SetBinContent(12,0.4893481);
   VH_DHZfirst_H_jetmass_noJEC__2003->SetBinContent(15,0.4922072);
   VH_DHZfirst_H_jetmass_noJEC__2003->SetBinContent(16,0.4165722);
   VH_DHZfirst_H_jetmass_noJEC__2003->SetBinContent(20,0.2290723);
   VH_DHZfirst_H_jetmass_noJEC__2003->SetBinContent(24,0.07791458);
   VH_DHZfirst_H_jetmass_noJEC__2003->SetBinContent(28,0.2776511);
   VH_DHZfirst_H_jetmass_noJEC__2003->SetBinError(4,0.4956396);
   VH_DHZfirst_H_jetmass_noJEC__2003->SetBinError(7,0.3265547);
   VH_DHZfirst_H_jetmass_noJEC__2003->SetBinError(9,0.4512374);
   VH_DHZfirst_H_jetmass_noJEC__2003->SetBinError(11,0.2553652);
   VH_DHZfirst_H_jetmass_noJEC__2003->SetBinError(12,0.4893481);
   VH_DHZfirst_H_jetmass_noJEC__2003->SetBinError(15,0.4922072);
   VH_DHZfirst_H_jetmass_noJEC__2003->SetBinError(16,0.2946307);
   VH_DHZfirst_H_jetmass_noJEC__2003->SetBinError(20,0.2290723);
   VH_DHZfirst_H_jetmass_noJEC__2003->SetBinError(24,0.07791458);
   VH_DHZfirst_H_jetmass_noJEC__2003->SetBinError(28,0.2776511);
   VH_DHZfirst_H_jetmass_noJEC__2003->SetEntries(15);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_H_jetmass_noJEC__2003->SetLineColor(ci);
   VH_DHZfirst_H_jetmass_noJEC__2003->GetXaxis()->SetTitle("c-jet mass [GeV]");
   VH_DHZfirst_H_jetmass_noJEC__2003->GetXaxis()->SetRange(1,150);
   VH_DHZfirst_H_jetmass_noJEC__2003->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_H_jetmass_noJEC__2003->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_H_jetmass_noJEC__2003->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_H_jetmass_noJEC__2003->GetYaxis()->SetTitle("Events/2.0 GeV");
   VH_DHZfirst_H_jetmass_noJEC__2003->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_H_jetmass_noJEC__2003->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_H_jetmass_noJEC__2003->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_H_jetmass_noJEC__2003->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_H_jetmass_noJEC__2003->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_H_jetmass_noJEC__2003->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_H_jetmass_noJEC__2003->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_H_jetmass_noJEC__2003->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_H_jetmass_noJEC__2003->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_jetmass_noJEC_WW_DHZfirst_17->Modified();
   H_jetmass_noJEC_WW_DHZfirst_17->cd();
   H_jetmass_noJEC_WW_DHZfirst_17->SetSelected(H_jetmass_noJEC_WW_DHZfirst_17);
}
