#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CSV_ZZ_DHZfirst_2b1c_18()
{
//=========Macro generated from canvas: CSV_ZZ_DHZfirst_2b1c_18/CSV_ZZ_DHZfirst_2b1c_18
//=========  (Fri May 24 12:44:34 2024) by ROOT version 6.28/10
   TCanvas *CSV_ZZ_DHZfirst_2b1c_18 = new TCanvas("CSV_ZZ_DHZfirst_2b1c_18", "CSV_ZZ_DHZfirst_2b1c_18",0,0,600,600);
   gStyle->SetOptStat(0);
   CSV_ZZ_DHZfirst_2b1c_18->SetHighLightColor(2);
   CSV_ZZ_DHZfirst_2b1c_18->Range(-0.2,-98675.29,1.133333,888077.6);
   CSV_ZZ_DHZfirst_2b1c_18->SetFillColor(0);
   CSV_ZZ_DHZfirst_2b1c_18->SetFillStyle(4000);
   CSV_ZZ_DHZfirst_2b1c_18->SetBorderMode(0);
   CSV_ZZ_DHZfirst_2b1c_18->SetBorderSize(2);
   CSV_ZZ_DHZfirst_2b1c_18->SetLeftMargin(0.15);
   CSV_ZZ_DHZfirst_2b1c_18->SetFrameFillStyle(1000);
   CSV_ZZ_DHZfirst_2b1c_18->SetFrameBorderMode(0);
   CSV_ZZ_DHZfirst_2b1c_18->SetFrameFillStyle(1000);
   CSV_ZZ_DHZfirst_2b1c_18->SetFrameBorderMode(0);
   
   TH1D *Jets_cut_CSV__8280 = new TH1D("Jets_cut_CSV__8280","",20,0,1);
   Jets_cut_CSV__8280->SetBinContent(1,751811.7);
   Jets_cut_CSV__8280->SetBinContent(2,68442.71);
   Jets_cut_CSV__8280->SetBinContent(3,29656.63);
   Jets_cut_CSV__8280->SetBinContent(4,18264.22);
   Jets_cut_CSV__8280->SetBinContent(5,13103.37);
   Jets_cut_CSV__8280->SetBinContent(6,10674.72);
   Jets_cut_CSV__8280->SetBinContent(7,8984.789);
   Jets_cut_CSV__8280->SetBinContent(8,7613.155);
   Jets_cut_CSV__8280->SetBinContent(9,6300.47);
   Jets_cut_CSV__8280->SetBinContent(10,5630.775);
   Jets_cut_CSV__8280->SetBinContent(11,5367.741);
   Jets_cut_CSV__8280->SetBinContent(12,5123.076);
   Jets_cut_CSV__8280->SetBinContent(13,4686.88);
   Jets_cut_CSV__8280->SetBinContent(14,4700.081);
   Jets_cut_CSV__8280->SetBinContent(15,5009.064);
   Jets_cut_CSV__8280->SetBinContent(16,5544.236);
   Jets_cut_CSV__8280->SetBinContent(17,6177.757);
   Jets_cut_CSV__8280->SetBinContent(18,7336.149);
   Jets_cut_CSV__8280->SetBinContent(19,11004.9);
   Jets_cut_CSV__8280->SetBinContent(20,75649.37);
   Jets_cut_CSV__8280->SetBinError(1,567.294);
   Jets_cut_CSV__8280->SetBinError(2,185.8564);
   Jets_cut_CSV__8280->SetBinError(3,113.8623);
   Jets_cut_CSV__8280->SetBinError(4,87.44655);
   Jets_cut_CSV__8280->SetBinError(5,75.4194);
   Jets_cut_CSV__8280->SetBinError(6,82.77125);
   Jets_cut_CSV__8280->SetBinError(7,66.66138);
   Jets_cut_CSV__8280->SetBinError(8,62.31049);
   Jets_cut_CSV__8280->SetBinError(9,52.72742);
   Jets_cut_CSV__8280->SetBinError(10,47.93982);
   Jets_cut_CSV__8280->SetBinError(11,46.54904);
   Jets_cut_CSV__8280->SetBinError(12,47.73607);
   Jets_cut_CSV__8280->SetBinError(13,44.59809);
   Jets_cut_CSV__8280->SetBinError(14,43.10724);
   Jets_cut_CSV__8280->SetBinError(15,44.17626);
   Jets_cut_CSV__8280->SetBinError(16,46.46102);
   Jets_cut_CSV__8280->SetBinError(17,50.39731);
   Jets_cut_CSV__8280->SetBinError(18,57.62349);
   Jets_cut_CSV__8280->SetBinError(19,65.8879);
   Jets_cut_CSV__8280->SetBinError(20,173.3426);
   Jets_cut_CSV__8280->SetEntries(3672806);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jets_cut_CSV__8280->SetLineColor(ci);
   Jets_cut_CSV__8280->GetXaxis()->SetTitle("BvL tagging score");
   Jets_cut_CSV__8280->GetXaxis()->SetRange(1,20);
   Jets_cut_CSV__8280->GetXaxis()->SetLabelFont(42);
   Jets_cut_CSV__8280->GetXaxis()->SetTitleOffset(1);
   Jets_cut_CSV__8280->GetXaxis()->SetTitleFont(42);
   Jets_cut_CSV__8280->GetYaxis()->SetTitle("Events/0.05");
   Jets_cut_CSV__8280->GetYaxis()->SetLabelFont(42);
   Jets_cut_CSV__8280->GetYaxis()->SetLabelSize(0.05);
   Jets_cut_CSV__8280->GetYaxis()->SetTitleSize(0.057);
   Jets_cut_CSV__8280->GetYaxis()->SetTitleOffset(1.2);
   Jets_cut_CSV__8280->GetYaxis()->SetTitleFont(42);
   Jets_cut_CSV__8280->GetZaxis()->SetLabelFont(42);
   Jets_cut_CSV__8280->GetZaxis()->SetTitleOffset(1);
   Jets_cut_CSV__8280->GetZaxis()->SetTitleFont(42);
   Jets_cut_CSV__8280->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CSV_ZZ_DHZfirst_2b1c_18->Modified();
   CSV_ZZ_DHZfirst_2b1c_18->cd();
   CSV_ZZ_DHZfirst_2b1c_18->SetSelected(CSV_ZZ_DHZfirst_2b1c_18);
}
