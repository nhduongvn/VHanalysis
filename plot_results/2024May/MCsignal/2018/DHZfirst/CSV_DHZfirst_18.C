#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CSV_DHZfirst_18()
{
//=========Macro generated from canvas: CSV_DHZfirst_18/CSV_DHZfirst_18
//=========  (Thu May 23 13:53:23 2024) by ROOT version 6.28/10
   TCanvas *CSV_DHZfirst_18 = new TCanvas("CSV_DHZfirst_18", "CSV_DHZfirst_18",0,0,600,600);
   gStyle->SetOptStat(0);
   CSV_DHZfirst_18->SetHighLightColor(2);
   CSV_DHZfirst_18->Range(-0.2,-181.9865,1.133333,1637.878);
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
   Jets_cut_CSV__174->SetBinContent(1,1386.563);
   Jets_cut_CSV__174->SetBinContent(2,220.3218);
   Jets_cut_CSV__174->SetBinContent(3,107.6786);
   Jets_cut_CSV__174->SetBinContent(4,71.66618);
   Jets_cut_CSV__174->SetBinContent(5,52.8401);
   Jets_cut_CSV__174->SetBinContent(6,42.04286);
   Jets_cut_CSV__174->SetBinContent(7,34.19225);
   Jets_cut_CSV__174->SetBinContent(8,27.51694);
   Jets_cut_CSV__174->SetBinContent(9,22.77899);
   Jets_cut_CSV__174->SetBinContent(10,19.51168);
   Jets_cut_CSV__174->SetBinContent(11,18.28163);
   Jets_cut_CSV__174->SetBinContent(12,16.02993);
   Jets_cut_CSV__174->SetBinContent(13,13.975);
   Jets_cut_CSV__174->SetBinContent(14,12.87221);
   Jets_cut_CSV__174->SetBinContent(15,12.23216);
   Jets_cut_CSV__174->SetBinContent(16,12.13261);
   Jets_cut_CSV__174->SetBinContent(17,11.90262);
   Jets_cut_CSV__174->SetBinContent(18,11.69668);
   Jets_cut_CSV__174->SetBinContent(19,15.97597);
   Jets_cut_CSV__174->SetBinContent(20,87.344);
   Jets_cut_CSV__174->SetBinError(1,2.058234);
   Jets_cut_CSV__174->SetBinError(2,0.8118487);
   Jets_cut_CSV__174->SetBinError(3,0.5570453);
   Jets_cut_CSV__174->SetBinError(4,0.4514297);
   Jets_cut_CSV__174->SetBinError(5,0.3849807);
   Jets_cut_CSV__174->SetBinError(6,0.342873);
   Jets_cut_CSV__174->SetBinError(7,0.3122688);
   Jets_cut_CSV__174->SetBinError(8,0.2792085);
   Jets_cut_CSV__174->SetBinError(9,0.2684967);
   Jets_cut_CSV__174->SetBinError(10,0.2282542);
   Jets_cut_CSV__174->SetBinError(11,0.239953);
   Jets_cut_CSV__174->SetBinError(12,0.2122379);
   Jets_cut_CSV__174->SetBinError(13,0.202097);
   Jets_cut_CSV__174->SetBinError(14,0.1830345);
   Jets_cut_CSV__174->SetBinError(15,0.1782382);
   Jets_cut_CSV__174->SetBinError(16,0.1757371);
   Jets_cut_CSV__174->SetBinError(17,0.1845331);
   Jets_cut_CSV__174->SetBinError(18,0.1773013);
   Jets_cut_CSV__174->SetBinError(19,0.2056671);
   Jets_cut_CSV__174->SetBinError(20,0.5111079);
   Jets_cut_CSV__174->SetEntries(1024254);

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
