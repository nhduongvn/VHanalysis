#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CSV_WZ_tagFirst_2b1c_16()
{
//=========Macro generated from canvas: CSV_WZ_tagFirst_2b1c_16/CSV_WZ_tagFirst_2b1c_16
//=========  (Fri May 24 12:44:01 2024) by ROOT version 6.28/10
   TCanvas *CSV_WZ_tagFirst_2b1c_16 = new TCanvas("CSV_WZ_tagFirst_2b1c_16", "CSV_WZ_tagFirst_2b1c_16",0,0,600,600);
   gStyle->SetOptStat(0);
   CSV_WZ_tagFirst_2b1c_16->SetHighLightColor(2);
   CSV_WZ_tagFirst_2b1c_16->Range(-0.2,-322389.3,1.133333,2901504);
   CSV_WZ_tagFirst_2b1c_16->SetFillColor(0);
   CSV_WZ_tagFirst_2b1c_16->SetFillStyle(4000);
   CSV_WZ_tagFirst_2b1c_16->SetBorderMode(0);
   CSV_WZ_tagFirst_2b1c_16->SetBorderSize(2);
   CSV_WZ_tagFirst_2b1c_16->SetLeftMargin(0.15);
   CSV_WZ_tagFirst_2b1c_16->SetFrameFillStyle(1000);
   CSV_WZ_tagFirst_2b1c_16->SetFrameBorderMode(0);
   CSV_WZ_tagFirst_2b1c_16->SetFrameFillStyle(1000);
   CSV_WZ_tagFirst_2b1c_16->SetFrameBorderMode(0);
   
   TH1D *Jets_cut_CSV__6715 = new TH1D("Jets_cut_CSV__6715","",20,0,1);
   Jets_cut_CSV__6715->SetBinContent(1,2456300);
   Jets_cut_CSV__6715->SetBinContent(2,221303.8);
   Jets_cut_CSV__6715->SetBinContent(3,92919.49);
   Jets_cut_CSV__6715->SetBinContent(4,54836.21);
   Jets_cut_CSV__6715->SetBinContent(5,38336.03);
   Jets_cut_CSV__6715->SetBinContent(6,29290.51);
   Jets_cut_CSV__6715->SetBinContent(7,23086.09);
   Jets_cut_CSV__6715->SetBinContent(8,18797.05);
   Jets_cut_CSV__6715->SetBinContent(9,15807.4);
   Jets_cut_CSV__6715->SetBinContent(10,13864.21);
   Jets_cut_CSV__6715->SetBinContent(11,12861.87);
   Jets_cut_CSV__6715->SetBinContent(12,11693.81);
   Jets_cut_CSV__6715->SetBinContent(13,10742.76);
   Jets_cut_CSV__6715->SetBinContent(14,10440.85);
   Jets_cut_CSV__6715->SetBinContent(15,10474.9);
   Jets_cut_CSV__6715->SetBinContent(16,11191.34);
   Jets_cut_CSV__6715->SetBinContent(17,11564.38);
   Jets_cut_CSV__6715->SetBinContent(18,13533.41);
   Jets_cut_CSV__6715->SetBinContent(19,19850.18);
   Jets_cut_CSV__6715->SetBinContent(20,114961.6);
   Jets_cut_CSV__6715->SetBinError(1,1035.164);
   Jets_cut_CSV__6715->SetBinError(2,312.712);
   Jets_cut_CSV__6715->SetBinError(3,202.9965);
   Jets_cut_CSV__6715->SetBinError(4,156.0299);
   Jets_cut_CSV__6715->SetBinError(5,130.4986);
   Jets_cut_CSV__6715->SetBinError(6,114.3559);
   Jets_cut_CSV__6715->SetBinError(7,100.6915);
   Jets_cut_CSV__6715->SetBinError(8,90.37941);
   Jets_cut_CSV__6715->SetBinError(9,83.06979);
   Jets_cut_CSV__6715->SetBinError(10,77.75205);
   Jets_cut_CSV__6715->SetBinError(11,75.01133);
   Jets_cut_CSV__6715->SetBinError(12,71.87749);
   Jets_cut_CSV__6715->SetBinError(13,69.50136);
   Jets_cut_CSV__6715->SetBinError(14,69.03034);
   Jets_cut_CSV__6715->SetBinError(15,69.33716);
   Jets_cut_CSV__6715->SetBinError(16,71.93358);
   Jets_cut_CSV__6715->SetBinError(17,73.24629);
   Jets_cut_CSV__6715->SetBinError(18,79.7256);
   Jets_cut_CSV__6715->SetBinError(19,96.65022);
   Jets_cut_CSV__6715->SetBinError(20,234.6774);
   Jets_cut_CSV__6715->SetEntries(1.532076e+07);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jets_cut_CSV__6715->SetLineColor(ci);
   Jets_cut_CSV__6715->GetXaxis()->SetTitle("BvL tagging score");
   Jets_cut_CSV__6715->GetXaxis()->SetRange(1,20);
   Jets_cut_CSV__6715->GetXaxis()->SetLabelFont(42);
   Jets_cut_CSV__6715->GetXaxis()->SetTitleOffset(1);
   Jets_cut_CSV__6715->GetXaxis()->SetTitleFont(42);
   Jets_cut_CSV__6715->GetYaxis()->SetTitle("Events/0.05");
   Jets_cut_CSV__6715->GetYaxis()->SetLabelFont(42);
   Jets_cut_CSV__6715->GetYaxis()->SetLabelSize(0.05);
   Jets_cut_CSV__6715->GetYaxis()->SetTitleSize(0.057);
   Jets_cut_CSV__6715->GetYaxis()->SetTitleOffset(1.2);
   Jets_cut_CSV__6715->GetYaxis()->SetTitleFont(42);
   Jets_cut_CSV__6715->GetZaxis()->SetLabelFont(42);
   Jets_cut_CSV__6715->GetZaxis()->SetTitleOffset(1);
   Jets_cut_CSV__6715->GetZaxis()->SetTitleFont(42);
   Jets_cut_CSV__6715->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CSV_WZ_tagFirst_2b1c_16->Modified();
   CSV_WZ_tagFirst_2b1c_16->cd();
   CSV_WZ_tagFirst_2b1c_16->SetSelected(CSV_WZ_tagFirst_2b1c_16);
}
