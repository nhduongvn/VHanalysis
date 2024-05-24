#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CSV_TT_tagOnly_2b1c_16()
{
//=========Macro generated from canvas: CSV_TT_tagOnly_2b1c_16/CSV_TT_tagOnly_2b1c_16
//=========  (Fri May 24 12:44:17 2024) by ROOT version 6.28/10
   TCanvas *CSV_TT_tagOnly_2b1c_16 = new TCanvas("CSV_TT_tagOnly_2b1c_16", "CSV_TT_tagOnly_2b1c_16",0,0,600,600);
   gStyle->SetOptStat(0);
   CSV_TT_tagOnly_2b1c_16->SetHighLightColor(2);
   CSV_TT_tagOnly_2b1c_16->Range(-0.2,-4921856,1.133333,4.42967e+07);
   CSV_TT_tagOnly_2b1c_16->SetFillColor(0);
   CSV_TT_tagOnly_2b1c_16->SetFillStyle(4000);
   CSV_TT_tagOnly_2b1c_16->SetBorderMode(0);
   CSV_TT_tagOnly_2b1c_16->SetBorderSize(2);
   CSV_TT_tagOnly_2b1c_16->SetLeftMargin(0.15);
   CSV_TT_tagOnly_2b1c_16->SetFrameFillStyle(1000);
   CSV_TT_tagOnly_2b1c_16->SetFrameBorderMode(0);
   CSV_TT_tagOnly_2b1c_16->SetFrameFillStyle(1000);
   CSV_TT_tagOnly_2b1c_16->SetFrameBorderMode(0);
   
   TH1D *Jets_cut_CSV__7486 = new TH1D("Jets_cut_CSV__7486","",20,0,1);
   Jets_cut_CSV__7486->SetBinContent(1,3.749986e+07);
   Jets_cut_CSV__7486->SetBinContent(2,4521524);
   Jets_cut_CSV__7486->SetBinContent(3,2205957);
   Jets_cut_CSV__7486->SetBinContent(4,1488760);
   Jets_cut_CSV__7486->SetBinContent(5,1163968);
   Jets_cut_CSV__7486->SetBinContent(6,984172.7);
   Jets_cut_CSV__7486->SetBinContent(7,828441.5);
   Jets_cut_CSV__7486->SetBinContent(8,744473.2);
   Jets_cut_CSV__7486->SetBinContent(9,686857.4);
   Jets_cut_CSV__7486->SetBinContent(10,666609.7);
   Jets_cut_CSV__7486->SetBinContent(11,669610.5);
   Jets_cut_CSV__7486->SetBinContent(12,671077);
   Jets_cut_CSV__7486->SetBinContent(13,676245.5);
   Jets_cut_CSV__7486->SetBinContent(14,716000);
   Jets_cut_CSV__7486->SetBinContent(15,769654.5);
   Jets_cut_CSV__7486->SetBinContent(16,884187.1);
   Jets_cut_CSV__7486->SetBinContent(17,996734.6);
   Jets_cut_CSV__7486->SetBinContent(18,1232608);
   Jets_cut_CSV__7486->SetBinContent(19,1925470);
   Jets_cut_CSV__7486->SetBinContent(20,1.206416e+07);
   Jets_cut_CSV__7486->SetBinError(1,1605.465);
   Jets_cut_CSV__7486->SetBinError(2,573.2061);
   Jets_cut_CSV__7486->SetBinError(3,404.3048);
   Jets_cut_CSV__7486->SetBinError(4,334.2387);
   Jets_cut_CSV__7486->SetBinError(5,296.8899);
   Jets_cut_CSV__7486->SetBinError(6,274.4795);
   Jets_cut_CSV__7486->SetBinError(7,245.736);
   Jets_cut_CSV__7486->SetBinError(8,231.7362);
   Jets_cut_CSV__7486->SetBinError(9,223.0643);
   Jets_cut_CSV__7486->SetBinError(10,220.3043);
   Jets_cut_CSV__7486->SetBinError(11,221.3489);
   Jets_cut_CSV__7486->SetBinError(12,222.4656);
   Jets_cut_CSV__7486->SetBinError(13,224.9858);
   Jets_cut_CSV__7486->SetBinError(14,233.4139);
   Jets_cut_CSV__7486->SetBinError(15,242.2297);
   Jets_cut_CSV__7486->SetBinError(16,259.775);
   Jets_cut_CSV__7486->SetBinError(17,275.8169);
   Jets_cut_CSV__7486->SetBinError(18,306.6987);
   Jets_cut_CSV__7486->SetBinError(19,382.7323);
   Jets_cut_CSV__7486->SetBinError(20,948.4263);
   Jets_cut_CSV__7486->SetEntries(1.413682e+09);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jets_cut_CSV__7486->SetLineColor(ci);
   Jets_cut_CSV__7486->GetXaxis()->SetTitle("BvL tagging score");
   Jets_cut_CSV__7486->GetXaxis()->SetRange(1,20);
   Jets_cut_CSV__7486->GetXaxis()->SetLabelFont(42);
   Jets_cut_CSV__7486->GetXaxis()->SetTitleOffset(1);
   Jets_cut_CSV__7486->GetXaxis()->SetTitleFont(42);
   Jets_cut_CSV__7486->GetYaxis()->SetTitle("Events/0.05");
   Jets_cut_CSV__7486->GetYaxis()->SetLabelFont(42);
   Jets_cut_CSV__7486->GetYaxis()->SetLabelSize(0.05);
   Jets_cut_CSV__7486->GetYaxis()->SetTitleSize(0.057);
   Jets_cut_CSV__7486->GetYaxis()->SetTitleOffset(1.2);
   Jets_cut_CSV__7486->GetYaxis()->SetTitleFont(42);
   Jets_cut_CSV__7486->GetZaxis()->SetLabelFont(42);
   Jets_cut_CSV__7486->GetZaxis()->SetTitleOffset(1);
   Jets_cut_CSV__7486->GetZaxis()->SetTitleFont(42);
   Jets_cut_CSV__7486->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CSV_TT_tagOnly_2b1c_16->Modified();
   CSV_TT_tagOnly_2b1c_16->cd();
   CSV_TT_tagOnly_2b1c_16->SetSelected(CSV_TT_tagOnly_2b1c_16);
}
