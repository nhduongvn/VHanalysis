#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CSV_QCD_DHZfirst_2b1c_18()
{
//=========Macro generated from canvas: CSV_QCD_DHZfirst_2b1c_18/CSV_QCD_DHZfirst_2b1c_18
//=========  (Fri May 24 12:44:34 2024) by ROOT version 6.28/10
   TCanvas *CSV_QCD_DHZfirst_2b1c_18 = new TCanvas("CSV_QCD_DHZfirst_2b1c_18", "CSV_QCD_DHZfirst_2b1c_18",0,0,600,600);
   gStyle->SetOptStat(0);
   CSV_QCD_DHZfirst_2b1c_18->SetHighLightColor(2);
   CSV_QCD_DHZfirst_2b1c_18->Range(-0.2,-1.423198e+11,1.133333,1.280878e+12);
   CSV_QCD_DHZfirst_2b1c_18->SetFillColor(0);
   CSV_QCD_DHZfirst_2b1c_18->SetFillStyle(4000);
   CSV_QCD_DHZfirst_2b1c_18->SetBorderMode(0);
   CSV_QCD_DHZfirst_2b1c_18->SetBorderSize(2);
   CSV_QCD_DHZfirst_2b1c_18->SetLeftMargin(0.15);
   CSV_QCD_DHZfirst_2b1c_18->SetFrameFillStyle(1000);
   CSV_QCD_DHZfirst_2b1c_18->SetFrameBorderMode(0);
   CSV_QCD_DHZfirst_2b1c_18->SetFrameFillStyle(1000);
   CSV_QCD_DHZfirst_2b1c_18->SetFrameBorderMode(0);
   
   TH1D *Jets_cut_CSV__8259 = new TH1D("Jets_cut_CSV__8259","",20,0,1);
   Jets_cut_CSV__8259->SetBinContent(1,1.084341e+12);
   Jets_cut_CSV__8259->SetBinContent(2,6.924257e+10);
   Jets_cut_CSV__8259->SetBinContent(3,2.611321e+10);
   Jets_cut_CSV__8259->SetBinContent(4,1.422149e+10);
   Jets_cut_CSV__8259->SetBinContent(5,9.077892e+09);
   Jets_cut_CSV__8259->SetBinContent(6,7.102994e+09);
   Jets_cut_CSV__8259->SetBinContent(7,5.963691e+09);
   Jets_cut_CSV__8259->SetBinContent(8,4.596282e+09);
   Jets_cut_CSV__8259->SetBinContent(9,3.59311e+09);
   Jets_cut_CSV__8259->SetBinContent(10,2.978375e+09);
   Jets_cut_CSV__8259->SetBinContent(11,2.57663e+09);
   Jets_cut_CSV__8259->SetBinContent(12,2.258039e+09);
   Jets_cut_CSV__8259->SetBinContent(13,1.971512e+09);
   Jets_cut_CSV__8259->SetBinContent(14,1.841553e+09);
   Jets_cut_CSV__8259->SetBinContent(15,1.771194e+09);
   Jets_cut_CSV__8259->SetBinContent(16,1.818366e+09);
   Jets_cut_CSV__8259->SetBinContent(17,1.862788e+09);
   Jets_cut_CSV__8259->SetBinContent(18,2.028795e+09);
   Jets_cut_CSV__8259->SetBinContent(19,2.866041e+09);
   Jets_cut_CSV__8259->SetBinContent(20,1.797242e+10);
   Jets_cut_CSV__8259->SetBinError(1,1.63284e+08);
   Jets_cut_CSV__8259->SetBinError(2,4.525592e+07);
   Jets_cut_CSV__8259->SetBinError(3,2.781577e+07);
   Jets_cut_CSV__8259->SetBinError(4,2.055234e+07);
   Jets_cut_CSV__8259->SetBinError(5,1.573384e+07);
   Jets_cut_CSV__8259->SetBinError(6,1.51297e+07);
   Jets_cut_CSV__8259->SetBinError(7,1.455038e+07);
   Jets_cut_CSV__8259->SetBinError(8,1.269685e+07);
   Jets_cut_CSV__8259->SetBinError(9,1.036215e+07);
   Jets_cut_CSV__8259->SetBinError(10,9551233);
   Jets_cut_CSV__8259->SetBinError(11,8611897);
   Jets_cut_CSV__8259->SetBinError(12,7605790);
   Jets_cut_CSV__8259->SetBinError(13,6948439);
   Jets_cut_CSV__8259->SetBinError(14,6637522);
   Jets_cut_CSV__8259->SetBinError(15,6447510);
   Jets_cut_CSV__8259->SetBinError(16,6752414);
   Jets_cut_CSV__8259->SetBinError(17,6463082);
   Jets_cut_CSV__8259->SetBinError(18,6849698);
   Jets_cut_CSV__8259->SetBinError(19,8285304);
   Jets_cut_CSV__8259->SetBinError(20,2.07192e+07);
   Jets_cut_CSV__8259->SetEntries(7.315384e+08);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jets_cut_CSV__8259->SetLineColor(ci);
   Jets_cut_CSV__8259->GetXaxis()->SetTitle("BvL tagging score");
   Jets_cut_CSV__8259->GetXaxis()->SetRange(1,20);
   Jets_cut_CSV__8259->GetXaxis()->SetLabelFont(42);
   Jets_cut_CSV__8259->GetXaxis()->SetTitleOffset(1);
   Jets_cut_CSV__8259->GetXaxis()->SetTitleFont(42);
   Jets_cut_CSV__8259->GetYaxis()->SetTitle("Events/0.05");
   Jets_cut_CSV__8259->GetYaxis()->SetLabelFont(42);
   Jets_cut_CSV__8259->GetYaxis()->SetLabelSize(0.05);
   Jets_cut_CSV__8259->GetYaxis()->SetTitleSize(0.057);
   Jets_cut_CSV__8259->GetYaxis()->SetTitleOffset(1.2);
   Jets_cut_CSV__8259->GetYaxis()->SetTitleFont(42);
   Jets_cut_CSV__8259->GetZaxis()->SetLabelFont(42);
   Jets_cut_CSV__8259->GetZaxis()->SetTitleOffset(1);
   Jets_cut_CSV__8259->GetZaxis()->SetTitleFont(42);
   Jets_cut_CSV__8259->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CSV_QCD_DHZfirst_2b1c_18->Modified();
   CSV_QCD_DHZfirst_2b1c_18->cd();
   CSV_QCD_DHZfirst_2b1c_18->SetSelected(CSV_QCD_DHZfirst_2b1c_18);
}
