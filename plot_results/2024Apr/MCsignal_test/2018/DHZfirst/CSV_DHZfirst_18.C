#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CSV_DHZfirst_18()
{
//=========Macro generated from canvas: CSV_DHZfirst_18/CSV_DHZfirst_18
//=========  (Thu Apr 11 14:04:11 2024) by ROOT version 6.28/10
   TCanvas *CSV_DHZfirst_18 = new TCanvas("CSV_DHZfirst_18", "CSV_DHZfirst_18",0,0,600,600);
   gStyle->SetOptStat(0);
   CSV_DHZfirst_18->SetHighLightColor(2);
   CSV_DHZfirst_18->Range(-0.2,-1.420368e+11,1.133333,1.278331e+12);
   CSV_DHZfirst_18->SetFillColor(0);
   CSV_DHZfirst_18->SetFillStyle(4000);
   CSV_DHZfirst_18->SetBorderMode(0);
   CSV_DHZfirst_18->SetBorderSize(2);
   CSV_DHZfirst_18->SetLeftMargin(0.15);
   CSV_DHZfirst_18->SetFrameFillStyle(1000);
   CSV_DHZfirst_18->SetFrameBorderMode(0);
   CSV_DHZfirst_18->SetFrameFillStyle(1000);
   CSV_DHZfirst_18->SetFrameBorderMode(0);
   
   TH1D *Jets_cut_CSV__174 = new TH1D("Jets_cut_CSV__174","",20,0,1);
   Jets_cut_CSV__174->SetBinContent(1,1.082185e+12);
   Jets_cut_CSV__174->SetBinContent(2,6.904318e+10);
   Jets_cut_CSV__174->SetBinContent(3,2.635294e+10);
   Jets_cut_CSV__174->SetBinContent(4,1.445836e+10);
   Jets_cut_CSV__174->SetBinContent(5,9.278174e+09);
   Jets_cut_CSV__174->SetBinContent(6,7.115284e+09);
   Jets_cut_CSV__174->SetBinContent(7,5.990436e+09);
   Jets_cut_CSV__174->SetBinContent(8,4.598864e+09);
   Jets_cut_CSV__174->SetBinContent(9,3.613166e+09);
   Jets_cut_CSV__174->SetBinContent(10,2.897657e+09);
   Jets_cut_CSV__174->SetBinContent(11,2.518602e+09);
   Jets_cut_CSV__174->SetBinContent(12,2.248042e+09);
   Jets_cut_CSV__174->SetBinContent(13,1.91197e+09);
   Jets_cut_CSV__174->SetBinContent(14,1.779122e+09);
   Jets_cut_CSV__174->SetBinContent(15,1.766332e+09);
   Jets_cut_CSV__174->SetBinContent(16,1.837314e+09);
   Jets_cut_CSV__174->SetBinContent(17,1.816424e+09);
   Jets_cut_CSV__174->SetBinContent(18,2.013716e+09);
   Jets_cut_CSV__174->SetBinContent(19,2.775779e+09);
   Jets_cut_CSV__174->SetBinContent(20,1.802176e+10);
   Jets_cut_CSV__174->SetBinError(1,1.478787e+09);
   Jets_cut_CSV__174->SetBinError(2,4.122259e+08);
   Jets_cut_CSV__174->SetBinError(3,2.440299e+08);
   Jets_cut_CSV__174->SetBinError(4,2.344361e+08);
   Jets_cut_CSV__174->SetBinError(5,1.386651e+08);
   Jets_cut_CSV__174->SetBinError(6,1.307844e+08);
   Jets_cut_CSV__174->SetBinError(7,1.263604e+08);
   Jets_cut_CSV__174->SetBinError(8,1.06352e+08);
   Jets_cut_CSV__174->SetBinError(9,9.273079e+07);
   Jets_cut_CSV__174->SetBinError(10,7.923217e+07);
   Jets_cut_CSV__174->SetBinError(11,6.93763e+07);
   Jets_cut_CSV__174->SetBinError(12,6.544282e+07);
   Jets_cut_CSV__174->SetBinError(13,6.170879e+07);
   Jets_cut_CSV__174->SetBinError(14,5.837853e+07);
   Jets_cut_CSV__174->SetBinError(15,5.662732e+07);
   Jets_cut_CSV__174->SetBinError(16,5.879187e+07);
   Jets_cut_CSV__174->SetBinError(17,5.514384e+07);
   Jets_cut_CSV__174->SetBinError(18,6.082948e+07);
   Jets_cut_CSV__174->SetBinError(19,6.901876e+07);
   Jets_cut_CSV__174->SetBinError(20,2.004263e+08);
   Jets_cut_CSV__174->SetEntries(7709070);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jets_cut_CSV__174->SetLineColor(ci);
   Jets_cut_CSV__174->GetXaxis()->SetTitle("BvL tagging score");
   Jets_cut_CSV__174->GetXaxis()->SetRange(1,20);
   Jets_cut_CSV__174->GetXaxis()->SetLabelFont(42);
   Jets_cut_CSV__174->GetXaxis()->SetTitleOffset(1);
   Jets_cut_CSV__174->GetXaxis()->SetTitleFont(42);
   Jets_cut_CSV__174->GetYaxis()->SetTitle("Events/0.05");
   Jets_cut_CSV__174->GetYaxis()->SetLabelFont(42);
   Jets_cut_CSV__174->GetYaxis()->SetLabelSize(0.05);
   Jets_cut_CSV__174->GetYaxis()->SetTitleSize(0.057);
   Jets_cut_CSV__174->GetYaxis()->SetTitleOffset(1.2);
   Jets_cut_CSV__174->GetYaxis()->SetTitleFont(42);
   Jets_cut_CSV__174->GetZaxis()->SetLabelFont(42);
   Jets_cut_CSV__174->GetZaxis()->SetTitleOffset(1);
   Jets_cut_CSV__174->GetZaxis()->SetTitleFont(42);
   Jets_cut_CSV__174->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, -- fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CSV_DHZfirst_18->Modified();
   CSV_DHZfirst_18->cd();
   CSV_DHZfirst_18->SetSelected(CSV_DHZfirst_18);
}
