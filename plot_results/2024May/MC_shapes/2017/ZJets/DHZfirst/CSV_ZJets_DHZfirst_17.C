#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CSV_ZJets_DHZfirst_17()
{
//=========Macro generated from canvas: CSV_ZJets_DHZfirst_17/CSV_ZJets_DHZfirst_17
//=========  (Fri May 24 12:43:44 2024) by ROOT version 6.28/10
   TCanvas *CSV_ZJets_DHZfirst_17 = new TCanvas("CSV_ZJets_DHZfirst_17", "CSV_ZJets_DHZfirst_17",0,0,600,600);
   gStyle->SetOptStat(0);
   CSV_ZJets_DHZfirst_17->SetHighLightColor(2);
   CSV_ZJets_DHZfirst_17->Range(-0.2,-7542560,1.133333,6.788303e+07);
   CSV_ZJets_DHZfirst_17->SetFillColor(0);
   CSV_ZJets_DHZfirst_17->SetFillStyle(4000);
   CSV_ZJets_DHZfirst_17->SetBorderMode(0);
   CSV_ZJets_DHZfirst_17->SetBorderSize(2);
   CSV_ZJets_DHZfirst_17->SetLeftMargin(0.15);
   CSV_ZJets_DHZfirst_17->SetFrameFillStyle(1000);
   CSV_ZJets_DHZfirst_17->SetFrameBorderMode(0);
   CSV_ZJets_DHZfirst_17->SetFrameFillStyle(1000);
   CSV_ZJets_DHZfirst_17->SetFrameBorderMode(0);
   
   TH1D *Jets_cut_CSV__5924 = new TH1D("Jets_cut_CSV__5924","",20,0,1);
   Jets_cut_CSV__5924->SetBinContent(1,5.746712e+07);
   Jets_cut_CSV__5924->SetBinContent(2,4508728);
   Jets_cut_CSV__5924->SetBinContent(3,1904418);
   Jets_cut_CSV__5924->SetBinContent(4,1155193);
   Jets_cut_CSV__5924->SetBinContent(5,826404.3);
   Jets_cut_CSV__5924->SetBinContent(6,648353.3);
   Jets_cut_CSV__5924->SetBinContent(7,500529);
   Jets_cut_CSV__5924->SetBinContent(8,417904.8);
   Jets_cut_CSV__5924->SetBinContent(9,353609.8);
   Jets_cut_CSV__5924->SetBinContent(10,319946.1);
   Jets_cut_CSV__5924->SetBinContent(11,302378.4);
   Jets_cut_CSV__5924->SetBinContent(12,286458.8);
   Jets_cut_CSV__5924->SetBinContent(13,270398.2);
   Jets_cut_CSV__5924->SetBinContent(14,280297.2);
   Jets_cut_CSV__5924->SetBinContent(15,290044.8);
   Jets_cut_CSV__5924->SetBinContent(16,319480.7);
   Jets_cut_CSV__5924->SetBinContent(17,349686.7);
   Jets_cut_CSV__5924->SetBinContent(18,408273.8);
   Jets_cut_CSV__5924->SetBinContent(19,615304.3);
   Jets_cut_CSV__5924->SetBinContent(20,4192445);
   Jets_cut_CSV__5924->SetBinError(1,11080.14);
   Jets_cut_CSV__5924->SetBinError(2,3159.281);
   Jets_cut_CSV__5924->SetBinError(3,2061.631);
   Jets_cut_CSV__5924->SetBinError(4,1613.599);
   Jets_cut_CSV__5924->SetBinError(5,1375.225);
   Jets_cut_CSV__5924->SetBinError(6,1227.958);
   Jets_cut_CSV__5924->SetBinError(7,1052.48);
   Jets_cut_CSV__5924->SetBinError(8,953.5894);
   Jets_cut_CSV__5924->SetBinError(9,872.4204);
   Jets_cut_CSV__5924->SetBinError(10,827.0165);
   Jets_cut_CSV__5924->SetBinError(11,803.7881);
   Jets_cut_CSV__5924->SetBinError(12,784.0128);
   Jets_cut_CSV__5924->SetBinError(13,769.8047);
   Jets_cut_CSV__5924->SetBinError(14,809.8809);
   Jets_cut_CSV__5924->SetBinError(15,830.755);
   Jets_cut_CSV__5924->SetBinError(16,875.6728);
   Jets_cut_CSV__5924->SetBinError(17,919.2313);
   Jets_cut_CSV__5924->SetBinError(18,998.3362);
   Jets_cut_CSV__5924->SetBinError(19,1231.634);
   Jets_cut_CSV__5924->SetBinError(20,3252.546);
   Jets_cut_CSV__5924->SetEntries(1.363191e+08);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jets_cut_CSV__5924->SetLineColor(ci);
   Jets_cut_CSV__5924->GetXaxis()->SetTitle("BvL tagging score");
   Jets_cut_CSV__5924->GetXaxis()->SetRange(1,20);
   Jets_cut_CSV__5924->GetXaxis()->SetLabelFont(42);
   Jets_cut_CSV__5924->GetXaxis()->SetTitleOffset(1);
   Jets_cut_CSV__5924->GetXaxis()->SetTitleFont(42);
   Jets_cut_CSV__5924->GetYaxis()->SetTitle("Events/0.05");
   Jets_cut_CSV__5924->GetYaxis()->SetLabelFont(42);
   Jets_cut_CSV__5924->GetYaxis()->SetLabelSize(0.05);
   Jets_cut_CSV__5924->GetYaxis()->SetTitleSize(0.057);
   Jets_cut_CSV__5924->GetYaxis()->SetTitleOffset(1.2);
   Jets_cut_CSV__5924->GetYaxis()->SetTitleFont(42);
   Jets_cut_CSV__5924->GetZaxis()->SetLabelFont(42);
   Jets_cut_CSV__5924->GetZaxis()->SetTitleOffset(1);
   Jets_cut_CSV__5924->GetZaxis()->SetTitleFont(42);
   Jets_cut_CSV__5924->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CSV_ZJets_DHZfirst_17->Modified();
   CSV_ZJets_DHZfirst_17->cd();
   CSV_ZJets_DHZfirst_17->SetSelected(CSV_ZJets_DHZfirst_17);
}
