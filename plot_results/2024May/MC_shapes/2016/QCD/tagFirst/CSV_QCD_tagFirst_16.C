#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CSV_QCD_tagFirst_16()
{
//=========Macro generated from canvas: CSV_QCD_tagFirst_16/CSV_QCD_tagFirst_16
//=========  (Fri May 24 12:43:13 2024) by ROOT version 6.28/10
   TCanvas *CSV_QCD_tagFirst_16 = new TCanvas("CSV_QCD_tagFirst_16", "CSV_QCD_tagFirst_16",0,0,600,600);
   gStyle->SetOptStat(0);
   CSV_QCD_tagFirst_16->SetHighLightColor(2);
   CSV_QCD_tagFirst_16->Range(-0.2,-2.856899e+11,1.133333,2.571209e+12);
   CSV_QCD_tagFirst_16->SetFillColor(0);
   CSV_QCD_tagFirst_16->SetFillStyle(4000);
   CSV_QCD_tagFirst_16->SetBorderMode(0);
   CSV_QCD_tagFirst_16->SetBorderSize(2);
   CSV_QCD_tagFirst_16->SetLeftMargin(0.15);
   CSV_QCD_tagFirst_16->SetFrameFillStyle(1000);
   CSV_QCD_tagFirst_16->SetFrameBorderMode(0);
   CSV_QCD_tagFirst_16->SetFrameFillStyle(1000);
   CSV_QCD_tagFirst_16->SetFrameBorderMode(0);
   
   TH1D *Jets_cut_CSV__4357 = new TH1D("Jets_cut_CSV__4357","",20,0,1);
   Jets_cut_CSV__4357->SetBinContent(1,2.176685e+12);
   Jets_cut_CSV__4357->SetBinContent(2,1.342808e+11);
   Jets_cut_CSV__4357->SetBinContent(3,4.814605e+10);
   Jets_cut_CSV__4357->SetBinContent(4,2.542382e+10);
   Jets_cut_CSV__4357->SetBinContent(5,1.617225e+10);
   Jets_cut_CSV__4357->SetBinContent(6,1.145071e+10);
   Jets_cut_CSV__4357->SetBinContent(7,8.599217e+09);
   Jets_cut_CSV__4357->SetBinContent(8,6.819043e+09);
   Jets_cut_CSV__4357->SetBinContent(9,5.472339e+09);
   Jets_cut_CSV__4357->SetBinContent(10,4.622693e+09);
   Jets_cut_CSV__4357->SetBinContent(11,4.098965e+09);
   Jets_cut_CSV__4357->SetBinContent(12,3.630312e+09);
   Jets_cut_CSV__4357->SetBinContent(13,3.260055e+09);
   Jets_cut_CSV__4357->SetBinContent(14,3.128787e+09);
   Jets_cut_CSV__4357->SetBinContent(15,3.019477e+09);
   Jets_cut_CSV__4357->SetBinContent(16,3.17672e+09);
   Jets_cut_CSV__4357->SetBinContent(17,3.249181e+09);
   Jets_cut_CSV__4357->SetBinContent(18,3.677584e+09);
   Jets_cut_CSV__4357->SetBinContent(19,5.269741e+09);
   Jets_cut_CSV__4357->SetBinContent(20,3.001727e+10);
   Jets_cut_CSV__4357->SetBinError(1,4.804411e+08);
   Jets_cut_CSV__4357->SetBinError(2,1.203804e+08);
   Jets_cut_CSV__4357->SetBinError(3,7.204708e+07);
   Jets_cut_CSV__4357->SetBinError(4,5.225131e+07);
   Jets_cut_CSV__4357->SetBinError(5,4.159543e+07);
   Jets_cut_CSV__4357->SetBinError(6,3.496956e+07);
   Jets_cut_CSV__4357->SetBinError(7,3.028813e+07);
   Jets_cut_CSV__4357->SetBinError(8,2.687067e+07);
   Jets_cut_CSV__4357->SetBinError(9,2.396991e+07);
   Jets_cut_CSV__4357->SetBinError(10,2.193009e+07);
   Jets_cut_CSV__4357->SetBinError(11,2.059666e+07);
   Jets_cut_CSV__4357->SetBinError(12,1.939515e+07);
   Jets_cut_CSV__4357->SetBinError(13,1.844244e+07);
   Jets_cut_CSV__4357->SetBinError(14,1.817033e+07);
   Jets_cut_CSV__4357->SetBinError(15,1.784766e+07);
   Jets_cut_CSV__4357->SetBinError(16,1.833757e+07);
   Jets_cut_CSV__4357->SetBinError(17,1.857864e+07);
   Jets_cut_CSV__4357->SetBinError(18,1.978785e+07);
   Jets_cut_CSV__4357->SetBinError(19,2.372783e+07);
   Jets_cut_CSV__4357->SetBinError(20,5.710429e+07);
   Jets_cut_CSV__4357->SetEntries(5.72936e+08);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jets_cut_CSV__4357->SetLineColor(ci);
   Jets_cut_CSV__4357->GetXaxis()->SetTitle("BvL tagging score");
   Jets_cut_CSV__4357->GetXaxis()->SetRange(1,20);
   Jets_cut_CSV__4357->GetXaxis()->SetLabelFont(42);
   Jets_cut_CSV__4357->GetXaxis()->SetTitleOffset(1);
   Jets_cut_CSV__4357->GetXaxis()->SetTitleFont(42);
   Jets_cut_CSV__4357->GetYaxis()->SetTitle("Events/0.05");
   Jets_cut_CSV__4357->GetYaxis()->SetLabelFont(42);
   Jets_cut_CSV__4357->GetYaxis()->SetLabelSize(0.05);
   Jets_cut_CSV__4357->GetYaxis()->SetTitleSize(0.057);
   Jets_cut_CSV__4357->GetYaxis()->SetTitleOffset(1.2);
   Jets_cut_CSV__4357->GetYaxis()->SetTitleFont(42);
   Jets_cut_CSV__4357->GetZaxis()->SetLabelFont(42);
   Jets_cut_CSV__4357->GetZaxis()->SetTitleOffset(1);
   Jets_cut_CSV__4357->GetZaxis()->SetTitleFont(42);
   Jets_cut_CSV__4357->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CSV_QCD_tagFirst_16->Modified();
   CSV_QCD_tagFirst_16->cd();
   CSV_QCD_tagFirst_16->SetSelected(CSV_QCD_tagFirst_16);
}
