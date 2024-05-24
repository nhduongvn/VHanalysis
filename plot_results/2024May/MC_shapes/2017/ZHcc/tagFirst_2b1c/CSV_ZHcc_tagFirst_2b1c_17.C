#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CSV_ZHcc_tagFirst_2b1c_17()
{
//=========Macro generated from canvas: CSV_ZHcc_tagFirst_2b1c_17/CSV_ZHcc_tagFirst_2b1c_17
//=========  (Fri May 24 12:44:00 2024) by ROOT version 6.28/10
   TCanvas *CSV_ZHcc_tagFirst_2b1c_17 = new TCanvas("CSV_ZHcc_tagFirst_2b1c_17", "CSV_ZHcc_tagFirst_2b1c_17",0,0,600,600);
   gStyle->SetOptStat(0);
   CSV_ZHcc_tagFirst_2b1c_17->SetHighLightColor(2);
   CSV_ZHcc_tagFirst_2b1c_17->Range(-0.2,-114.0311,1.133333,1026.279);
   CSV_ZHcc_tagFirst_2b1c_17->SetFillColor(0);
   CSV_ZHcc_tagFirst_2b1c_17->SetFillStyle(4000);
   CSV_ZHcc_tagFirst_2b1c_17->SetBorderMode(0);
   CSV_ZHcc_tagFirst_2b1c_17->SetBorderSize(2);
   CSV_ZHcc_tagFirst_2b1c_17->SetLeftMargin(0.15);
   CSV_ZHcc_tagFirst_2b1c_17->SetFrameFillStyle(1000);
   CSV_ZHcc_tagFirst_2b1c_17->SetFrameBorderMode(0);
   CSV_ZHcc_tagFirst_2b1c_17->SetFrameFillStyle(1000);
   CSV_ZHcc_tagFirst_2b1c_17->SetFrameBorderMode(0);
   
   TH1D *Jets_cut_CSV__6692 = new TH1D("Jets_cut_CSV__6692","",20,0,1);
   Jets_cut_CSV__6692->SetBinContent(1,868.808);
   Jets_cut_CSV__6692->SetBinContent(2,141.2185);
   Jets_cut_CSV__6692->SetBinContent(3,71.73995);
   Jets_cut_CSV__6692->SetBinContent(4,48.15406);
   Jets_cut_CSV__6692->SetBinContent(5,35.90213);
   Jets_cut_CSV__6692->SetBinContent(6,28.72491);
   Jets_cut_CSV__6692->SetBinContent(7,21.75128);
   Jets_cut_CSV__6692->SetBinContent(8,17.88874);
   Jets_cut_CSV__6692->SetBinContent(9,14.6297);
   Jets_cut_CSV__6692->SetBinContent(10,12.84129);
   Jets_cut_CSV__6692->SetBinContent(11,11.82375);
   Jets_cut_CSV__6692->SetBinContent(12,10.42762);
   Jets_cut_CSV__6692->SetBinContent(13,8.955304);
   Jets_cut_CSV__6692->SetBinContent(14,8.72074);
   Jets_cut_CSV__6692->SetBinContent(15,8.064102);
   Jets_cut_CSV__6692->SetBinContent(16,8.191329);
   Jets_cut_CSV__6692->SetBinContent(17,7.91931);
   Jets_cut_CSV__6692->SetBinContent(18,8.193717);
   Jets_cut_CSV__6692->SetBinContent(19,10.66621);
   Jets_cut_CSV__6692->SetBinContent(20,59.78359);
   Jets_cut_CSV__6692->SetBinError(1,0.9661921);
   Jets_cut_CSV__6692->SetBinError(2,0.3950639);
   Jets_cut_CSV__6692->SetBinError(3,0.2833607);
   Jets_cut_CSV__6692->SetBinError(4,0.232104);
   Jets_cut_CSV__6692->SetBinError(5,0.2012745);
   Jets_cut_CSV__6692->SetBinError(6,0.1807597);
   Jets_cut_CSV__6692->SetBinError(7,0.1510687);
   Jets_cut_CSV__6692->SetBinError(8,0.1365726);
   Jets_cut_CSV__6692->SetBinError(9,0.1234876);
   Jets_cut_CSV__6692->SetBinError(10,0.1152924);
   Jets_cut_CSV__6692->SetBinError(11,0.1106226);
   Jets_cut_CSV__6692->SetBinError(12,0.1040768);
   Jets_cut_CSV__6692->SetBinError(13,0.09667776);
   Jets_cut_CSV__6692->SetBinError(14,0.09747411);
   Jets_cut_CSV__6692->SetBinError(15,0.09348718);
   Jets_cut_CSV__6692->SetBinError(16,0.09481838);
   Jets_cut_CSV__6692->SetBinError(17,0.09355192);
   Jets_cut_CSV__6692->SetBinError(18,0.09549406);
   Jets_cut_CSV__6692->SetBinError(19,0.1088808);
   Jets_cut_CSV__6692->SetBinError(20,0.2610035);
   Jets_cut_CSV__6692->SetEntries(2592716);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jets_cut_CSV__6692->SetLineColor(ci);
   Jets_cut_CSV__6692->GetXaxis()->SetTitle("BvL tagging score");
   Jets_cut_CSV__6692->GetXaxis()->SetRange(1,20);
   Jets_cut_CSV__6692->GetXaxis()->SetLabelFont(42);
   Jets_cut_CSV__6692->GetXaxis()->SetTitleOffset(1);
   Jets_cut_CSV__6692->GetXaxis()->SetTitleFont(42);
   Jets_cut_CSV__6692->GetYaxis()->SetTitle("Events/0.05");
   Jets_cut_CSV__6692->GetYaxis()->SetLabelFont(42);
   Jets_cut_CSV__6692->GetYaxis()->SetLabelSize(0.05);
   Jets_cut_CSV__6692->GetYaxis()->SetTitleSize(0.057);
   Jets_cut_CSV__6692->GetYaxis()->SetTitleOffset(1.2);
   Jets_cut_CSV__6692->GetYaxis()->SetTitleFont(42);
   Jets_cut_CSV__6692->GetZaxis()->SetLabelFont(42);
   Jets_cut_CSV__6692->GetZaxis()->SetTitleOffset(1);
   Jets_cut_CSV__6692->GetZaxis()->SetTitleFont(42);
   Jets_cut_CSV__6692->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CSV_ZHcc_tagFirst_2b1c_17->Modified();
   CSV_ZHcc_tagFirst_2b1c_17->cd();
   CSV_ZHcc_tagFirst_2b1c_17->SetSelected(CSV_ZHcc_tagFirst_2b1c_17);
}
