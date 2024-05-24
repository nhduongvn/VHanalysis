#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CSV_ZHcc_DHZfirst_18()
{
//=========Macro generated from canvas: CSV_ZHcc_DHZfirst_18/CSV_ZHcc_DHZfirst_18
//=========  (Fri May 24 12:43:44 2024) by ROOT version 6.28/10
   TCanvas *CSV_ZHcc_DHZfirst_18 = new TCanvas("CSV_ZHcc_DHZfirst_18", "CSV_ZHcc_DHZfirst_18",0,0,600,600);
   gStyle->SetOptStat(0);
   CSV_ZHcc_DHZfirst_18->SetHighLightColor(2);
   CSV_ZHcc_DHZfirst_18->Range(-0.2,-230.3434,1.133333,2073.09);
   CSV_ZHcc_DHZfirst_18->SetFillColor(0);
   CSV_ZHcc_DHZfirst_18->SetFillStyle(4000);
   CSV_ZHcc_DHZfirst_18->SetBorderMode(0);
   CSV_ZHcc_DHZfirst_18->SetBorderSize(2);
   CSV_ZHcc_DHZfirst_18->SetLeftMargin(0.15);
   CSV_ZHcc_DHZfirst_18->SetFrameFillStyle(1000);
   CSV_ZHcc_DHZfirst_18->SetFrameBorderMode(0);
   CSV_ZHcc_DHZfirst_18->SetFrameFillStyle(1000);
   CSV_ZHcc_DHZfirst_18->SetFrameBorderMode(0);
   
   TH1D *Jets_cut_CSV__5913 = new TH1D("Jets_cut_CSV__5913","",20,0,1);
   Jets_cut_CSV__5913->SetBinContent(1,1754.997);
   Jets_cut_CSV__5913->SetBinContent(2,273.9146);
   Jets_cut_CSV__5913->SetBinContent(3,133.3656);
   Jets_cut_CSV__5913->SetBinContent(4,88.47184);
   Jets_cut_CSV__5913->SetBinContent(5,65.30269);
   Jets_cut_CSV__5913->SetBinContent(6,51.9385);
   Jets_cut_CSV__5913->SetBinContent(7,42.20226);
   Jets_cut_CSV__5913->SetBinContent(8,34.03981);
   Jets_cut_CSV__5913->SetBinContent(9,28.16056);
   Jets_cut_CSV__5913->SetBinContent(10,24.20743);
   Jets_cut_CSV__5913->SetBinContent(11,22.54907);
   Jets_cut_CSV__5913->SetBinContent(12,19.78082);
   Jets_cut_CSV__5913->SetBinContent(13,17.24289);
   Jets_cut_CSV__5913->SetBinContent(14,15.9517);
   Jets_cut_CSV__5913->SetBinContent(15,15.20292);
   Jets_cut_CSV__5913->SetBinContent(16,15.11445);
   Jets_cut_CSV__5913->SetBinContent(17,14.9333);
   Jets_cut_CSV__5913->SetBinContent(18,14.79248);
   Jets_cut_CSV__5913->SetBinContent(19,20.22134);
   Jets_cut_CSV__5913->SetBinContent(20,112.5643);
   Jets_cut_CSV__5913->SetBinError(1,2.100486);
   Jets_cut_CSV__5913->SetBinError(2,0.8278226);
   Jets_cut_CSV__5913->SetBinError(3,0.5677553);
   Jets_cut_CSV__5913->SetBinError(4,0.4603027);
   Jets_cut_CSV__5913->SetBinError(5,0.3923778);
   Jets_cut_CSV__5913->SetBinError(6,0.3496194);
   Jets_cut_CSV__5913->SetBinError(7,0.3183084);
   Jets_cut_CSV__5913->SetBinError(8,0.2846007);
   Jets_cut_CSV__5913->SetBinError(9,0.2730615);
   Jets_cut_CSV__5913->SetBinError(10,0.2327307);
   Jets_cut_CSV__5913->SetBinError(11,0.243962);
   Jets_cut_CSV__5913->SetBinError(12,0.2160901);
   Jets_cut_CSV__5913->SetBinError(13,0.2056157);
   Jets_cut_CSV__5913->SetBinError(14,0.1866394);
   Jets_cut_CSV__5913->SetBinError(15,0.1822195);
   Jets_cut_CSV__5913->SetBinError(16,0.1794603);
   Jets_cut_CSV__5913->SetBinError(17,0.1882314);
   Jets_cut_CSV__5913->SetBinError(18,0.1814025);
   Jets_cut_CSV__5913->SetBinError(19,0.2110398);
   Jets_cut_CSV__5913->SetBinError(20,0.5227098);
   Jets_cut_CSV__5913->SetEntries(2587055);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jets_cut_CSV__5913->SetLineColor(ci);
   Jets_cut_CSV__5913->GetXaxis()->SetTitle("BvL tagging score");
   Jets_cut_CSV__5913->GetXaxis()->SetRange(1,20);
   Jets_cut_CSV__5913->GetXaxis()->SetLabelFont(42);
   Jets_cut_CSV__5913->GetXaxis()->SetTitleOffset(1);
   Jets_cut_CSV__5913->GetXaxis()->SetTitleFont(42);
   Jets_cut_CSV__5913->GetYaxis()->SetTitle("Events/0.05");
   Jets_cut_CSV__5913->GetYaxis()->SetLabelFont(42);
   Jets_cut_CSV__5913->GetYaxis()->SetLabelSize(0.05);
   Jets_cut_CSV__5913->GetYaxis()->SetTitleSize(0.057);
   Jets_cut_CSV__5913->GetYaxis()->SetTitleOffset(1.2);
   Jets_cut_CSV__5913->GetYaxis()->SetTitleFont(42);
   Jets_cut_CSV__5913->GetZaxis()->SetLabelFont(42);
   Jets_cut_CSV__5913->GetZaxis()->SetTitleOffset(1);
   Jets_cut_CSV__5913->GetZaxis()->SetTitleFont(42);
   Jets_cut_CSV__5913->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CSV_ZHcc_DHZfirst_18->Modified();
   CSV_ZHcc_DHZfirst_18->cd();
   CSV_ZHcc_DHZfirst_18->SetSelected(CSV_ZHcc_DHZfirst_18);
}
