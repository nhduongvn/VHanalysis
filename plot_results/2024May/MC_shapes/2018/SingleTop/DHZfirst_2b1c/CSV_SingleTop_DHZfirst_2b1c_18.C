#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CSV_SingleTop_DHZfirst_2b1c_18()
{
//=========Macro generated from canvas: CSV_SingleTop_DHZfirst_2b1c_18/CSV_SingleTop_DHZfirst_2b1c_18
//=========  (Fri May 24 12:44:34 2024) by ROOT version 6.28/10
   TCanvas *CSV_SingleTop_DHZfirst_2b1c_18 = new TCanvas("CSV_SingleTop_DHZfirst_2b1c_18", "CSV_SingleTop_DHZfirst_2b1c_18",0,0,600,600);
   gStyle->SetOptStat(0);
   CSV_SingleTop_DHZfirst_2b1c_18->SetHighLightColor(2);
   CSV_SingleTop_DHZfirst_2b1c_18->Range(-0.2,-2267461,1.133333,2.040715e+07);
   CSV_SingleTop_DHZfirst_2b1c_18->SetFillColor(0);
   CSV_SingleTop_DHZfirst_2b1c_18->SetFillStyle(4000);
   CSV_SingleTop_DHZfirst_2b1c_18->SetBorderMode(0);
   CSV_SingleTop_DHZfirst_2b1c_18->SetBorderSize(2);
   CSV_SingleTop_DHZfirst_2b1c_18->SetLeftMargin(0.15);
   CSV_SingleTop_DHZfirst_2b1c_18->SetFrameFillStyle(1000);
   CSV_SingleTop_DHZfirst_2b1c_18->SetFrameBorderMode(0);
   CSV_SingleTop_DHZfirst_2b1c_18->SetFrameFillStyle(1000);
   CSV_SingleTop_DHZfirst_2b1c_18->SetFrameBorderMode(0);
   
   TH1D *Jets_cut_CSV__8271 = new TH1D("Jets_cut_CSV__8271","",20,0,1);
   Jets_cut_CSV__8271->SetBinContent(1,1.727589e+07);
   Jets_cut_CSV__8271->SetBinContent(2,1907945);
   Jets_cut_CSV__8271->SetBinContent(3,932111.9);
   Jets_cut_CSV__8271->SetBinContent(4,630849.5);
   Jets_cut_CSV__8271->SetBinContent(5,492831.8);
   Jets_cut_CSV__8271->SetBinContent(6,416073.4);
   Jets_cut_CSV__8271->SetBinContent(7,362231.9);
   Jets_cut_CSV__8271->SetBinContent(8,325128.8);
   Jets_cut_CSV__8271->SetBinContent(9,294773.2);
   Jets_cut_CSV__8271->SetBinContent(10,285931.8);
   Jets_cut_CSV__8271->SetBinContent(11,288300.6);
   Jets_cut_CSV__8271->SetBinContent(12,291369.5);
   Jets_cut_CSV__8271->SetBinContent(13,286700.7);
   Jets_cut_CSV__8271->SetBinContent(14,308583.8);
   Jets_cut_CSV__8271->SetBinContent(15,336893.6);
   Jets_cut_CSV__8271->SetBinContent(16,391961.9);
   Jets_cut_CSV__8271->SetBinContent(17,449268.8);
   Jets_cut_CSV__8271->SetBinContent(18,544282.2);
   Jets_cut_CSV__8271->SetBinContent(19,855251);
   Jets_cut_CSV__8271->SetBinContent(20,6256011);
   Jets_cut_CSV__8271->SetBinError(1,1988.974);
   Jets_cut_CSV__8271->SetBinError(2,680.4823);
   Jets_cut_CSV__8271->SetBinError(3,465.5067);
   Jets_cut_CSV__8271->SetBinError(4,377.2068);
   Jets_cut_CSV__8271->SetBinError(5,327.7786);
   Jets_cut_CSV__8271->SetBinError(6,299.8477);
   Jets_cut_CSV__8271->SetBinError(7,279.4334);
   Jets_cut_CSV__8271->SetBinError(8,256.0799);
   Jets_cut_CSV__8271->SetBinError(9,246.6577);
   Jets_cut_CSV__8271->SetBinError(10,234.5656);
   Jets_cut_CSV__8271->SetBinError(11,229.0919);
   Jets_cut_CSV__8271->SetBinError(12,228.9437);
   Jets_cut_CSV__8271->SetBinError(13,228.3494);
   Jets_cut_CSV__8271->SetBinError(14,239.269);
   Jets_cut_CSV__8271->SetBinError(15,249.8448);
   Jets_cut_CSV__8271->SetBinError(16,267.6624);
   Jets_cut_CSV__8271->SetBinError(17,291.5607);
   Jets_cut_CSV__8271->SetBinError(18,313.8057);
   Jets_cut_CSV__8271->SetBinError(19,396.2904);
   Jets_cut_CSV__8271->SetBinError(20,1071.724);
   Jets_cut_CSV__8271->SetEntries(4.653862e+08);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jets_cut_CSV__8271->SetLineColor(ci);
   Jets_cut_CSV__8271->GetXaxis()->SetTitle("BvL tagging score");
   Jets_cut_CSV__8271->GetXaxis()->SetRange(1,20);
   Jets_cut_CSV__8271->GetXaxis()->SetLabelFont(42);
   Jets_cut_CSV__8271->GetXaxis()->SetTitleOffset(1);
   Jets_cut_CSV__8271->GetXaxis()->SetTitleFont(42);
   Jets_cut_CSV__8271->GetYaxis()->SetTitle("Events/0.05");
   Jets_cut_CSV__8271->GetYaxis()->SetLabelFont(42);
   Jets_cut_CSV__8271->GetYaxis()->SetLabelSize(0.05);
   Jets_cut_CSV__8271->GetYaxis()->SetTitleSize(0.057);
   Jets_cut_CSV__8271->GetYaxis()->SetTitleOffset(1.2);
   Jets_cut_CSV__8271->GetYaxis()->SetTitleFont(42);
   Jets_cut_CSV__8271->GetZaxis()->SetLabelFont(42);
   Jets_cut_CSV__8271->GetZaxis()->SetTitleOffset(1);
   Jets_cut_CSV__8271->GetZaxis()->SetTitleFont(42);
   Jets_cut_CSV__8271->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CSV_SingleTop_DHZfirst_2b1c_18->Modified();
   CSV_SingleTop_DHZfirst_2b1c_18->cd();
   CSV_SingleTop_DHZfirst_2b1c_18->SetSelected(CSV_SingleTop_DHZfirst_2b1c_18);
}
