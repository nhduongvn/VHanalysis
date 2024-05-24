#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CSV_WJets_DHZfirst_2b1c_16()
{
//=========Macro generated from canvas: CSV_WJets_DHZfirst_2b1c_16/CSV_WJets_DHZfirst_2b1c_16
//=========  (Fri May 24 12:44:34 2024) by ROOT version 6.28/10
   TCanvas *CSV_WJets_DHZfirst_2b1c_16 = new TCanvas("CSV_WJets_DHZfirst_2b1c_16", "CSV_WJets_DHZfirst_2b1c_16",0,0,600,600);
   gStyle->SetOptStat(0);
   CSV_WJets_DHZfirst_2b1c_16->SetHighLightColor(2);
   CSV_WJets_DHZfirst_2b1c_16->Range(-0.2,-3.847336e+07,1.133333,3.462602e+08);
   CSV_WJets_DHZfirst_2b1c_16->SetFillColor(0);
   CSV_WJets_DHZfirst_2b1c_16->SetFillStyle(4000);
   CSV_WJets_DHZfirst_2b1c_16->SetBorderMode(0);
   CSV_WJets_DHZfirst_2b1c_16->SetBorderSize(2);
   CSV_WJets_DHZfirst_2b1c_16->SetLeftMargin(0.15);
   CSV_WJets_DHZfirst_2b1c_16->SetFrameFillStyle(1000);
   CSV_WJets_DHZfirst_2b1c_16->SetFrameBorderMode(0);
   CSV_WJets_DHZfirst_2b1c_16->SetFrameFillStyle(1000);
   CSV_WJets_DHZfirst_2b1c_16->SetFrameBorderMode(0);
   
   TH1D *Jets_cut_CSV__8260 = new TH1D("Jets_cut_CSV__8260","",20,0,1);
   Jets_cut_CSV__8260->SetBinContent(1,2.931303e+08);
   Jets_cut_CSV__8260->SetBinContent(2,2.322006e+07);
   Jets_cut_CSV__8260->SetBinContent(3,8985468);
   Jets_cut_CSV__8260->SetBinContent(4,4960704);
   Jets_cut_CSV__8260->SetBinContent(5,3269045);
   Jets_cut_CSV__8260->SetBinContent(6,2345499);
   Jets_cut_CSV__8260->SetBinContent(7,1781933);
   Jets_cut_CSV__8260->SetBinContent(8,1377050);
   Jets_cut_CSV__8260->SetBinContent(9,1081570);
   Jets_cut_CSV__8260->SetBinContent(10,901986);
   Jets_cut_CSV__8260->SetBinContent(11,766333.5);
   Jets_cut_CSV__8260->SetBinContent(12,652093.8);
   Jets_cut_CSV__8260->SetBinContent(13,550625.3);
   Jets_cut_CSV__8260->SetBinContent(14,486542.3);
   Jets_cut_CSV__8260->SetBinContent(15,434369.4);
   Jets_cut_CSV__8260->SetBinContent(16,409268);
   Jets_cut_CSV__8260->SetBinContent(17,375546.8);
   Jets_cut_CSV__8260->SetBinContent(18,364713.5);
   Jets_cut_CSV__8260->SetBinContent(19,433804.3);
   Jets_cut_CSV__8260->SetBinContent(20,1633603);
   Jets_cut_CSV__8260->SetBinError(1,49452.69);
   Jets_cut_CSV__8260->SetBinError(2,14222.4);
   Jets_cut_CSV__8260->SetBinError(3,8871.412);
   Jets_cut_CSV__8260->SetBinError(4,6581.881);
   Jets_cut_CSV__8260->SetBinError(5,5362.069);
   Jets_cut_CSV__8260->SetBinError(6,4548.849);
   Jets_cut_CSV__8260->SetBinError(7,3972.733);
   Jets_cut_CSV__8260->SetBinError(8,3476.049);
   Jets_cut_CSV__8260->SetBinError(9,3054.718);
   Jets_cut_CSV__8260->SetBinError(10,2794.118);
   Jets_cut_CSV__8260->SetBinError(11,2558.298);
   Jets_cut_CSV__8260->SetBinError(12,2366.797);
   Jets_cut_CSV__8260->SetBinError(13,2176.991);
   Jets_cut_CSV__8260->SetBinError(14,2030.168);
   Jets_cut_CSV__8260->SetBinError(15,1922.011);
   Jets_cut_CSV__8260->SetBinError(16,1847.488);
   Jets_cut_CSV__8260->SetBinError(17,1758.959);
   Jets_cut_CSV__8260->SetBinError(18,1708.848);
   Jets_cut_CSV__8260->SetBinError(19,1850.037);
   Jets_cut_CSV__8260->SetBinError(20,3490.552);
   Jets_cut_CSV__8260->SetEntries(3.499471e+08);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jets_cut_CSV__8260->SetLineColor(ci);
   Jets_cut_CSV__8260->GetXaxis()->SetTitle("BvL tagging score");
   Jets_cut_CSV__8260->GetXaxis()->SetRange(1,20);
   Jets_cut_CSV__8260->GetXaxis()->SetLabelFont(42);
   Jets_cut_CSV__8260->GetXaxis()->SetTitleOffset(1);
   Jets_cut_CSV__8260->GetXaxis()->SetTitleFont(42);
   Jets_cut_CSV__8260->GetYaxis()->SetTitle("Events/0.05");
   Jets_cut_CSV__8260->GetYaxis()->SetLabelFont(42);
   Jets_cut_CSV__8260->GetYaxis()->SetLabelSize(0.05);
   Jets_cut_CSV__8260->GetYaxis()->SetTitleSize(0.057);
   Jets_cut_CSV__8260->GetYaxis()->SetTitleOffset(1.2);
   Jets_cut_CSV__8260->GetYaxis()->SetTitleFont(42);
   Jets_cut_CSV__8260->GetZaxis()->SetLabelFont(42);
   Jets_cut_CSV__8260->GetZaxis()->SetTitleOffset(1);
   Jets_cut_CSV__8260->GetZaxis()->SetTitleFont(42);
   Jets_cut_CSV__8260->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CSV_WJets_DHZfirst_2b1c_16->Modified();
   CSV_WJets_DHZfirst_2b1c_16->cd();
   CSV_WJets_DHZfirst_2b1c_16->SetSelected(CSV_WJets_DHZfirst_2b1c_16);
}
