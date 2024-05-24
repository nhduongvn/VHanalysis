#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_jetmass_noJEC_WW_tagFirst_18()
{
//=========Macro generated from canvas: H_jetmass_noJEC_WW_tagFirst_18/H_jetmass_noJEC_WW_tagFirst_18
//=========  (Fri May 24 12:42:13 2024) by ROOT version 6.28/10
   TCanvas *H_jetmass_noJEC_WW_tagFirst_18 = new TCanvas("H_jetmass_noJEC_WW_tagFirst_18", "H_jetmass_noJEC_WW_tagFirst_18",0,0,600,600);
   gStyle->SetOptStat(0);
   H_jetmass_noJEC_WW_tagFirst_18->SetHighLightColor(2);
   H_jetmass_noJEC_WW_tagFirst_18->Range(-60,-2.387901,340,21.49111);
   H_jetmass_noJEC_WW_tagFirst_18->SetFillColor(0);
   H_jetmass_noJEC_WW_tagFirst_18->SetFillStyle(4000);
   H_jetmass_noJEC_WW_tagFirst_18->SetBorderMode(0);
   H_jetmass_noJEC_WW_tagFirst_18->SetBorderSize(2);
   H_jetmass_noJEC_WW_tagFirst_18->SetLeftMargin(0.15);
   H_jetmass_noJEC_WW_tagFirst_18->SetFrameFillStyle(1000);
   H_jetmass_noJEC_WW_tagFirst_18->SetFrameBorderMode(0);
   H_jetmass_noJEC_WW_tagFirst_18->SetFrameFillStyle(1000);
   H_jetmass_noJEC_WW_tagFirst_18->SetFrameBorderMode(0);
   
   TH1D *VH_tagFirst_H_jetmass_noJEC__564 = new TH1D("VH_tagFirst_H_jetmass_noJEC__564","",150,0,300);
   VH_tagFirst_H_jetmass_noJEC__564->SetBinContent(3,2.55585);
   VH_tagFirst_H_jetmass_noJEC__564->SetBinContent(4,11.9501);
   VH_tagFirst_H_jetmass_noJEC__564->SetBinContent(5,17.58931);
   VH_tagFirst_H_jetmass_noJEC__564->SetBinContent(6,18.19353);
   VH_tagFirst_H_jetmass_noJEC__564->SetBinContent(7,13.62677);
   VH_tagFirst_H_jetmass_noJEC__564->SetBinContent(8,12.77035);
   VH_tagFirst_H_jetmass_noJEC__564->SetBinContent(9,6.073118);
   VH_tagFirst_H_jetmass_noJEC__564->SetBinContent(10,9.758316);
   VH_tagFirst_H_jetmass_noJEC__564->SetBinContent(11,3.685893);
   VH_tagFirst_H_jetmass_noJEC__564->SetBinContent(12,4.325791);
   VH_tagFirst_H_jetmass_noJEC__564->SetBinContent(13,2.969087);
   VH_tagFirst_H_jetmass_noJEC__564->SetBinContent(14,2.80971);
   VH_tagFirst_H_jetmass_noJEC__564->SetBinContent(15,1.203721);
   VH_tagFirst_H_jetmass_noJEC__564->SetBinContent(16,0.7794853);
   VH_tagFirst_H_jetmass_noJEC__564->SetBinContent(18,1.156313);
   VH_tagFirst_H_jetmass_noJEC__564->SetBinContent(19,0.8964909);
   VH_tagFirst_H_jetmass_noJEC__564->SetBinContent(20,1.617483);
   VH_tagFirst_H_jetmass_noJEC__564->SetBinContent(23,0.4851978);
   VH_tagFirst_H_jetmass_noJEC__564->SetBinContent(44,0.3599908);
   VH_tagFirst_H_jetmass_noJEC__564->SetBinError(3,1.507758);
   VH_tagFirst_H_jetmass_noJEC__564->SetBinError(4,3.728674);
   VH_tagFirst_H_jetmass_noJEC__564->SetBinError(5,3.781937);
   VH_tagFirst_H_jetmass_noJEC__564->SetBinError(6,4.475589);
   VH_tagFirst_H_jetmass_noJEC__564->SetBinError(7,3.868094);
   VH_tagFirst_H_jetmass_noJEC__564->SetBinError(8,3.240283);
   VH_tagFirst_H_jetmass_noJEC__564->SetBinError(9,2.297822);
   VH_tagFirst_H_jetmass_noJEC__564->SetBinError(10,3.233459);
   VH_tagFirst_H_jetmass_noJEC__564->SetBinError(11,1.768323);
   VH_tagFirst_H_jetmass_noJEC__564->SetBinError(12,1.983951);
   VH_tagFirst_H_jetmass_noJEC__564->SetBinError(13,1.534591);
   VH_tagFirst_H_jetmass_noJEC__564->SetBinError(14,1.280808);
   VH_tagFirst_H_jetmass_noJEC__564->SetBinError(15,0.8618333);
   VH_tagFirst_H_jetmass_noJEC__564->SetBinError(16,0.7794853);
   VH_tagFirst_H_jetmass_noJEC__564->SetBinError(18,0.9124351);
   VH_tagFirst_H_jetmass_noJEC__564->SetBinError(19,0.6377124);
   VH_tagFirst_H_jetmass_noJEC__564->SetBinError(20,0.9387916);
   VH_tagFirst_H_jetmass_noJEC__564->SetBinError(23,0.4851978);
   VH_tagFirst_H_jetmass_noJEC__564->SetBinError(44,0.3599908);
   VH_tagFirst_H_jetmass_noJEC__564->SetEntries(150);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagFirst_H_jetmass_noJEC__564->SetLineColor(ci);
   VH_tagFirst_H_jetmass_noJEC__564->GetXaxis()->SetTitle("c-jet mass [GeV]");
   VH_tagFirst_H_jetmass_noJEC__564->GetXaxis()->SetRange(1,150);
   VH_tagFirst_H_jetmass_noJEC__564->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_H_jetmass_noJEC__564->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_H_jetmass_noJEC__564->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_H_jetmass_noJEC__564->GetYaxis()->SetTitle("Events/2.0 GeV");
   VH_tagFirst_H_jetmass_noJEC__564->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_H_jetmass_noJEC__564->GetYaxis()->SetLabelSize(0.05);
   VH_tagFirst_H_jetmass_noJEC__564->GetYaxis()->SetTitleSize(0.057);
   VH_tagFirst_H_jetmass_noJEC__564->GetYaxis()->SetTitleOffset(1.2);
   VH_tagFirst_H_jetmass_noJEC__564->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_H_jetmass_noJEC__564->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_H_jetmass_noJEC__564->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_H_jetmass_noJEC__564->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_H_jetmass_noJEC__564->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_jetmass_noJEC_WW_tagFirst_18->Modified();
   H_jetmass_noJEC_WW_tagFirst_18->cd();
   H_jetmass_noJEC_WW_tagFirst_18->SetSelected(H_jetmass_noJEC_WW_tagFirst_18);
}
