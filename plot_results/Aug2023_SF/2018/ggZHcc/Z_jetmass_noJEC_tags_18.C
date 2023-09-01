#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_jetmass_noJEC_tags_18()
{
//=========Macro generated from canvas: Z_jetmass_noJEC_tags_18/Z_jetmass_noJEC_tags_18
//=========  (Fri Sep  1 13:34:46 2023) by ROOT version 6.28/04
   TCanvas *Z_jetmass_noJEC_tags_18 = new TCanvas("Z_jetmass_noJEC_tags_18", "Z_jetmass_noJEC_tags_18",0,0,600,600);
   gStyle->SetOptStat(0);
   Z_jetmass_noJEC_tags_18->SetHighLightColor(2);
   Z_jetmass_noJEC_tags_18->Range(-60,-0.002899241,340,0.02609317);
   Z_jetmass_noJEC_tags_18->SetFillColor(0);
   Z_jetmass_noJEC_tags_18->SetBorderMode(0);
   Z_jetmass_noJEC_tags_18->SetBorderSize(2);
   Z_jetmass_noJEC_tags_18->SetLeftMargin(0.15);
   Z_jetmass_noJEC_tags_18->SetFrameBorderMode(0);
   Z_jetmass_noJEC_tags_18->SetFrameBorderMode(0);
   
   TH1D *VbbHcc_tags_Z_jetmass_noJEC__345 = new TH1D("VbbHcc_tags_Z_jetmass_noJEC__345","",150,0,300);
   VbbHcc_tags_Z_jetmass_noJEC__345->SetBinContent(3,0.001358167);
   VbbHcc_tags_Z_jetmass_noJEC__345->SetBinContent(4,0.007105222);
   VbbHcc_tags_Z_jetmass_noJEC__345->SetBinContent(5,0.01220835);
   VbbHcc_tags_Z_jetmass_noJEC__345->SetBinContent(6,0.02208945);
   VbbHcc_tags_Z_jetmass_noJEC__345->SetBinContent(7,0.01666991);
   VbbHcc_tags_Z_jetmass_noJEC__345->SetBinContent(8,0.01018429);
   VbbHcc_tags_Z_jetmass_noJEC__345->SetBinContent(9,0.01096364);
   VbbHcc_tags_Z_jetmass_noJEC__345->SetBinContent(10,0.009898817);
   VbbHcc_tags_Z_jetmass_noJEC__345->SetBinContent(11,0.004225356);
   VbbHcc_tags_Z_jetmass_noJEC__345->SetBinContent(12,0.004153366);
   VbbHcc_tags_Z_jetmass_noJEC__345->SetBinContent(13,0.002400269);
   VbbHcc_tags_Z_jetmass_noJEC__345->SetBinContent(14,0.0006307189);
   VbbHcc_tags_Z_jetmass_noJEC__345->SetBinContent(15,0.0007122796);
   VbbHcc_tags_Z_jetmass_noJEC__345->SetBinContent(16,0.0003797826);
   VbbHcc_tags_Z_jetmass_noJEC__345->SetBinContent(18,0.0006834982);
   VbbHcc_tags_Z_jetmass_noJEC__345->SetBinContent(19,0.0006501914);
   VbbHcc_tags_Z_jetmass_noJEC__345->SetBinContent(20,0.0003697071);
   VbbHcc_tags_Z_jetmass_noJEC__345->SetBinContent(22,0.0004807702);
   VbbHcc_tags_Z_jetmass_noJEC__345->SetBinContent(24,0.0002940393);
   VbbHcc_tags_Z_jetmass_noJEC__345->SetBinContent(29,0.0007343541);
   VbbHcc_tags_Z_jetmass_noJEC__345->SetBinContent(32,0.000484904);
   VbbHcc_tags_Z_jetmass_noJEC__345->SetBinContent(41,0.0001450742);
   VbbHcc_tags_Z_jetmass_noJEC__345->SetBinError(3,0.0009630683);
   VbbHcc_tags_Z_jetmass_noJEC__345->SetBinError(4,0.001736836);
   VbbHcc_tags_Z_jetmass_noJEC__345->SetBinError(5,0.002124059);
   VbbHcc_tags_Z_jetmass_noJEC__345->SetBinError(6,0.003454757);
   VbbHcc_tags_Z_jetmass_noJEC__345->SetBinError(7,0.002548341);
   VbbHcc_tags_Z_jetmass_noJEC__345->SetBinError(8,0.001861061);
   VbbHcc_tags_Z_jetmass_noJEC__345->SetBinError(9,0.001999225);
   VbbHcc_tags_Z_jetmass_noJEC__345->SetBinError(10,0.001899631);
   VbbHcc_tags_Z_jetmass_noJEC__345->SetBinError(11,0.001359728);
   VbbHcc_tags_Z_jetmass_noJEC__345->SetBinError(12,0.001383972);
   VbbHcc_tags_Z_jetmass_noJEC__345->SetBinError(13,0.001389526);
   VbbHcc_tags_Z_jetmass_noJEC__345->SetBinError(14,0.0004471061);
   VbbHcc_tags_Z_jetmass_noJEC__345->SetBinError(15,0.0005115765);
   VbbHcc_tags_Z_jetmass_noJEC__345->SetBinError(16,0.0003797826);
   VbbHcc_tags_Z_jetmass_noJEC__345->SetBinError(18,0.0004959717);
   VbbHcc_tags_Z_jetmass_noJEC__345->SetBinError(19,0.0004697569);
   VbbHcc_tags_Z_jetmass_noJEC__345->SetBinError(20,0.0003697071);
   VbbHcc_tags_Z_jetmass_noJEC__345->SetBinError(22,0.0003400802);
   VbbHcc_tags_Z_jetmass_noJEC__345->SetBinError(24,0.0002940393);
   VbbHcc_tags_Z_jetmass_noJEC__345->SetBinError(29,0.0007343541);
   VbbHcc_tags_Z_jetmass_noJEC__345->SetBinError(32,0.000484904);
   VbbHcc_tags_Z_jetmass_noJEC__345->SetBinError(41,0.0001450742);
   VbbHcc_tags_Z_jetmass_noJEC__345->SetEntries(298);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_Z_jetmass_noJEC__345->SetFillColor(ci);
   VbbHcc_tags_Z_jetmass_noJEC__345->GetXaxis()->SetTitle("b-jet mass [GeV]");
   VbbHcc_tags_Z_jetmass_noJEC__345->GetXaxis()->SetRange(1,150);
   VbbHcc_tags_Z_jetmass_noJEC__345->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_jetmass_noJEC__345->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_jetmass_noJEC__345->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_jetmass_noJEC__345->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_jetmass_noJEC__345->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_jetmass_noJEC__345->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_jetmass_noJEC__345->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_jetmass_noJEC__345->GetZaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_jetmass_noJEC__345->Draw("HIST");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Z_jetmass_noJEC_tags_18->Modified();
   Z_jetmass_noJEC_tags_18->cd();
   Z_jetmass_noJEC_tags_18->SetSelected(Z_jetmass_noJEC_tags_18);
}
