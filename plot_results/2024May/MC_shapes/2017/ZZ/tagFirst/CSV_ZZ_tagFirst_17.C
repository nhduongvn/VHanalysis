#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CSV_ZZ_tagFirst_17()
{
//=========Macro generated from canvas: CSV_ZZ_tagFirst_17/CSV_ZZ_tagFirst_17
//=========  (Fri May 24 12:43:13 2024) by ROOT version 6.28/10
   TCanvas *CSV_ZZ_tagFirst_17 = new TCanvas("CSV_ZZ_tagFirst_17", "CSV_ZZ_tagFirst_17",0,0,600,600);
   gStyle->SetOptStat(0);
   CSV_ZZ_tagFirst_17->SetHighLightColor(2);
   CSV_ZZ_tagFirst_17->Range(-0.2,-55513.23,1.133333,499619.1);
   CSV_ZZ_tagFirst_17->SetFillColor(0);
   CSV_ZZ_tagFirst_17->SetFillStyle(4000);
   CSV_ZZ_tagFirst_17->SetBorderMode(0);
   CSV_ZZ_tagFirst_17->SetBorderSize(2);
   CSV_ZZ_tagFirst_17->SetLeftMargin(0.15);
   CSV_ZZ_tagFirst_17->SetFrameFillStyle(1000);
   CSV_ZZ_tagFirst_17->SetFrameBorderMode(0);
   CSV_ZZ_tagFirst_17->SetFrameFillStyle(1000);
   CSV_ZZ_tagFirst_17->SetFrameBorderMode(0);
   
   TH1D *Jets_cut_CSV__4379 = new TH1D("Jets_cut_CSV__4379","",20,0,1);
   Jets_cut_CSV__4379->SetBinContent(1,422957.9);
   Jets_cut_CSV__4379->SetBinContent(2,38481.37);
   Jets_cut_CSV__4379->SetBinContent(3,17325.07);
   Jets_cut_CSV__4379->SetBinContent(4,10948.61);
   Jets_cut_CSV__4379->SetBinContent(5,8131.354);
   Jets_cut_CSV__4379->SetBinContent(6,6436.223);
   Jets_cut_CSV__4379->SetBinContent(7,4959.449);
   Jets_cut_CSV__4379->SetBinContent(8,4200.172);
   Jets_cut_CSV__4379->SetBinContent(9,3628.674);
   Jets_cut_CSV__4379->SetBinContent(10,3295.459);
   Jets_cut_CSV__4379->SetBinContent(11,3169.106);
   Jets_cut_CSV__4379->SetBinContent(12,2995.447);
   Jets_cut_CSV__4379->SetBinContent(13,2838.149);
   Jets_cut_CSV__4379->SetBinContent(14,2948.644);
   Jets_cut_CSV__4379->SetBinContent(15,3030.278);
   Jets_cut_CSV__4379->SetBinContent(16,3526.437);
   Jets_cut_CSV__4379->SetBinContent(17,3823.687);
   Jets_cut_CSV__4379->SetBinContent(18,4517.356);
   Jets_cut_CSV__4379->SetBinContent(19,6766.181);
   Jets_cut_CSV__4379->SetBinContent(20,46674.92);
   Jets_cut_CSV__4379->SetBinError(1,322.0653);
   Jets_cut_CSV__4379->SetBinError(2,99.43305);
   Jets_cut_CSV__4379->SetBinError(3,66.85301);
   Jets_cut_CSV__4379->SetBinError(4,53.46616);
   Jets_cut_CSV__4379->SetBinError(5,46.35627);
   Jets_cut_CSV__4379->SetBinError(6,41.5052);
   Jets_cut_CSV__4379->SetBinError(7,35.30276);
   Jets_cut_CSV__4379->SetBinError(8,32.1569);
   Jets_cut_CSV__4379->SetBinError(9,29.74158);
   Jets_cut_CSV__4379->SetBinError(10,28.26071);
   Jets_cut_CSV__4379->SetBinError(11,27.66985);
   Jets_cut_CSV__4379->SetBinError(12,26.98677);
   Jets_cut_CSV__4379->SetBinError(13,26.62192);
   Jets_cut_CSV__4379->SetBinError(14,28.01933);
   Jets_cut_CSV__4379->SetBinError(15,28.32061);
   Jets_cut_CSV__4379->SetBinError(16,30.75128);
   Jets_cut_CSV__4379->SetBinError(17,32.06965);
   Jets_cut_CSV__4379->SetBinError(18,35.10448);
   Jets_cut_CSV__4379->SetBinError(19,42.96233);
   Jets_cut_CSV__4379->SetBinError(20,114.022);
   Jets_cut_CSV__4379->SetEntries(2818734);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jets_cut_CSV__4379->SetLineColor(ci);
   Jets_cut_CSV__4379->GetXaxis()->SetTitle("BvL tagging score");
   Jets_cut_CSV__4379->GetXaxis()->SetRange(1,20);
   Jets_cut_CSV__4379->GetXaxis()->SetLabelFont(42);
   Jets_cut_CSV__4379->GetXaxis()->SetTitleOffset(1);
   Jets_cut_CSV__4379->GetXaxis()->SetTitleFont(42);
   Jets_cut_CSV__4379->GetYaxis()->SetTitle("Events/0.05");
   Jets_cut_CSV__4379->GetYaxis()->SetLabelFont(42);
   Jets_cut_CSV__4379->GetYaxis()->SetLabelSize(0.05);
   Jets_cut_CSV__4379->GetYaxis()->SetTitleSize(0.057);
   Jets_cut_CSV__4379->GetYaxis()->SetTitleOffset(1.2);
   Jets_cut_CSV__4379->GetYaxis()->SetTitleFont(42);
   Jets_cut_CSV__4379->GetZaxis()->SetLabelFont(42);
   Jets_cut_CSV__4379->GetZaxis()->SetTitleOffset(1);
   Jets_cut_CSV__4379->GetZaxis()->SetTitleFont(42);
   Jets_cut_CSV__4379->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CSV_ZZ_tagFirst_17->Modified();
   CSV_ZZ_tagFirst_17->cd();
   CSV_ZZ_tagFirst_17->SetSelected(CSV_ZZ_tagFirst_17);
}
