#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CSV_WW_DHZfirst_17()
{
//=========Macro generated from canvas: CSV_WW_DHZfirst_17/CSV_WW_DHZfirst_17
//=========  (Fri May 24 12:43:44 2024) by ROOT version 6.28/10
   TCanvas *CSV_WW_DHZfirst_17 = new TCanvas("CSV_WW_DHZfirst_17", "CSV_WW_DHZfirst_17",0,0,600,600);
   gStyle->SetOptStat(0);
   CSV_WW_DHZfirst_17->SetHighLightColor(2);
   CSV_WW_DHZfirst_17->Range(-0.2,-391611.1,1.133333,3524499);
   CSV_WW_DHZfirst_17->SetFillColor(0);
   CSV_WW_DHZfirst_17->SetFillStyle(4000);
   CSV_WW_DHZfirst_17->SetBorderMode(0);
   CSV_WW_DHZfirst_17->SetBorderSize(2);
   CSV_WW_DHZfirst_17->SetLeftMargin(0.15);
   CSV_WW_DHZfirst_17->SetFrameFillStyle(1000);
   CSV_WW_DHZfirst_17->SetFrameBorderMode(0);
   CSV_WW_DHZfirst_17->SetFrameFillStyle(1000);
   CSV_WW_DHZfirst_17->SetFrameBorderMode(0);
   
   TH1D *Jets_cut_CSV__5933 = new TH1D("Jets_cut_CSV__5933","",20,0,1);
   Jets_cut_CSV__5933->SetBinContent(1,2983703);
   Jets_cut_CSV__5933->SetBinContent(2,266758.1);
   Jets_cut_CSV__5933->SetBinContent(3,114955.3);
   Jets_cut_CSV__5933->SetBinContent(4,68895.49);
   Jets_cut_CSV__5933->SetBinContent(5,47841);
   Jets_cut_CSV__5933->SetBinContent(6,35798.27);
   Jets_cut_CSV__5933->SetBinContent(7,27933.94);
   Jets_cut_CSV__5933->SetBinContent(8,22041.04);
   Jets_cut_CSV__5933->SetBinContent(9,17333.3);
   Jets_cut_CSV__5933->SetBinContent(10,14510.78);
   Jets_cut_CSV__5933->SetBinContent(11,12419.38);
   Jets_cut_CSV__5933->SetBinContent(12,10507.59);
   Jets_cut_CSV__5933->SetBinContent(13,8629.372);
   Jets_cut_CSV__5933->SetBinContent(14,7444.799);
   Jets_cut_CSV__5933->SetBinContent(15,6501.974);
   Jets_cut_CSV__5933->SetBinContent(16,5938.013);
   Jets_cut_CSV__5933->SetBinContent(17,5093.995);
   Jets_cut_CSV__5933->SetBinContent(18,4490.082);
   Jets_cut_CSV__5933->SetBinContent(19,4539.268);
   Jets_cut_CSV__5933->SetBinContent(20,11982.11);
   Jets_cut_CSV__5933->SetBinError(1,940.3468);
   Jets_cut_CSV__5933->SetBinError(2,285.6778);
   Jets_cut_CSV__5933->SetBinError(3,187.2333);
   Jets_cut_CSV__5933->SetBinError(4,144.5688);
   Jets_cut_CSV__5933->SetBinError(5,120.0928);
   Jets_cut_CSV__5933->SetBinError(6,103.7216);
   Jets_cut_CSV__5933->SetBinError(7,93.27194);
   Jets_cut_CSV__5933->SetBinError(8,82.29636);
   Jets_cut_CSV__5933->SetBinError(9,72.60002);
   Jets_cut_CSV__5933->SetBinError(10,65.90488);
   Jets_cut_CSV__5933->SetBinError(11,60.65205);
   Jets_cut_CSV__5933->SetBinError(12,55.36689);
   Jets_cut_CSV__5933->SetBinError(13,50.15592);
   Jets_cut_CSV__5933->SetBinError(14,46.67032);
   Jets_cut_CSV__5933->SetBinError(15,43.56516);
   Jets_cut_CSV__5933->SetBinError(16,41.57581);
   Jets_cut_CSV__5933->SetBinError(17,38.48714);
   Jets_cut_CSV__5933->SetBinError(18,36.354);
   Jets_cut_CSV__5933->SetBinError(19,36.52741);
   Jets_cut_CSV__5933->SetBinError(20,59.90776);
   Jets_cut_CSV__5933->SetEntries(1.415125e+07);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jets_cut_CSV__5933->SetLineColor(ci);
   Jets_cut_CSV__5933->GetXaxis()->SetTitle("BvL tagging score");
   Jets_cut_CSV__5933->GetXaxis()->SetRange(1,20);
   Jets_cut_CSV__5933->GetXaxis()->SetLabelFont(42);
   Jets_cut_CSV__5933->GetXaxis()->SetTitleOffset(1);
   Jets_cut_CSV__5933->GetXaxis()->SetTitleFont(42);
   Jets_cut_CSV__5933->GetYaxis()->SetTitle("Events/0.05");
   Jets_cut_CSV__5933->GetYaxis()->SetLabelFont(42);
   Jets_cut_CSV__5933->GetYaxis()->SetLabelSize(0.05);
   Jets_cut_CSV__5933->GetYaxis()->SetTitleSize(0.057);
   Jets_cut_CSV__5933->GetYaxis()->SetTitleOffset(1.2);
   Jets_cut_CSV__5933->GetYaxis()->SetTitleFont(42);
   Jets_cut_CSV__5933->GetZaxis()->SetLabelFont(42);
   Jets_cut_CSV__5933->GetZaxis()->SetTitleOffset(1);
   Jets_cut_CSV__5933->GetZaxis()->SetTitleFont(42);
   Jets_cut_CSV__5933->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CSV_WW_DHZfirst_17->Modified();
   CSV_WW_DHZfirst_17->cd();
   CSV_WW_DHZfirst_17->SetSelected(CSV_WW_DHZfirst_17);
}
