#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_jetmass_noJEC_WW_tagFirst_17()
{
//=========Macro generated from canvas: H_jetmass_noJEC_WW_tagFirst_17/H_jetmass_noJEC_WW_tagFirst_17
//=========  (Fri May 24 12:42:13 2024) by ROOT version 6.28/10
   TCanvas *H_jetmass_noJEC_WW_tagFirst_17 = new TCanvas("H_jetmass_noJEC_WW_tagFirst_17", "H_jetmass_noJEC_WW_tagFirst_17",0,0,600,600);
   gStyle->SetOptStat(0);
   H_jetmass_noJEC_WW_tagFirst_17->SetHighLightColor(2);
   H_jetmass_noJEC_WW_tagFirst_17->Range(-60,-1.545361,340,13.90825);
   H_jetmass_noJEC_WW_tagFirst_17->SetFillColor(0);
   H_jetmass_noJEC_WW_tagFirst_17->SetFillStyle(4000);
   H_jetmass_noJEC_WW_tagFirst_17->SetBorderMode(0);
   H_jetmass_noJEC_WW_tagFirst_17->SetBorderSize(2);
   H_jetmass_noJEC_WW_tagFirst_17->SetLeftMargin(0.15);
   H_jetmass_noJEC_WW_tagFirst_17->SetFrameFillStyle(1000);
   H_jetmass_noJEC_WW_tagFirst_17->SetFrameBorderMode(0);
   H_jetmass_noJEC_WW_tagFirst_17->SetFrameFillStyle(1000);
   H_jetmass_noJEC_WW_tagFirst_17->SetFrameBorderMode(0);
   
   TH1D *VH_tagFirst_H_jetmass_noJEC__563 = new TH1D("VH_tagFirst_H_jetmass_noJEC__563","",150,0,300);
   VH_tagFirst_H_jetmass_noJEC__563->SetBinContent(3,0.6054699);
   VH_tagFirst_H_jetmass_noJEC__563->SetBinContent(4,7.1813);
   VH_tagFirst_H_jetmass_noJEC__563->SetBinContent(5,11.77418);
   VH_tagFirst_H_jetmass_noJEC__563->SetBinContent(6,8.138521);
   VH_tagFirst_H_jetmass_noJEC__563->SetBinContent(7,7.627189);
   VH_tagFirst_H_jetmass_noJEC__563->SetBinContent(8,8.22976);
   VH_tagFirst_H_jetmass_noJEC__563->SetBinContent(9,3.32944);
   VH_tagFirst_H_jetmass_noJEC__563->SetBinContent(10,3.114167);
   VH_tagFirst_H_jetmass_noJEC__563->SetBinContent(11,1.027967);
   VH_tagFirst_H_jetmass_noJEC__563->SetBinContent(12,2.722296);
   VH_tagFirst_H_jetmass_noJEC__563->SetBinContent(13,0.7252942);
   VH_tagFirst_H_jetmass_noJEC__563->SetBinContent(14,1.08223);
   VH_tagFirst_H_jetmass_noJEC__563->SetBinContent(15,0.5523397);
   VH_tagFirst_H_jetmass_noJEC__563->SetBinContent(16,0.4644996);
   VH_tagFirst_H_jetmass_noJEC__563->SetBinContent(17,0.287519);
   VH_tagFirst_H_jetmass_noJEC__563->SetBinContent(18,1.521076);
   VH_tagFirst_H_jetmass_noJEC__563->SetBinContent(19,0.4564951);
   VH_tagFirst_H_jetmass_noJEC__563->SetBinContent(21,0.5239543);
   VH_tagFirst_H_jetmass_noJEC__563->SetBinContent(24,0.4524769);
   VH_tagFirst_H_jetmass_noJEC__563->SetBinContent(28,0.2776511);
   VH_tagFirst_H_jetmass_noJEC__563->SetBinContent(34,0.4199524);
   VH_tagFirst_H_jetmass_noJEC__563->SetBinError(3,0.4326153);
   VH_tagFirst_H_jetmass_noJEC__563->SetBinError(4,1.780106);
   VH_tagFirst_H_jetmass_noJEC__563->SetBinError(5,1.989542);
   VH_tagFirst_H_jetmass_noJEC__563->SetBinError(6,1.84073);
   VH_tagFirst_H_jetmass_noJEC__563->SetBinError(7,1.606503);
   VH_tagFirst_H_jetmass_noJEC__563->SetBinError(8,1.758646);
   VH_tagFirst_H_jetmass_noJEC__563->SetBinError(9,0.9495994);
   VH_tagFirst_H_jetmass_noJEC__563->SetBinError(10,1.082337);
   VH_tagFirst_H_jetmass_noJEC__563->SetBinError(11,0.469396);
   VH_tagFirst_H_jetmass_noJEC__563->SetBinError(12,1.072953);
   VH_tagFirst_H_jetmass_noJEC__563->SetBinError(13,0.4338508);
   VH_tagFirst_H_jetmass_noJEC__563->SetBinError(14,0.5802567);
   VH_tagFirst_H_jetmass_noJEC__563->SetBinError(15,0.392151);
   VH_tagFirst_H_jetmass_noJEC__563->SetBinError(16,0.3302773);
   VH_tagFirst_H_jetmass_noJEC__563->SetBinError(17,0.287519);
   VH_tagFirst_H_jetmass_noJEC__563->SetBinError(18,1.070108);
   VH_tagFirst_H_jetmass_noJEC__563->SetBinError(19,0.3227922);
   VH_tagFirst_H_jetmass_noJEC__563->SetBinError(21,0.3800238);
   VH_tagFirst_H_jetmass_noJEC__563->SetBinError(24,0.3825802);
   VH_tagFirst_H_jetmass_noJEC__563->SetBinError(28,0.2776511);
   VH_tagFirst_H_jetmass_noJEC__563->SetBinError(34,0.4199524);
   VH_tagFirst_H_jetmass_noJEC__563->SetEntries(204);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagFirst_H_jetmass_noJEC__563->SetLineColor(ci);
   VH_tagFirst_H_jetmass_noJEC__563->GetXaxis()->SetTitle("c-jet mass [GeV]");
   VH_tagFirst_H_jetmass_noJEC__563->GetXaxis()->SetRange(1,150);
   VH_tagFirst_H_jetmass_noJEC__563->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_H_jetmass_noJEC__563->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_H_jetmass_noJEC__563->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_H_jetmass_noJEC__563->GetYaxis()->SetTitle("Events/2.0 GeV");
   VH_tagFirst_H_jetmass_noJEC__563->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_H_jetmass_noJEC__563->GetYaxis()->SetLabelSize(0.05);
   VH_tagFirst_H_jetmass_noJEC__563->GetYaxis()->SetTitleSize(0.057);
   VH_tagFirst_H_jetmass_noJEC__563->GetYaxis()->SetTitleOffset(1.2);
   VH_tagFirst_H_jetmass_noJEC__563->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_H_jetmass_noJEC__563->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_H_jetmass_noJEC__563->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_H_jetmass_noJEC__563->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_H_jetmass_noJEC__563->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_jetmass_noJEC_WW_tagFirst_17->Modified();
   H_jetmass_noJEC_WW_tagFirst_17->cd();
   H_jetmass_noJEC_WW_tagFirst_17->SetSelected(H_jetmass_noJEC_WW_tagFirst_17);
}
