#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CSV_WW_tagFirst_2b1c_16()
{
//=========Macro generated from canvas: CSV_WW_tagFirst_2b1c_16/CSV_WW_tagFirst_2b1c_16
//=========  (Fri May 24 12:44:01 2024) by ROOT version 6.28/10
   TCanvas *CSV_WW_tagFirst_2b1c_16 = new TCanvas("CSV_WW_tagFirst_2b1c_16", "CSV_WW_tagFirst_2b1c_16",0,0,600,600);
   gStyle->SetOptStat(0);
   CSV_WW_tagFirst_2b1c_16->SetHighLightColor(2);
   CSV_WW_tagFirst_2b1c_16->Range(-0.2,-842221.9,1.133333,7579996);
   CSV_WW_tagFirst_2b1c_16->SetFillColor(0);
   CSV_WW_tagFirst_2b1c_16->SetFillStyle(4000);
   CSV_WW_tagFirst_2b1c_16->SetBorderMode(0);
   CSV_WW_tagFirst_2b1c_16->SetBorderSize(2);
   CSV_WW_tagFirst_2b1c_16->SetLeftMargin(0.15);
   CSV_WW_tagFirst_2b1c_16->SetFrameFillStyle(1000);
   CSV_WW_tagFirst_2b1c_16->SetFrameBorderMode(0);
   CSV_WW_tagFirst_2b1c_16->SetFrameFillStyle(1000);
   CSV_WW_tagFirst_2b1c_16->SetFrameBorderMode(0);
   
   TH1D *Jets_cut_CSV__6712 = new TH1D("Jets_cut_CSV__6712","",20,0,1);
   Jets_cut_CSV__6712->SetBinContent(1,6416928);
   Jets_cut_CSV__6712->SetBinContent(2,573033.5);
   Jets_cut_CSV__6712->SetBinContent(3,233958);
   Jets_cut_CSV__6712->SetBinContent(4,132746.6);
   Jets_cut_CSV__6712->SetBinContent(5,89545.92);
   Jets_cut_CSV__6712->SetBinContent(6,65728.16);
   Jets_cut_CSV__6712->SetBinContent(7,49471.68);
   Jets_cut_CSV__6712->SetBinContent(8,38397.46);
   Jets_cut_CSV__6712->SetBinContent(9,30321.66);
   Jets_cut_CSV__6712->SetBinContent(10,24944.93);
   Jets_cut_CSV__6712->SetBinContent(11,21318.19);
   Jets_cut_CSV__6712->SetBinContent(12,17861.18);
   Jets_cut_CSV__6712->SetBinContent(13,14512.18);
   Jets_cut_CSV__6712->SetBinContent(14,12584.71);
   Jets_cut_CSV__6712->SetBinContent(15,10794.2);
   Jets_cut_CSV__6712->SetBinContent(16,9731.876);
   Jets_cut_CSV__6712->SetBinContent(17,8058.728);
   Jets_cut_CSV__6712->SetBinContent(18,6964.442);
   Jets_cut_CSV__6712->SetBinContent(19,6777.205);
   Jets_cut_CSV__6712->SetBinContent(20,14253.4);
   Jets_cut_CSV__6712->SetBinError(1,1885.221);
   Jets_cut_CSV__6712->SetBinError(2,567.1358);
   Jets_cut_CSV__6712->SetBinError(3,362.6422);
   Jets_cut_CSV__6712->SetBinError(4,272.5834);
   Jets_cut_CSV__6712->SetBinError(5,223.3846);
   Jets_cut_CSV__6712->SetBinError(6,191.1105);
   Jets_cut_CSV__6712->SetBinError(7,165.2447);
   Jets_cut_CSV__6712->SetBinError(8,145.1006);
   Jets_cut_CSV__6712->SetBinError(9,128.6264);
   Jets_cut_CSV__6712->SetBinError(10,116.1412);
   Jets_cut_CSV__6712->SetBinError(11,107.2316);
   Jets_cut_CSV__6712->SetBinError(12,97.81529);
   Jets_cut_CSV__6712->SetBinError(13,88.09936);
   Jets_cut_CSV__6712->SetBinError(14,82.22489);
   Jets_cut_CSV__6712->SetBinError(15,75.8514);
   Jets_cut_CSV__6712->SetBinError(16,71.80156);
   Jets_cut_CSV__6712->SetBinError(17,64.99032);
   Jets_cut_CSV__6712->SetBinError(18,59.82656);
   Jets_cut_CSV__6712->SetBinError(19,58.13462);
   Jets_cut_CSV__6712->SetBinError(20,78.79142);
   Jets_cut_CSV__6712->SetEntries(2.853026e+07);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jets_cut_CSV__6712->SetLineColor(ci);
   Jets_cut_CSV__6712->GetXaxis()->SetTitle("BvL tagging score");
   Jets_cut_CSV__6712->GetXaxis()->SetRange(1,20);
   Jets_cut_CSV__6712->GetXaxis()->SetLabelFont(42);
   Jets_cut_CSV__6712->GetXaxis()->SetTitleOffset(1);
   Jets_cut_CSV__6712->GetXaxis()->SetTitleFont(42);
   Jets_cut_CSV__6712->GetYaxis()->SetTitle("Events/0.05");
   Jets_cut_CSV__6712->GetYaxis()->SetLabelFont(42);
   Jets_cut_CSV__6712->GetYaxis()->SetLabelSize(0.05);
   Jets_cut_CSV__6712->GetYaxis()->SetTitleSize(0.057);
   Jets_cut_CSV__6712->GetYaxis()->SetTitleOffset(1.2);
   Jets_cut_CSV__6712->GetYaxis()->SetTitleFont(42);
   Jets_cut_CSV__6712->GetZaxis()->SetLabelFont(42);
   Jets_cut_CSV__6712->GetZaxis()->SetTitleOffset(1);
   Jets_cut_CSV__6712->GetZaxis()->SetTitleFont(42);
   Jets_cut_CSV__6712->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CSV_WW_tagFirst_2b1c_16->Modified();
   CSV_WW_tagFirst_2b1c_16->cd();
   CSV_WW_tagFirst_2b1c_16->SetSelected(CSV_WW_tagFirst_2b1c_16);
}
