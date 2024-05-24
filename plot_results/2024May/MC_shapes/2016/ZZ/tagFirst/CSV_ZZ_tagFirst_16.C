#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CSV_ZZ_tagFirst_16()
{
//=========Macro generated from canvas: CSV_ZZ_tagFirst_16/CSV_ZZ_tagFirst_16
//=========  (Fri May 24 12:43:13 2024) by ROOT version 6.28/10
   TCanvas *CSV_ZZ_tagFirst_16 = new TCanvas("CSV_ZZ_tagFirst_16", "CSV_ZZ_tagFirst_16",0,0,600,600);
   gStyle->SetOptStat(0);
   CSV_ZZ_tagFirst_16->SetHighLightColor(2);
   CSV_ZZ_tagFirst_16->Range(-0.2,-111557.2,1.133333,1004015);
   CSV_ZZ_tagFirst_16->SetFillColor(0);
   CSV_ZZ_tagFirst_16->SetFillStyle(4000);
   CSV_ZZ_tagFirst_16->SetBorderMode(0);
   CSV_ZZ_tagFirst_16->SetBorderSize(2);
   CSV_ZZ_tagFirst_16->SetLeftMargin(0.15);
   CSV_ZZ_tagFirst_16->SetFrameFillStyle(1000);
   CSV_ZZ_tagFirst_16->SetFrameBorderMode(0);
   CSV_ZZ_tagFirst_16->SetFrameFillStyle(1000);
   CSV_ZZ_tagFirst_16->SetFrameBorderMode(0);
   
   TH1D *Jets_cut_CSV__4378 = new TH1D("Jets_cut_CSV__4378","",20,0,1);
   Jets_cut_CSV__4378->SetBinContent(1,849959.4);
   Jets_cut_CSV__4378->SetBinContent(2,78776.09);
   Jets_cut_CSV__4378->SetBinContent(3,34379.52);
   Jets_cut_CSV__4378->SetBinContent(4,20712.4);
   Jets_cut_CSV__4378->SetBinContent(5,14995.07);
   Jets_cut_CSV__4378->SetBinContent(6,11640);
   Jets_cut_CSV__4378->SetBinContent(7,9609.339);
   Jets_cut_CSV__4378->SetBinContent(8,7954.006);
   Jets_cut_CSV__4378->SetBinContent(9,7158.154);
   Jets_cut_CSV__4378->SetBinContent(10,6499.417);
   Jets_cut_CSV__4378->SetBinContent(11,6278.143);
   Jets_cut_CSV__4378->SetBinContent(12,5872.91);
   Jets_cut_CSV__4378->SetBinContent(13,5705.774);
   Jets_cut_CSV__4378->SetBinContent(14,5836.458);
   Jets_cut_CSV__4378->SetBinContent(15,5977.739);
   Jets_cut_CSV__4378->SetBinContent(16,6534.795);
   Jets_cut_CSV__4378->SetBinContent(17,7364.672);
   Jets_cut_CSV__4378->SetBinContent(18,8850.953);
   Jets_cut_CSV__4378->SetBinContent(19,13156.65);
   Jets_cut_CSV__4378->SetBinContent(20,79149.03);
   Jets_cut_CSV__4378->SetBinError(1,913.4645);
   Jets_cut_CSV__4378->SetBinError(2,280.4233);
   Jets_cut_CSV__4378->SetBinError(3,185.7345);
   Jets_cut_CSV__4378->SetBinError(4,144.4792);
   Jets_cut_CSV__4378->SetBinError(5,123.2331);
   Jets_cut_CSV__4378->SetBinError(6,108.5892);
   Jets_cut_CSV__4378->SetBinError(7,97.38085);
   Jets_cut_CSV__4378->SetBinError(8,88.2157);
   Jets_cut_CSV__4378->SetBinError(9,84.15918);
   Jets_cut_CSV__4378->SetBinError(10,80.09687);
   Jets_cut_CSV__4378->SetBinError(11,79.2045);
   Jets_cut_CSV__4378->SetBinError(12,76.53819);
   Jets_cut_CSV__4378->SetBinError(13,76.45616);
   Jets_cut_CSV__4378->SetBinError(14,77.78434);
   Jets_cut_CSV__4378->SetBinError(15,78.90163);
   Jets_cut_CSV__4378->SetBinError(16,82.28818);
   Jets_cut_CSV__4378->SetBinError(17,87.66448);
   Jets_cut_CSV__4378->SetBinError(18,96.54369);
   Jets_cut_CSV__4378->SetBinError(19,117.9103);
   Jets_cut_CSV__4378->SetBinError(20,290.2051);
   Jets_cut_CSV__4378->SetEntries(2522099);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jets_cut_CSV__4378->SetLineColor(ci);
   Jets_cut_CSV__4378->GetXaxis()->SetTitle("BvL tagging score");
   Jets_cut_CSV__4378->GetXaxis()->SetRange(1,20);
   Jets_cut_CSV__4378->GetXaxis()->SetLabelFont(42);
   Jets_cut_CSV__4378->GetXaxis()->SetTitleOffset(1);
   Jets_cut_CSV__4378->GetXaxis()->SetTitleFont(42);
   Jets_cut_CSV__4378->GetYaxis()->SetTitle("Events/0.05");
   Jets_cut_CSV__4378->GetYaxis()->SetLabelFont(42);
   Jets_cut_CSV__4378->GetYaxis()->SetLabelSize(0.05);
   Jets_cut_CSV__4378->GetYaxis()->SetTitleSize(0.057);
   Jets_cut_CSV__4378->GetYaxis()->SetTitleOffset(1.2);
   Jets_cut_CSV__4378->GetYaxis()->SetTitleFont(42);
   Jets_cut_CSV__4378->GetZaxis()->SetLabelFont(42);
   Jets_cut_CSV__4378->GetZaxis()->SetTitleOffset(1);
   Jets_cut_CSV__4378->GetZaxis()->SetTitleFont(42);
   Jets_cut_CSV__4378->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CSV_ZZ_tagFirst_16->Modified();
   CSV_ZZ_tagFirst_16->cd();
   CSV_ZZ_tagFirst_16->SetSelected(CSV_ZZ_tagFirst_16);
}
