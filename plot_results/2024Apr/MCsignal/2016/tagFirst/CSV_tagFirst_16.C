#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CSV_tagFirst_16()
{
//=========Macro generated from canvas: CSV_tagFirst_16/CSV_tagFirst_16
//=========  (Mon Apr  8 11:27:53 2024) by ROOT version 6.28/10
   TCanvas *CSV_tagFirst_16 = new TCanvas("CSV_tagFirst_16", "CSV_tagFirst_16",0,0,600,600);
   gStyle->SetOptStat(0);
   CSV_tagFirst_16->SetHighLightColor(2);
   CSV_tagFirst_16->Range(-0.2,-122.7413,1.133333,1104.672);
   CSV_tagFirst_16->SetFillColor(0);
   CSV_tagFirst_16->SetFillStyle(4000);
   CSV_tagFirst_16->SetBorderMode(0);
   CSV_tagFirst_16->SetBorderSize(2);
   CSV_tagFirst_16->SetLeftMargin(0.15);
   CSV_tagFirst_16->SetFrameFillStyle(1000);
   CSV_tagFirst_16->SetFrameBorderMode(0);
   CSV_tagFirst_16->SetFrameFillStyle(1000);
   CSV_tagFirst_16->SetFrameBorderMode(0);
   
   TH1D *Jets_cut_CSV__220 = new TH1D("Jets_cut_CSV__220","",20,0,1);
   Jets_cut_CSV__220->SetBinContent(1,935.172);
   Jets_cut_CSV__220->SetBinContent(2,148.1171);
   Jets_cut_CSV__220->SetBinContent(3,73.37936);
   Jets_cut_CSV__220->SetBinContent(4,49.17616);
   Jets_cut_CSV__220->SetBinContent(5,35.79359);
   Jets_cut_CSV__220->SetBinContent(6,28.04294);
   Jets_cut_CSV__220->SetBinContent(7,21.7866);
   Jets_cut_CSV__220->SetBinContent(8,17.77257);
   Jets_cut_CSV__220->SetBinContent(9,14.92063);
   Jets_cut_CSV__220->SetBinContent(10,13.64294);
   Jets_cut_CSV__220->SetBinContent(11,11.87269);
   Jets_cut_CSV__220->SetBinContent(12,10.91894);
   Jets_cut_CSV__220->SetBinContent(13,9.414284);
   Jets_cut_CSV__220->SetBinContent(14,7.786555);
   Jets_cut_CSV__220->SetBinContent(15,7.770712);
   Jets_cut_CSV__220->SetBinContent(16,7.728897);
   Jets_cut_CSV__220->SetBinContent(17,7.095822);
   Jets_cut_CSV__220->SetBinContent(18,7.846061);
   Jets_cut_CSV__220->SetBinContent(19,10.09748);
   Jets_cut_CSV__220->SetBinContent(20,51.08902);
   Jets_cut_CSV__220->SetBinError(1,2.520497);
   Jets_cut_CSV__220->SetBinError(2,1.027222);
   Jets_cut_CSV__220->SetBinError(3,0.7353552);
   Jets_cut_CSV__220->SetBinError(4,0.6092276);
   Jets_cut_CSV__220->SetBinError(5,0.5198889);
   Jets_cut_CSV__220->SetBinError(6,0.4543431);
   Jets_cut_CSV__220->SetBinError(7,0.398689);
   Jets_cut_CSV__220->SetBinError(8,0.3557266);
   Jets_cut_CSV__220->SetBinError(9,0.3247756);
   Jets_cut_CSV__220->SetBinError(10,0.3161364);
   Jets_cut_CSV__220->SetBinError(11,0.2907432);
   Jets_cut_CSV__220->SetBinError(12,0.2826646);
   Jets_cut_CSV__220->SetBinError(13,0.2635399);
   Jets_cut_CSV__220->SetBinError(14,0.2320389);
   Jets_cut_CSV__220->SetBinError(15,0.2370655);
   Jets_cut_CSV__220->SetBinError(16,0.2376855);
   Jets_cut_CSV__220->SetBinError(17,0.2179231);
   Jets_cut_CSV__220->SetBinError(18,0.2356225);
   Jets_cut_CSV__220->SetBinError(19,0.2670473);
   Jets_cut_CSV__220->SetBinError(20,0.6048506);
   Jets_cut_CSV__220->SetEntries(509664);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jets_cut_CSV__220->SetLineColor(ci);
   Jets_cut_CSV__220->GetXaxis()->SetTitle("BvL tagging score");
   Jets_cut_CSV__220->GetXaxis()->SetRange(1,20);
   Jets_cut_CSV__220->GetXaxis()->SetLabelFont(42);
   Jets_cut_CSV__220->GetXaxis()->SetTitleOffset(1);
   Jets_cut_CSV__220->GetXaxis()->SetTitleFont(42);
   Jets_cut_CSV__220->GetYaxis()->SetTitle("Events/0.05");
   Jets_cut_CSV__220->GetYaxis()->SetLabelFont(42);
   Jets_cut_CSV__220->GetYaxis()->SetLabelSize(0.05);
   Jets_cut_CSV__220->GetYaxis()->SetTitleSize(0.057);
   Jets_cut_CSV__220->GetYaxis()->SetTitleOffset(1.2);
   Jets_cut_CSV__220->GetYaxis()->SetTitleFont(42);
   Jets_cut_CSV__220->GetZaxis()->SetLabelFont(42);
   Jets_cut_CSV__220->GetZaxis()->SetTitleOffset(1);
   Jets_cut_CSV__220->GetZaxis()->SetTitleFont(42);
   Jets_cut_CSV__220->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CSV_tagFirst_16->Modified();
   CSV_tagFirst_16->cd();
   CSV_tagFirst_16->SetSelected(CSV_tagFirst_16);
}
