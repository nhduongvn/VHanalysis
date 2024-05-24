#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CSV_ZJets_DHZfirst_2b1c_18()
{
//=========Macro generated from canvas: CSV_ZJets_DHZfirst_2b1c_18/CSV_ZJets_DHZfirst_2b1c_18
//=========  (Fri May 24 12:44:34 2024) by ROOT version 6.28/10
   TCanvas *CSV_ZJets_DHZfirst_2b1c_18 = new TCanvas("CSV_ZJets_DHZfirst_2b1c_18", "CSV_ZJets_DHZfirst_2b1c_18",0,0,600,600);
   gStyle->SetOptStat(0);
   CSV_ZJets_DHZfirst_2b1c_18->SetHighLightColor(2);
   CSV_ZJets_DHZfirst_2b1c_18->Range(-0.2,-1.463586e+07,1.133333,1.317227e+08);
   CSV_ZJets_DHZfirst_2b1c_18->SetFillColor(0);
   CSV_ZJets_DHZfirst_2b1c_18->SetFillStyle(4000);
   CSV_ZJets_DHZfirst_2b1c_18->SetBorderMode(0);
   CSV_ZJets_DHZfirst_2b1c_18->SetBorderSize(2);
   CSV_ZJets_DHZfirst_2b1c_18->SetLeftMargin(0.15);
   CSV_ZJets_DHZfirst_2b1c_18->SetFrameFillStyle(1000);
   CSV_ZJets_DHZfirst_2b1c_18->SetFrameBorderMode(0);
   CSV_ZJets_DHZfirst_2b1c_18->SetFrameFillStyle(1000);
   CSV_ZJets_DHZfirst_2b1c_18->SetFrameBorderMode(0);
   
   TH1D *Jets_cut_CSV__8265 = new TH1D("Jets_cut_CSV__8265","",20,0,1);
   Jets_cut_CSV__8265->SetBinContent(1,1.115113e+08);
   Jets_cut_CSV__8265->SetBinContent(2,8770050);
   Jets_cut_CSV__8265->SetBinContent(3,3570082);
   Jets_cut_CSV__8265->SetBinContent(4,2108769);
   Jets_cut_CSV__8265->SetBinContent(5,1468609);
   Jets_cut_CSV__8265->SetBinContent(6,1175832);
   Jets_cut_CSV__8265->SetBinContent(7,986214.2);
   Jets_cut_CSV__8265->SetBinContent(8,813094.1);
   Jets_cut_CSV__8265->SetBinContent(9,680468.2);
   Jets_cut_CSV__8265->SetBinContent(10,607286.9);
   Jets_cut_CSV__8265->SetBinContent(11,563527.9);
   Jets_cut_CSV__8265->SetBinContent(12,528750.4);
   Jets_cut_CSV__8265->SetBinContent(13,489486.1);
   Jets_cut_CSV__8265->SetBinContent(14,494266.7);
   Jets_cut_CSV__8265->SetBinContent(15,509451);
   Jets_cut_CSV__8265->SetBinContent(16,562822.3);
   Jets_cut_CSV__8265->SetBinContent(17,613000);
   Jets_cut_CSV__8265->SetBinContent(18,715988.2);
   Jets_cut_CSV__8265->SetBinContent(19,1077528);
   Jets_cut_CSV__8265->SetBinContent(20,7325900);
   Jets_cut_CSV__8265->SetBinError(1,20493.82);
   Jets_cut_CSV__8265->SetBinError(2,6085.427);
   Jets_cut_CSV__8265->SetBinError(3,3826.474);
   Jets_cut_CSV__8265->SetBinError(4,2893.239);
   Jets_cut_CSV__8265->SetBinError(5,2380.53);
   Jets_cut_CSV__8265->SetBinError(6,2223.853);
   Jets_cut_CSV__8265->SetBinError(7,2107.881);
   Jets_cut_CSV__8265->SetBinError(8,1863.162);
   Jets_cut_CSV__8265->SetBinError(9,1646.578);
   Jets_cut_CSV__8265->SetBinError(10,1556.408);
   Jets_cut_CSV__8265->SetBinError(11,1472.706);
   Jets_cut_CSV__8265->SetBinError(12,1393.144);
   Jets_cut_CSV__8265->SetBinError(13,1438.626);
   Jets_cut_CSV__8265->SetBinError(14,1343.908);
   Jets_cut_CSV__8265->SetBinError(15,1387.4);
   Jets_cut_CSV__8265->SetBinError(16,1432.185);
   Jets_cut_CSV__8265->SetBinError(17,1474.276);
   Jets_cut_CSV__8265->SetBinError(18,1601.215);
   Jets_cut_CSV__8265->SetBinError(19,1966.332);
   Jets_cut_CSV__8265->SetBinError(20,5207.778);
   Jets_cut_CSV__8265->SetEntries(1.507272e+08);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jets_cut_CSV__8265->SetLineColor(ci);
   Jets_cut_CSV__8265->GetXaxis()->SetTitle("BvL tagging score");
   Jets_cut_CSV__8265->GetXaxis()->SetRange(1,20);
   Jets_cut_CSV__8265->GetXaxis()->SetLabelFont(42);
   Jets_cut_CSV__8265->GetXaxis()->SetTitleOffset(1);
   Jets_cut_CSV__8265->GetXaxis()->SetTitleFont(42);
   Jets_cut_CSV__8265->GetYaxis()->SetTitle("Events/0.05");
   Jets_cut_CSV__8265->GetYaxis()->SetLabelFont(42);
   Jets_cut_CSV__8265->GetYaxis()->SetLabelSize(0.05);
   Jets_cut_CSV__8265->GetYaxis()->SetTitleSize(0.057);
   Jets_cut_CSV__8265->GetYaxis()->SetTitleOffset(1.2);
   Jets_cut_CSV__8265->GetYaxis()->SetTitleFont(42);
   Jets_cut_CSV__8265->GetZaxis()->SetLabelFont(42);
   Jets_cut_CSV__8265->GetZaxis()->SetTitleOffset(1);
   Jets_cut_CSV__8265->GetZaxis()->SetTitleFont(42);
   Jets_cut_CSV__8265->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CSV_ZJets_DHZfirst_2b1c_18->Modified();
   CSV_ZJets_DHZfirst_2b1c_18->cd();
   CSV_ZJets_DHZfirst_2b1c_18->SetSelected(CSV_ZJets_DHZfirst_2b1c_18);
}
