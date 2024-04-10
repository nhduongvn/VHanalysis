#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CSV_DHZfirst_18()
{
//=========Macro generated from canvas: CSV_DHZfirst_18/CSV_DHZfirst_18
//=========  (Tue Apr  9 15:53:53 2024) by ROOT version 6.28/10
   TCanvas *CSV_DHZfirst_18 = new TCanvas("CSV_DHZfirst_18", "CSV_DHZfirst_18",0,0,600,600);
   gStyle->SetOptStat(0);
   CSV_DHZfirst_18->SetHighLightColor(2);
   CSV_DHZfirst_18->Range(-0.2,-1.189542e+11,1.133333,1.070588e+12);
   CSV_DHZfirst_18->SetFillColor(0);
   CSV_DHZfirst_18->SetFillStyle(4000);
   CSV_DHZfirst_18->SetBorderMode(0);
   CSV_DHZfirst_18->SetBorderSize(2);
   CSV_DHZfirst_18->SetLeftMargin(0.15);
   CSV_DHZfirst_18->SetFrameFillStyle(1000);
   CSV_DHZfirst_18->SetFrameBorderMode(0);
   CSV_DHZfirst_18->SetFrameFillStyle(1000);
   CSV_DHZfirst_18->SetFrameBorderMode(0);
   
   TH1D *Jets_cut_CSV__126 = new TH1D("Jets_cut_CSV__126","",20,0,1);
   Jets_cut_CSV__126->SetBinContent(1,9.06318e+11);
   Jets_cut_CSV__126->SetBinContent(2,5.736331e+10);
   Jets_cut_CSV__126->SetBinContent(3,2.189675e+10);
   Jets_cut_CSV__126->SetBinContent(4,1.199692e+10);
   Jets_cut_CSV__126->SetBinContent(5,7.69723e+09);
   Jets_cut_CSV__126->SetBinContent(6,5.892379e+09);
   Jets_cut_CSV__126->SetBinContent(7,4.943624e+09);
   Jets_cut_CSV__126->SetBinContent(8,3.805583e+09);
   Jets_cut_CSV__126->SetBinContent(9,2.973188e+09);
   Jets_cut_CSV__126->SetBinContent(10,2.358027e+09);
   Jets_cut_CSV__126->SetBinContent(11,2.041191e+09);
   Jets_cut_CSV__126->SetBinContent(12,1.83484e+09);
   Jets_cut_CSV__126->SetBinContent(13,1.538211e+09);
   Jets_cut_CSV__126->SetBinContent(14,1.423284e+09);
   Jets_cut_CSV__126->SetBinContent(15,1.412778e+09);
   Jets_cut_CSV__126->SetBinContent(16,1.477168e+09);
   Jets_cut_CSV__126->SetBinContent(17,1.436371e+09);
   Jets_cut_CSV__126->SetBinContent(18,1.591996e+09);
   Jets_cut_CSV__126->SetBinContent(19,2.182633e+09);
   Jets_cut_CSV__126->SetBinContent(20,1.44377e+10);
   Jets_cut_CSV__126->SetBinError(1,1.473575e+09);
   Jets_cut_CSV__126->SetBinError(2,4.107306e+08);
   Jets_cut_CSV__126->SetBinError(3,2.429503e+08);
   Jets_cut_CSV__126->SetBinError(4,2.33741e+08);
   Jets_cut_CSV__126->SetBinError(5,1.381299e+08);
   Jets_cut_CSV__126->SetBinError(6,1.302858e+08);
   Jets_cut_CSV__126->SetBinError(7,1.257937e+08);
   Jets_cut_CSV__126->SetBinError(8,1.059455e+08);
   Jets_cut_CSV__126->SetBinError(9,9.237852e+07);
   Jets_cut_CSV__126->SetBinError(10,7.889917e+07);
   Jets_cut_CSV__126->SetBinError(11,6.905473e+07);
   Jets_cut_CSV__126->SetBinError(12,6.516347e+07);
   Jets_cut_CSV__126->SetBinError(13,6.134497e+07);
   Jets_cut_CSV__126->SetBinError(14,5.811524e+07);
   Jets_cut_CSV__126->SetBinError(15,5.636016e+07);
   Jets_cut_CSV__126->SetBinError(16,5.852976e+07);
   Jets_cut_CSV__126->SetBinError(17,5.486436e+07);
   Jets_cut_CSV__126->SetBinError(18,6.052654e+07);
   Jets_cut_CSV__126->SetBinError(19,6.862937e+07);
   Jets_cut_CSV__126->SetBinError(20,1.996731e+08);
   Jets_cut_CSV__126->SetEntries(589029);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jets_cut_CSV__126->SetLineColor(ci);
   Jets_cut_CSV__126->GetXaxis()->SetTitle("BvL tagging score");
   Jets_cut_CSV__126->GetXaxis()->SetRange(1,20);
   Jets_cut_CSV__126->GetXaxis()->SetLabelFont(42);
   Jets_cut_CSV__126->GetXaxis()->SetTitleOffset(1);
   Jets_cut_CSV__126->GetXaxis()->SetTitleFont(42);
   Jets_cut_CSV__126->GetYaxis()->SetTitle("Events/0.05");
   Jets_cut_CSV__126->GetYaxis()->SetLabelFont(42);
   Jets_cut_CSV__126->GetYaxis()->SetLabelSize(0.05);
   Jets_cut_CSV__126->GetYaxis()->SetTitleSize(0.057);
   Jets_cut_CSV__126->GetYaxis()->SetTitleOffset(1.2);
   Jets_cut_CSV__126->GetYaxis()->SetTitleFont(42);
   Jets_cut_CSV__126->GetZaxis()->SetLabelFont(42);
   Jets_cut_CSV__126->GetZaxis()->SetTitleOffset(1);
   Jets_cut_CSV__126->GetZaxis()->SetTitleFont(42);
   Jets_cut_CSV__126->Draw("hist");
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
