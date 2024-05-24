#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CSV_ZZ_tagFirst_2b1c_17()
{
//=========Macro generated from canvas: CSV_ZZ_tagFirst_2b1c_17/CSV_ZZ_tagFirst_2b1c_17
//=========  (Fri May 24 12:44:01 2024) by ROOT version 6.28/10
   TCanvas *CSV_ZZ_tagFirst_2b1c_17 = new TCanvas("CSV_ZZ_tagFirst_2b1c_17", "CSV_ZZ_tagFirst_2b1c_17",0,0,600,600);
   gStyle->SetOptStat(0);
   CSV_ZZ_tagFirst_2b1c_17->SetHighLightColor(2);
   CSV_ZZ_tagFirst_2b1c_17->Range(-0.2,-55513.23,1.133333,499619.1);
   CSV_ZZ_tagFirst_2b1c_17->SetFillColor(0);
   CSV_ZZ_tagFirst_2b1c_17->SetFillStyle(4000);
   CSV_ZZ_tagFirst_2b1c_17->SetBorderMode(0);
   CSV_ZZ_tagFirst_2b1c_17->SetBorderSize(2);
   CSV_ZZ_tagFirst_2b1c_17->SetLeftMargin(0.15);
   CSV_ZZ_tagFirst_2b1c_17->SetFrameFillStyle(1000);
   CSV_ZZ_tagFirst_2b1c_17->SetFrameBorderMode(0);
   CSV_ZZ_tagFirst_2b1c_17->SetFrameFillStyle(1000);
   CSV_ZZ_tagFirst_2b1c_17->SetFrameBorderMode(0);
   
   TH1D *Jets_cut_CSV__6719 = new TH1D("Jets_cut_CSV__6719","",20,0,1);
   Jets_cut_CSV__6719->SetBinContent(1,422957.9);
   Jets_cut_CSV__6719->SetBinContent(2,38481.37);
   Jets_cut_CSV__6719->SetBinContent(3,17325.07);
   Jets_cut_CSV__6719->SetBinContent(4,10948.61);
   Jets_cut_CSV__6719->SetBinContent(5,8131.354);
   Jets_cut_CSV__6719->SetBinContent(6,6436.223);
   Jets_cut_CSV__6719->SetBinContent(7,4959.449);
   Jets_cut_CSV__6719->SetBinContent(8,4200.172);
   Jets_cut_CSV__6719->SetBinContent(9,3628.674);
   Jets_cut_CSV__6719->SetBinContent(10,3295.459);
   Jets_cut_CSV__6719->SetBinContent(11,3169.106);
   Jets_cut_CSV__6719->SetBinContent(12,2995.447);
   Jets_cut_CSV__6719->SetBinContent(13,2838.149);
   Jets_cut_CSV__6719->SetBinContent(14,2948.644);
   Jets_cut_CSV__6719->SetBinContent(15,3030.278);
   Jets_cut_CSV__6719->SetBinContent(16,3526.437);
   Jets_cut_CSV__6719->SetBinContent(17,3823.687);
   Jets_cut_CSV__6719->SetBinContent(18,4517.356);
   Jets_cut_CSV__6719->SetBinContent(19,6766.181);
   Jets_cut_CSV__6719->SetBinContent(20,46674.92);
   Jets_cut_CSV__6719->SetBinError(1,322.0653);
   Jets_cut_CSV__6719->SetBinError(2,99.43305);
   Jets_cut_CSV__6719->SetBinError(3,66.85301);
   Jets_cut_CSV__6719->SetBinError(4,53.46616);
   Jets_cut_CSV__6719->SetBinError(5,46.35627);
   Jets_cut_CSV__6719->SetBinError(6,41.5052);
   Jets_cut_CSV__6719->SetBinError(7,35.30276);
   Jets_cut_CSV__6719->SetBinError(8,32.1569);
   Jets_cut_CSV__6719->SetBinError(9,29.74158);
   Jets_cut_CSV__6719->SetBinError(10,28.26071);
   Jets_cut_CSV__6719->SetBinError(11,27.66985);
   Jets_cut_CSV__6719->SetBinError(12,26.98677);
   Jets_cut_CSV__6719->SetBinError(13,26.62192);
   Jets_cut_CSV__6719->SetBinError(14,28.01933);
   Jets_cut_CSV__6719->SetBinError(15,28.32061);
   Jets_cut_CSV__6719->SetBinError(16,30.75128);
   Jets_cut_CSV__6719->SetBinError(17,32.06965);
   Jets_cut_CSV__6719->SetBinError(18,35.10448);
   Jets_cut_CSV__6719->SetBinError(19,42.96233);
   Jets_cut_CSV__6719->SetBinError(20,114.022);
   Jets_cut_CSV__6719->SetEntries(2818734);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jets_cut_CSV__6719->SetLineColor(ci);
   Jets_cut_CSV__6719->GetXaxis()->SetTitle("BvL tagging score");
   Jets_cut_CSV__6719->GetXaxis()->SetRange(1,20);
   Jets_cut_CSV__6719->GetXaxis()->SetLabelFont(42);
   Jets_cut_CSV__6719->GetXaxis()->SetTitleOffset(1);
   Jets_cut_CSV__6719->GetXaxis()->SetTitleFont(42);
   Jets_cut_CSV__6719->GetYaxis()->SetTitle("Events/0.05");
   Jets_cut_CSV__6719->GetYaxis()->SetLabelFont(42);
   Jets_cut_CSV__6719->GetYaxis()->SetLabelSize(0.05);
   Jets_cut_CSV__6719->GetYaxis()->SetTitleSize(0.057);
   Jets_cut_CSV__6719->GetYaxis()->SetTitleOffset(1.2);
   Jets_cut_CSV__6719->GetYaxis()->SetTitleFont(42);
   Jets_cut_CSV__6719->GetZaxis()->SetLabelFont(42);
   Jets_cut_CSV__6719->GetZaxis()->SetTitleOffset(1);
   Jets_cut_CSV__6719->GetZaxis()->SetTitleFont(42);
   Jets_cut_CSV__6719->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CSV_ZZ_tagFirst_2b1c_17->Modified();
   CSV_ZZ_tagFirst_2b1c_17->cd();
   CSV_ZZ_tagFirst_2b1c_17->SetSelected(CSV_ZZ_tagFirst_2b1c_17);
}
