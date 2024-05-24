#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CSV_WZ_tagFirst_18()
{
//=========Macro generated from canvas: CSV_WZ_tagFirst_18/CSV_WZ_tagFirst_18
//=========  (Fri May 24 12:43:13 2024) by ROOT version 6.28/10
   TCanvas *CSV_WZ_tagFirst_18 = new TCanvas("CSV_WZ_tagFirst_18", "CSV_WZ_tagFirst_18",0,0,600,600);
   gStyle->SetOptStat(0);
   CSV_WZ_tagFirst_18->SetHighLightColor(2);
   CSV_WZ_tagFirst_18->Range(-0.2,-288368.8,1.133333,2595319);
   CSV_WZ_tagFirst_18->SetFillColor(0);
   CSV_WZ_tagFirst_18->SetFillStyle(4000);
   CSV_WZ_tagFirst_18->SetBorderMode(0);
   CSV_WZ_tagFirst_18->SetBorderSize(2);
   CSV_WZ_tagFirst_18->SetLeftMargin(0.15);
   CSV_WZ_tagFirst_18->SetFrameFillStyle(1000);
   CSV_WZ_tagFirst_18->SetFrameBorderMode(0);
   CSV_WZ_tagFirst_18->SetFrameFillStyle(1000);
   CSV_WZ_tagFirst_18->SetFrameBorderMode(0);
   
   TH1D *Jets_cut_CSV__4377 = new TH1D("Jets_cut_CSV__4377","",20,0,1);
   Jets_cut_CSV__4377->SetBinContent(1,2197096);
   Jets_cut_CSV__4377->SetBinContent(2,199099.9);
   Jets_cut_CSV__4377->SetBinContent(3,84855.78);
   Jets_cut_CSV__4377->SetBinContent(4,51074.43);
   Jets_cut_CSV__4377->SetBinContent(5,35664.66);
   Jets_cut_CSV__4377->SetBinContent(6,28331.59);
   Jets_cut_CSV__4377->SetBinContent(7,23534.48);
   Jets_cut_CSV__4377->SetBinContent(8,19021.32);
   Jets_cut_CSV__4377->SetBinContent(9,15394.4);
   Jets_cut_CSV__4377->SetBinContent(10,13397.28);
   Jets_cut_CSV__4377->SetBinContent(11,12029.78);
   Jets_cut_CSV__4377->SetBinContent(12,10906.53);
   Jets_cut_CSV__4377->SetBinContent(13,9590.143);
   Jets_cut_CSV__4377->SetBinContent(14,9330.736);
   Jets_cut_CSV__4377->SetBinContent(15,9129.118);
   Jets_cut_CSV__4377->SetBinContent(16,9782.289);
   Jets_cut_CSV__4377->SetBinContent(17,10087.49);
   Jets_cut_CSV__4377->SetBinContent(18,11371.53);
   Jets_cut_CSV__4377->SetBinContent(19,16464.92);
   Jets_cut_CSV__4377->SetBinContent(20,107315.7);
   Jets_cut_CSV__4377->SetBinError(1,1086.168);
   Jets_cut_CSV__4377->SetBinError(2,349.4605);
   Jets_cut_CSV__4377->SetBinError(3,221.026);
   Jets_cut_CSV__4377->SetBinError(4,168.8001);
   Jets_cut_CSV__4377->SetBinError(5,146.5028);
   Jets_cut_CSV__4377->SetBinError(6,128.287);
   Jets_cut_CSV__4377->SetBinError(7,121.4853);
   Jets_cut_CSV__4377->SetBinError(8,108.1231);
   Jets_cut_CSV__4377->SetBinError(9,102.4934);
   Jets_cut_CSV__4377->SetBinError(10,89.25222);
   Jets_cut_CSV__4377->SetBinError(11,87.76282);
   Jets_cut_CSV__4377->SetBinError(12,74.44863);
   Jets_cut_CSV__4377->SetBinError(13,71.34299);
   Jets_cut_CSV__4377->SetBinError(14,73.75824);
   Jets_cut_CSV__4377->SetBinError(15,67.57161);
   Jets_cut_CSV__4377->SetBinError(16,71.75819);
   Jets_cut_CSV__4377->SetBinError(17,73.15319);
   Jets_cut_CSV__4377->SetBinError(18,79.13387);
   Jets_cut_CSV__4377->SetBinError(19,92.44279);
   Jets_cut_CSV__4377->SetBinError(20,235.0266);
   Jets_cut_CSV__4377->SetEntries(7874549);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jets_cut_CSV__4377->SetLineColor(ci);
   Jets_cut_CSV__4377->GetXaxis()->SetTitle("BvL tagging score");
   Jets_cut_CSV__4377->GetXaxis()->SetRange(1,20);
   Jets_cut_CSV__4377->GetXaxis()->SetLabelFont(42);
   Jets_cut_CSV__4377->GetXaxis()->SetTitleOffset(1);
   Jets_cut_CSV__4377->GetXaxis()->SetTitleFont(42);
   Jets_cut_CSV__4377->GetYaxis()->SetTitle("Events/0.05");
   Jets_cut_CSV__4377->GetYaxis()->SetLabelFont(42);
   Jets_cut_CSV__4377->GetYaxis()->SetLabelSize(0.05);
   Jets_cut_CSV__4377->GetYaxis()->SetTitleSize(0.057);
   Jets_cut_CSV__4377->GetYaxis()->SetTitleOffset(1.2);
   Jets_cut_CSV__4377->GetYaxis()->SetTitleFont(42);
   Jets_cut_CSV__4377->GetZaxis()->SetLabelFont(42);
   Jets_cut_CSV__4377->GetZaxis()->SetTitleOffset(1);
   Jets_cut_CSV__4377->GetZaxis()->SetTitleFont(42);
   Jets_cut_CSV__4377->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CSV_WZ_tagFirst_18->Modified();
   CSV_WZ_tagFirst_18->cd();
   CSV_WZ_tagFirst_18->SetSelected(CSV_WZ_tagFirst_18);
}
