#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_jetmass_noJEC_WW_DHZfirst_18_logY()
{
//=========Macro generated from canvas: H_jetmass_noJEC_WW_DHZfirst_18/H_jetmass_noJEC_WW_DHZfirst_18
//=========  (Thu May 23 20:48:53 2024) by ROOT version 6.28/10
   TCanvas *H_jetmass_noJEC_WW_DHZfirst_18 = new TCanvas("H_jetmass_noJEC_WW_DHZfirst_18", "H_jetmass_noJEC_WW_DHZfirst_18",0,0,600,600);
   gStyle->SetOptStat(0);
   H_jetmass_noJEC_WW_DHZfirst_18->SetHighLightColor(2);
   H_jetmass_noJEC_WW_DHZfirst_18->Range(-60,-0.7003723,340,0.5233112);
   H_jetmass_noJEC_WW_DHZfirst_18->SetFillColor(0);
   H_jetmass_noJEC_WW_DHZfirst_18->SetFillStyle(4000);
   H_jetmass_noJEC_WW_DHZfirst_18->SetBorderMode(0);
   H_jetmass_noJEC_WW_DHZfirst_18->SetBorderSize(2);
   H_jetmass_noJEC_WW_DHZfirst_18->SetLogy();
   H_jetmass_noJEC_WW_DHZfirst_18->SetLeftMargin(0.15);
   H_jetmass_noJEC_WW_DHZfirst_18->SetFrameFillStyle(1000);
   H_jetmass_noJEC_WW_DHZfirst_18->SetFrameBorderMode(0);
   H_jetmass_noJEC_WW_DHZfirst_18->SetFrameFillStyle(1000);
   H_jetmass_noJEC_WW_DHZfirst_18->SetFrameBorderMode(0);
   
   TH1D *VH_DHZfirst_H_jetmass_noJEC__2004 = new TH1D("VH_DHZfirst_H_jetmass_noJEC__2004","",150,0,300);
   VH_DHZfirst_H_jetmass_noJEC__2004->SetBinContent(5,1.133768);
   VH_DHZfirst_H_jetmass_noJEC__2004->SetBinContent(8,0.741126);
   VH_DHZfirst_H_jetmass_noJEC__2004->SetBinContent(11,1.112441);
   VH_DHZfirst_H_jetmass_noJEC__2004->SetBinContent(13,1.328599);
   VH_DHZfirst_H_jetmass_noJEC__2004->SetBinContent(14,0.6140818);
   VH_DHZfirst_H_jetmass_noJEC__2004->SetBinContent(41,0.5284769);
   VH_DHZfirst_H_jetmass_noJEC__2004->SetBinError(5,0.8100079);
   VH_DHZfirst_H_jetmass_noJEC__2004->SetBinError(8,0.741126);
   VH_DHZfirst_H_jetmass_noJEC__2004->SetBinError(11,0.8044671);
   VH_DHZfirst_H_jetmass_noJEC__2004->SetBinError(13,0.9522947);
   VH_DHZfirst_H_jetmass_noJEC__2004->SetBinError(14,0.6140818);
   VH_DHZfirst_H_jetmass_noJEC__2004->SetBinError(41,0.5284769);
   VH_DHZfirst_H_jetmass_noJEC__2004->SetEntries(9);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_DHZfirst_H_jetmass_noJEC__2004->SetLineColor(ci);
   VH_DHZfirst_H_jetmass_noJEC__2004->GetXaxis()->SetTitle("c-jet mass [GeV]");
   VH_DHZfirst_H_jetmass_noJEC__2004->GetXaxis()->SetRange(1,150);
   VH_DHZfirst_H_jetmass_noJEC__2004->GetXaxis()->SetLabelFont(42);
   VH_DHZfirst_H_jetmass_noJEC__2004->GetXaxis()->SetTitleOffset(1);
   VH_DHZfirst_H_jetmass_noJEC__2004->GetXaxis()->SetTitleFont(42);
   VH_DHZfirst_H_jetmass_noJEC__2004->GetYaxis()->SetTitle("Events/2.0 GeV");
   VH_DHZfirst_H_jetmass_noJEC__2004->GetYaxis()->SetLabelFont(42);
   VH_DHZfirst_H_jetmass_noJEC__2004->GetYaxis()->SetLabelSize(0.05);
   VH_DHZfirst_H_jetmass_noJEC__2004->GetYaxis()->SetTitleSize(0.057);
   VH_DHZfirst_H_jetmass_noJEC__2004->GetYaxis()->SetTitleOffset(1.2);
   VH_DHZfirst_H_jetmass_noJEC__2004->GetYaxis()->SetTitleFont(42);
   VH_DHZfirst_H_jetmass_noJEC__2004->GetZaxis()->SetLabelFont(42);
   VH_DHZfirst_H_jetmass_noJEC__2004->GetZaxis()->SetTitleOffset(1);
   VH_DHZfirst_H_jetmass_noJEC__2004->GetZaxis()->SetTitleFont(42);
   VH_DHZfirst_H_jetmass_noJEC__2004->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_jetmass_noJEC_WW_DHZfirst_18->Modified();
   H_jetmass_noJEC_WW_DHZfirst_18->cd();
   H_jetmass_noJEC_WW_DHZfirst_18->SetSelected(H_jetmass_noJEC_WW_DHZfirst_18);
}
