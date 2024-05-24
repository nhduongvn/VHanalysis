#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CSV_ZHbb_tagFirst_18()
{
//=========Macro generated from canvas: CSV_ZHbb_tagFirst_18/CSV_ZHbb_tagFirst_18
//=========  (Fri May 24 12:43:13 2024) by ROOT version 6.28/10
   TCanvas *CSV_ZHbb_tagFirst_18 = new TCanvas("CSV_ZHbb_tagFirst_18", "CSV_ZHbb_tagFirst_18",0,0,600,600);
   gStyle->SetOptStat(0);
   CSV_ZHbb_tagFirst_18->SetHighLightColor(2);
   CSV_ZHbb_tagFirst_18->Range(-0.2,-3150.724,1.133333,28356.52);
   CSV_ZHbb_tagFirst_18->SetFillColor(0);
   CSV_ZHbb_tagFirst_18->SetFillStyle(4000);
   CSV_ZHbb_tagFirst_18->SetBorderMode(0);
   CSV_ZHbb_tagFirst_18->SetBorderSize(2);
   CSV_ZHbb_tagFirst_18->SetLeftMargin(0.15);
   CSV_ZHbb_tagFirst_18->SetFrameFillStyle(1000);
   CSV_ZHbb_tagFirst_18->SetFrameBorderMode(0);
   CSV_ZHbb_tagFirst_18->SetFrameFillStyle(1000);
   CSV_ZHbb_tagFirst_18->SetFrameBorderMode(0);
   
   TH1D *Jets_cut_CSV__4356 = new TH1D("Jets_cut_CSV__4356","",20,0,1);
   Jets_cut_CSV__4356->SetBinContent(1,24005.52);
   Jets_cut_CSV__4356->SetBinContent(2,2757.003);
   Jets_cut_CSV__4356->SetBinContent(3,1408.639);
   Jets_cut_CSV__4356->SetBinContent(4,994.8933);
   Jets_cut_CSV__4356->SetBinContent(5,811.3515);
   Jets_cut_CSV__4356->SetBinContent(6,702.3701);
   Jets_cut_CSV__4356->SetBinContent(7,621.6055);
   Jets_cut_CSV__4356->SetBinContent(8,582.2988);
   Jets_cut_CSV__4356->SetBinContent(9,543.5019);
   Jets_cut_CSV__4356->SetBinContent(10,539.9409);
   Jets_cut_CSV__4356->SetBinContent(11,553.8958);
   Jets_cut_CSV__4356->SetBinContent(12,568.0041);
   Jets_cut_CSV__4356->SetBinContent(13,575.4018);
   Jets_cut_CSV__4356->SetBinContent(14,626.8771);
   Jets_cut_CSV__4356->SetBinContent(15,693.5233);
   Jets_cut_CSV__4356->SetBinContent(16,810.2368);
   Jets_cut_CSV__4356->SetBinContent(17,935.0289);
   Jets_cut_CSV__4356->SetBinContent(18,1144.494);
   Jets_cut_CSV__4356->SetBinContent(19,1813.476);
   Jets_cut_CSV__4356->SetBinContent(20,12811.04);
   Jets_cut_CSV__4356->SetBinError(1,8.620598);
   Jets_cut_CSV__4356->SetBinError(2,2.997346);
   Jets_cut_CSV__4356->SetBinError(3,2.113638);
   Jets_cut_CSV__4356->SetBinError(4,1.740274);
   Jets_cut_CSV__4356->SetBinError(5,1.572135);
   Jets_cut_CSV__4356->SetBinError(6,1.477174);
   Jets_cut_CSV__4356->SetBinError(7,1.349985);
   Jets_cut_CSV__4356->SetBinError(8,1.321106);
   Jets_cut_CSV__4356->SetBinError(9,1.237804);
   Jets_cut_CSV__4356->SetBinError(10,1.282966);
   Jets_cut_CSV__4356->SetBinError(11,1.234575);
   Jets_cut_CSV__4356->SetBinError(12,1.246205);
   Jets_cut_CSV__4356->SetBinError(13,1.26287);
   Jets_cut_CSV__4356->SetBinError(14,1.341402);
   Jets_cut_CSV__4356->SetBinError(15,1.444477);
   Jets_cut_CSV__4356->SetBinError(16,1.593923);
   Jets_cut_CSV__4356->SetBinError(17,1.719446);
   Jets_cut_CSV__4356->SetBinError(18,1.852055);
   Jets_cut_CSV__4356->SetBinError(19,2.31027);
   Jets_cut_CSV__4356->SetBinError(20,6.236736);
   Jets_cut_CSV__4356->SetEntries(3.494331e+07);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jets_cut_CSV__4356->SetLineColor(ci);
   Jets_cut_CSV__4356->GetXaxis()->SetTitle("BvL tagging score");
   Jets_cut_CSV__4356->GetXaxis()->SetRange(1,20);
   Jets_cut_CSV__4356->GetXaxis()->SetLabelFont(42);
   Jets_cut_CSV__4356->GetXaxis()->SetTitleOffset(1);
   Jets_cut_CSV__4356->GetXaxis()->SetTitleFont(42);
   Jets_cut_CSV__4356->GetYaxis()->SetTitle("Events/0.05");
   Jets_cut_CSV__4356->GetYaxis()->SetLabelFont(42);
   Jets_cut_CSV__4356->GetYaxis()->SetLabelSize(0.05);
   Jets_cut_CSV__4356->GetYaxis()->SetTitleSize(0.057);
   Jets_cut_CSV__4356->GetYaxis()->SetTitleOffset(1.2);
   Jets_cut_CSV__4356->GetYaxis()->SetTitleFont(42);
   Jets_cut_CSV__4356->GetZaxis()->SetLabelFont(42);
   Jets_cut_CSV__4356->GetZaxis()->SetTitleOffset(1);
   Jets_cut_CSV__4356->GetZaxis()->SetTitleFont(42);
   Jets_cut_CSV__4356->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CSV_ZHbb_tagFirst_18->Modified();
   CSV_ZHbb_tagFirst_18->cd();
   CSV_ZHbb_tagFirst_18->SetSelected(CSV_ZHbb_tagFirst_18);
}
