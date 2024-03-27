#ifdef __CLING__
#pragma cling optimize(0)
#endif
void H_jetmass_noJEC()
{
//=========Macro generated from canvas: H_jetmass_noJEC/H_jetmass_noJEC
//=========  (Wed Mar 27 16:46:16 2024) by ROOT version 6.28/10
   TCanvas *H_jetmass_noJEC = new TCanvas("H_jetmass_noJEC", "H_jetmass_noJEC",0,0,600,600);
   gStyle->SetOptStat(0);
   H_jetmass_noJEC->SetHighLightColor(2);
   H_jetmass_noJEC->Range(-60,-0.07334793,340,0.6601313);
   H_jetmass_noJEC->SetFillColor(0);
   H_jetmass_noJEC->SetFillStyle(4000);
   H_jetmass_noJEC->SetBorderMode(0);
   H_jetmass_noJEC->SetBorderSize(2);
   H_jetmass_noJEC->SetLeftMargin(0.15);
   H_jetmass_noJEC->SetFrameFillStyle(1000);
   H_jetmass_noJEC->SetFrameBorderMode(0);
   H_jetmass_noJEC->SetFrameFillStyle(1000);
   H_jetmass_noJEC->SetFrameBorderMode(0);
   
   TH1D *VH_tagFirst_H_jetmass_noJEC__19 = new TH1D("VH_tagFirst_H_jetmass_noJEC__19","",150,0,300);
   VH_tagFirst_H_jetmass_noJEC__19->SetBinContent(2,0.002236962);
   VH_tagFirst_H_jetmass_noJEC__19->SetBinContent(3,0.0715954);
   VH_tagFirst_H_jetmass_noJEC__19->SetBinContent(4,0.2266102);
   VH_tagFirst_H_jetmass_noJEC__19->SetBinContent(5,0.4958136);
   VH_tagFirst_H_jetmass_noJEC__19->SetBinContent(6,0.5588413);
   VH_tagFirst_H_jetmass_noJEC__19->SetBinContent(7,0.3917383);
   VH_tagFirst_H_jetmass_noJEC__19->SetBinContent(8,0.2348244);
   VH_tagFirst_H_jetmass_noJEC__19->SetBinContent(9,0.2363507);
   VH_tagFirst_H_jetmass_noJEC__19->SetBinContent(10,0.1785088);
   VH_tagFirst_H_jetmass_noJEC__19->SetBinContent(11,0.1076083);
   VH_tagFirst_H_jetmass_noJEC__19->SetBinContent(12,0.07558139);
   VH_tagFirst_H_jetmass_noJEC__19->SetBinContent(13,0.05833248);
   VH_tagFirst_H_jetmass_noJEC__19->SetBinContent(14,0.06028275);
   VH_tagFirst_H_jetmass_noJEC__19->SetBinContent(15,0.03046972);
   VH_tagFirst_H_jetmass_noJEC__19->SetBinContent(16,0.02232331);
   VH_tagFirst_H_jetmass_noJEC__19->SetBinContent(17,0.008252078);
   VH_tagFirst_H_jetmass_noJEC__19->SetBinContent(18,0.01630204);
   VH_tagFirst_H_jetmass_noJEC__19->SetBinContent(19,0.002173099);
   VH_tagFirst_H_jetmass_noJEC__19->SetBinContent(21,0.006609642);
   VH_tagFirst_H_jetmass_noJEC__19->SetBinContent(22,0.00228835);
   VH_tagFirst_H_jetmass_noJEC__19->SetBinContent(23,0.006518862);
   VH_tagFirst_H_jetmass_noJEC__19->SetBinContent(24,0.009349919);
   VH_tagFirst_H_jetmass_noJEC__19->SetBinContent(25,0.003879109);
   VH_tagFirst_H_jetmass_noJEC__19->SetBinContent(28,0.002349545);
   VH_tagFirst_H_jetmass_noJEC__19->SetBinContent(36,0.002611954);
   VH_tagFirst_H_jetmass_noJEC__19->SetBinContent(37,0.002037685);
   VH_tagFirst_H_jetmass_noJEC__19->SetBinContent(39,0.003018695);
   VH_tagFirst_H_jetmass_noJEC__19->SetBinContent(42,0.003209975);
   VH_tagFirst_H_jetmass_noJEC__19->SetBinError(2,0.002236962);
   VH_tagFirst_H_jetmass_noJEC__19->SetBinError(3,0.02282753);
   VH_tagFirst_H_jetmass_noJEC__19->SetBinError(4,0.03364021);
   VH_tagFirst_H_jetmass_noJEC__19->SetBinError(5,0.04171659);
   VH_tagFirst_H_jetmass_noJEC__19->SetBinError(6,0.04452541);
   VH_tagFirst_H_jetmass_noJEC__19->SetBinError(7,0.03791796);
   VH_tagFirst_H_jetmass_noJEC__19->SetBinError(8,0.02551313);
   VH_tagFirst_H_jetmass_noJEC__19->SetBinError(9,0.03640647);
   VH_tagFirst_H_jetmass_noJEC__19->SetBinError(10,0.03202179);
   VH_tagFirst_H_jetmass_noJEC__19->SetBinError(11,0.01874282);
   VH_tagFirst_H_jetmass_noJEC__19->SetBinError(12,0.01586921);
   VH_tagFirst_H_jetmass_noJEC__19->SetBinError(13,0.0128975);
   VH_tagFirst_H_jetmass_noJEC__19->SetBinError(14,0.01453899);
   VH_tagFirst_H_jetmass_noJEC__19->SetBinError(15,0.009050785);
   VH_tagFirst_H_jetmass_noJEC__19->SetBinError(16,0.01008793);
   VH_tagFirst_H_jetmass_noJEC__19->SetBinError(17,0.004871616);
   VH_tagFirst_H_jetmass_noJEC__19->SetBinError(18,0.006716771);
   VH_tagFirst_H_jetmass_noJEC__19->SetBinError(19,0.002173099);
   VH_tagFirst_H_jetmass_noJEC__19->SetBinError(21,0.006609642);
   VH_tagFirst_H_jetmass_noJEC__19->SetBinError(22,0.00228835);
   VH_tagFirst_H_jetmass_noJEC__19->SetBinError(23,0.004629121);
   VH_tagFirst_H_jetmass_noJEC__19->SetBinError(24,0.006875607);
   VH_tagFirst_H_jetmass_noJEC__19->SetBinError(25,0.003879109);
   VH_tagFirst_H_jetmass_noJEC__19->SetBinError(28,0.002349545);
   VH_tagFirst_H_jetmass_noJEC__19->SetBinError(36,0.002611954);
   VH_tagFirst_H_jetmass_noJEC__19->SetBinError(37,0.002037685);
   VH_tagFirst_H_jetmass_noJEC__19->SetBinError(39,0.003018695);
   VH_tagFirst_H_jetmass_noJEC__19->SetBinError(42,0.003209975);
   VH_tagFirst_H_jetmass_noJEC__19->SetEntries(939);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   VH_tagFirst_H_jetmass_noJEC__19->SetLineColor(ci);
   VH_tagFirst_H_jetmass_noJEC__19->GetXaxis()->SetTitle("c-jet mass [GeV]");
   VH_tagFirst_H_jetmass_noJEC__19->GetXaxis()->SetRange(1,150);
   VH_tagFirst_H_jetmass_noJEC__19->GetXaxis()->SetLabelFont(42);
   VH_tagFirst_H_jetmass_noJEC__19->GetXaxis()->SetTitleOffset(1);
   VH_tagFirst_H_jetmass_noJEC__19->GetXaxis()->SetTitleFont(42);
   VH_tagFirst_H_jetmass_noJEC__19->GetYaxis()->SetTitle("Events/2.0 GeV");
   VH_tagFirst_H_jetmass_noJEC__19->GetYaxis()->SetLabelFont(42);
   VH_tagFirst_H_jetmass_noJEC__19->GetYaxis()->SetLabelSize(0.05);
   VH_tagFirst_H_jetmass_noJEC__19->GetYaxis()->SetTitleSize(0.057);
   VH_tagFirst_H_jetmass_noJEC__19->GetYaxis()->SetTitleOffset(1.2);
   VH_tagFirst_H_jetmass_noJEC__19->GetYaxis()->SetTitleFont(42);
   VH_tagFirst_H_jetmass_noJEC__19->GetZaxis()->SetLabelFont(42);
   VH_tagFirst_H_jetmass_noJEC__19->GetZaxis()->SetTitleOffset(1);
   VH_tagFirst_H_jetmass_noJEC__19->GetZaxis()->SetTitleFont(42);
   VH_tagFirst_H_jetmass_noJEC__19->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, -- fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   H_jetmass_noJEC->Modified();
   H_jetmass_noJEC->cd();
   H_jetmass_noJEC->SetSelected(H_jetmass_noJEC);
}
