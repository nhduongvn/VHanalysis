#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CSV_WJets_tagOnly_17()
{
//=========Macro generated from canvas: CSV_WJets_tagOnly_17/CSV_WJets_tagOnly_17
//=========  (Fri May 24 12:43:29 2024) by ROOT version 6.28/10
   TCanvas *CSV_WJets_tagOnly_17 = new TCanvas("CSV_WJets_tagOnly_17", "CSV_WJets_tagOnly_17",0,0,600,600);
   gStyle->SetOptStat(0);
   CSV_WJets_tagOnly_17->SetHighLightColor(2);
   CSV_WJets_tagOnly_17->Range(-0.2,-2.862598e+07,1.133333,2.576338e+08);
   CSV_WJets_tagOnly_17->SetFillColor(0);
   CSV_WJets_tagOnly_17->SetFillStyle(4000);
   CSV_WJets_tagOnly_17->SetBorderMode(0);
   CSV_WJets_tagOnly_17->SetBorderSize(2);
   CSV_WJets_tagOnly_17->SetLeftMargin(0.15);
   CSV_WJets_tagOnly_17->SetFrameFillStyle(1000);
   CSV_WJets_tagOnly_17->SetFrameBorderMode(0);
   CSV_WJets_tagOnly_17->SetFrameFillStyle(1000);
   CSV_WJets_tagOnly_17->SetFrameBorderMode(0);
   
   TH1D *Jets_cut_CSV__5141 = new TH1D("Jets_cut_CSV__5141","",20,0,1);
   Jets_cut_CSV__5141->SetBinContent(1,2.181027e+08);
   Jets_cut_CSV__5141->SetBinContent(2,1.721739e+07);
   Jets_cut_CSV__5141->SetBinContent(3,7060680);
   Jets_cut_CSV__5141->SetBinContent(4,4118716);
   Jets_cut_CSV__5141->SetBinContent(5,2788749);
   Jets_cut_CSV__5141->SetBinContent(6,2065838);
   Jets_cut_CSV__5141->SetBinContent(7,1621455);
   Jets_cut_CSV__5141->SetBinContent(8,1277302);
   Jets_cut_CSV__5141->SetBinContent(9,1003340);
   Jets_cut_CSV__5141->SetBinContent(10,844013.7);
   Jets_cut_CSV__5141->SetBinContent(11,726677.2);
   Jets_cut_CSV__5141->SetBinContent(12,617031.2);
   Jets_cut_CSV__5141->SetBinContent(13,517181);
   Jets_cut_CSV__5141->SetBinContent(14,464495.2);
   Jets_cut_CSV__5141->SetBinContent(15,416883.5);
   Jets_cut_CSV__5141->SetBinContent(16,391521.4);
   Jets_cut_CSV__5141->SetBinContent(17,356029.5);
   Jets_cut_CSV__5141->SetBinContent(18,337640.7);
   Jets_cut_CSV__5141->SetBinContent(19,389884.8);
   Jets_cut_CSV__5141->SetBinContent(20,1559446);
   Jets_cut_CSV__5141->SetBinError(1,27158.7);
   Jets_cut_CSV__5141->SetBinError(2,7724.477);
   Jets_cut_CSV__5141->SetBinError(3,4942.666);
   Jets_cut_CSV__5141->SetBinError(4,3777.53);
   Jets_cut_CSV__5141->SetBinError(5,3105.767);
   Jets_cut_CSV__5141->SetBinError(6,2676.703);
   Jets_cut_CSV__5141->SetBinError(7,2410.161);
   Jets_cut_CSV__5141->SetBinError(8,2128.565);
   Jets_cut_CSV__5141->SetBinError(9,1873.559);
   Jets_cut_CSV__5141->SetBinError(10,1707.731);
   Jets_cut_CSV__5141->SetBinError(11,1570.608);
   Jets_cut_CSV__5141->SetBinError(12,1438.607);
   Jets_cut_CSV__5141->SetBinError(13,1313.045);
   Jets_cut_CSV__5141->SetBinError(14,1250.648);
   Jets_cut_CSV__5141->SetBinError(15,1180.656);
   Jets_cut_CSV__5141->SetBinError(16,1136.826);
   Jets_cut_CSV__5141->SetBinError(17,1079.805);
   Jets_cut_CSV__5141->SetBinError(18,1037.238);
   Jets_cut_CSV__5141->SetBinError(19,1099.972);
   Jets_cut_CSV__5141->SetBinError(20,2153.456);
   Jets_cut_CSV__5141->SetEntries(3.578415e+08);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jets_cut_CSV__5141->SetLineColor(ci);
   Jets_cut_CSV__5141->GetXaxis()->SetTitle("BvL tagging score");
   Jets_cut_CSV__5141->GetXaxis()->SetRange(1,20);
   Jets_cut_CSV__5141->GetXaxis()->SetLabelFont(42);
   Jets_cut_CSV__5141->GetXaxis()->SetTitleOffset(1);
   Jets_cut_CSV__5141->GetXaxis()->SetTitleFont(42);
   Jets_cut_CSV__5141->GetYaxis()->SetTitle("Events/0.05");
   Jets_cut_CSV__5141->GetYaxis()->SetLabelFont(42);
   Jets_cut_CSV__5141->GetYaxis()->SetLabelSize(0.05);
   Jets_cut_CSV__5141->GetYaxis()->SetTitleSize(0.057);
   Jets_cut_CSV__5141->GetYaxis()->SetTitleOffset(1.2);
   Jets_cut_CSV__5141->GetYaxis()->SetTitleFont(42);
   Jets_cut_CSV__5141->GetZaxis()->SetLabelFont(42);
   Jets_cut_CSV__5141->GetZaxis()->SetTitleOffset(1);
   Jets_cut_CSV__5141->GetZaxis()->SetTitleFont(42);
   Jets_cut_CSV__5141->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CSV_WJets_tagOnly_17->Modified();
   CSV_WJets_tagOnly_17->cd();
   CSV_WJets_tagOnly_17->SetSelected(CSV_WJets_tagOnly_17);
}
