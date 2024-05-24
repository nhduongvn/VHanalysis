#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CSV_TT_DHZfirst_18()
{
//=========Macro generated from canvas: CSV_TT_DHZfirst_18/CSV_TT_DHZfirst_18
//=========  (Fri May 24 12:43:44 2024) by ROOT version 6.28/10
   TCanvas *CSV_TT_DHZfirst_18 = new TCanvas("CSV_TT_DHZfirst_18", "CSV_TT_DHZfirst_18",0,0,600,600);
   gStyle->SetOptStat(0);
   CSV_TT_DHZfirst_18->SetHighLightColor(2);
   CSV_TT_DHZfirst_18->Range(-0.2,-1.300603e+07,1.133333,1.170543e+08);
   CSV_TT_DHZfirst_18->SetFillColor(0);
   CSV_TT_DHZfirst_18->SetFillStyle(4000);
   CSV_TT_DHZfirst_18->SetBorderMode(0);
   CSV_TT_DHZfirst_18->SetBorderSize(2);
   CSV_TT_DHZfirst_18->SetLeftMargin(0.15);
   CSV_TT_DHZfirst_18->SetFrameFillStyle(1000);
   CSV_TT_DHZfirst_18->SetFrameBorderMode(0);
   CSV_TT_DHZfirst_18->SetFrameFillStyle(1000);
   CSV_TT_DHZfirst_18->SetFrameBorderMode(0);
   
   TH1D *Jets_cut_CSV__5928 = new TH1D("Jets_cut_CSV__5928","",20,0,1);
   Jets_cut_CSV__5928->SetBinContent(1,9.909359e+07);
   Jets_cut_CSV__5928->SetBinContent(2,1.109772e+07);
   Jets_cut_CSV__5928->SetBinContent(3,5413190);
   Jets_cut_CSV__5928->SetBinContent(4,3662141);
   Jets_cut_CSV__5928->SetBinContent(5,2849277);
   Jets_cut_CSV__5928->SetBinContent(6,2403407);
   Jets_cut_CSV__5928->SetBinContent(7,2083873);
   Jets_cut_CSV__5928->SetBinContent(8,1869545);
   Jets_cut_CSV__5928->SetBinContent(9,1692628);
   Jets_cut_CSV__5928->SetBinContent(10,1639047);
   Jets_cut_CSV__5928->SetBinContent(11,1650949);
   Jets_cut_CSV__5928->SetBinContent(12,1661569);
   Jets_cut_CSV__5928->SetBinContent(13,1638265);
   Jets_cut_CSV__5928->SetBinContent(14,1759661);
   Jets_cut_CSV__5928->SetBinContent(15,1915341);
   Jets_cut_CSV__5928->SetBinContent(16,2221817);
   Jets_cut_CSV__5928->SetBinContent(17,2538432);
   Jets_cut_CSV__5928->SetBinContent(18,3077694);
   Jets_cut_CSV__5928->SetBinContent(19,4825389);
   Jets_cut_CSV__5928->SetBinContent(20,3.524179e+07);
   Jets_cut_CSV__5928->SetBinError(1,3581.31);
   Jets_cut_CSV__5928->SetBinError(2,1240.489);
   Jets_cut_CSV__5928->SetBinError(3,852.8743);
   Jets_cut_CSV__5928->SetBinError(4,688.1725);
   Jets_cut_CSV__5928->SetBinError(5,601.3116);
   Jets_cut_CSV__5928->SetBinError(6,556.1561);
   Jets_cut_CSV__5928->SetBinError(7,515.3111);
   Jets_cut_CSV__5928->SetBinError(8,479.8297);
   Jets_cut_CSV__5928->SetBinError(9,449.8927);
   Jets_cut_CSV__5928->SetBinError(10,436.7253);
   Jets_cut_CSV__5928->SetBinError(11,434.8046);
   Jets_cut_CSV__5928->SetBinError(12,434.1861);
   Jets_cut_CSV__5928->SetBinError(13,430.4755);
   Jets_cut_CSV__5928->SetBinError(14,452.6004);
   Jets_cut_CSV__5928->SetBinError(15,475.9586);
   Jets_cut_CSV__5928->SetBinError(16,511.6797);
   Jets_cut_CSV__5928->SetBinError(17,546.9394);
   Jets_cut_CSV__5928->SetBinError(18,600.5289);
   Jets_cut_CSV__5928->SetBinError(19,752.2683);
   Jets_cut_CSV__5928->SetBinError(20,2043.497);
   Jets_cut_CSV__5928->SetEntries(2.381475e+09);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jets_cut_CSV__5928->SetLineColor(ci);
   Jets_cut_CSV__5928->GetXaxis()->SetTitle("BvL tagging score");
   Jets_cut_CSV__5928->GetXaxis()->SetRange(1,20);
   Jets_cut_CSV__5928->GetXaxis()->SetLabelFont(42);
   Jets_cut_CSV__5928->GetXaxis()->SetTitleOffset(1);
   Jets_cut_CSV__5928->GetXaxis()->SetTitleFont(42);
   Jets_cut_CSV__5928->GetYaxis()->SetTitle("Events/0.05");
   Jets_cut_CSV__5928->GetYaxis()->SetLabelFont(42);
   Jets_cut_CSV__5928->GetYaxis()->SetLabelSize(0.05);
   Jets_cut_CSV__5928->GetYaxis()->SetTitleSize(0.057);
   Jets_cut_CSV__5928->GetYaxis()->SetTitleOffset(1.2);
   Jets_cut_CSV__5928->GetYaxis()->SetTitleFont(42);
   Jets_cut_CSV__5928->GetZaxis()->SetLabelFont(42);
   Jets_cut_CSV__5928->GetZaxis()->SetTitleOffset(1);
   Jets_cut_CSV__5928->GetZaxis()->SetTitleFont(42);
   Jets_cut_CSV__5928->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CSV_TT_DHZfirst_18->Modified();
   CSV_TT_DHZfirst_18->cd();
   CSV_TT_DHZfirst_18->SetSelected(CSV_TT_DHZfirst_18);
}
