#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CSV_WW_tagOnly_2b1c_18()
{
//=========Macro generated from canvas: CSV_WW_tagOnly_2b1c_18/CSV_WW_tagOnly_2b1c_18
//=========  (Fri May 24 12:44:17 2024) by ROOT version 6.28/10
   TCanvas *CSV_WW_tagOnly_2b1c_18 = new TCanvas("CSV_WW_tagOnly_2b1c_18", "CSV_WW_tagOnly_2b1c_18",0,0,600,600);
   gStyle->SetOptStat(0);
   CSV_WW_tagOnly_2b1c_18->SetHighLightColor(2);
   CSV_WW_tagOnly_2b1c_18->Range(-0.2,-697742.5,1.133333,6279682);
   CSV_WW_tagOnly_2b1c_18->SetFillColor(0);
   CSV_WW_tagOnly_2b1c_18->SetFillStyle(4000);
   CSV_WW_tagOnly_2b1c_18->SetBorderMode(0);
   CSV_WW_tagOnly_2b1c_18->SetBorderSize(2);
   CSV_WW_tagOnly_2b1c_18->SetLeftMargin(0.15);
   CSV_WW_tagOnly_2b1c_18->SetFrameFillStyle(1000);
   CSV_WW_tagOnly_2b1c_18->SetFrameBorderMode(0);
   CSV_WW_tagOnly_2b1c_18->SetFrameFillStyle(1000);
   CSV_WW_tagOnly_2b1c_18->SetFrameBorderMode(0);
   
   TH1D *Jets_cut_CSV__7494 = new TH1D("Jets_cut_CSV__7494","",20,0,1);
   Jets_cut_CSV__7494->SetBinContent(1,5316133);
   Jets_cut_CSV__7494->SetBinContent(2,481509.1);
   Jets_cut_CSV__7494->SetBinContent(3,203271.7);
   Jets_cut_CSV__7494->SetBinContent(4,119948.7);
   Jets_cut_CSV__7494->SetBinContent(5,82021.19);
   Jets_cut_CSV__7494->SetBinContent(6,64120.7);
   Jets_cut_CSV__7494->SetBinContent(7,52042.45);
   Jets_cut_CSV__7494->SetBinContent(8,40250.17);
   Jets_cut_CSV__7494->SetBinContent(9,31152.15);
   Jets_cut_CSV__7494->SetBinContent(10,25835.71);
   Jets_cut_CSV__7494->SetBinContent(11,22000.85);
   Jets_cut_CSV__7494->SetBinContent(12,18349.02);
   Jets_cut_CSV__7494->SetBinContent(13,14868.92);
   Jets_cut_CSV__7494->SetBinContent(14,12795.56);
   Jets_cut_CSV__7494->SetBinContent(15,11207.76);
   Jets_cut_CSV__7494->SetBinContent(16,10188.81);
   Jets_cut_CSV__7494->SetBinContent(17,8946.831);
   Jets_cut_CSV__7494->SetBinContent(18,7934.636);
   Jets_cut_CSV__7494->SetBinContent(19,8304.864);
   Jets_cut_CSV__7494->SetBinContent(20,23245.8);
   Jets_cut_CSV__7494->SetBinError(1,1901.303);
   Jets_cut_CSV__7494->SetBinError(2,605.4849);
   Jets_cut_CSV__7494->SetBinError(3,389.1052);
   Jets_cut_CSV__7494->SetBinError(4,302.225);
   Jets_cut_CSV__7494->SetBinError(5,241.806);
   Jets_cut_CSV__7494->SetBinError(6,228.5086);
   Jets_cut_CSV__7494->SetBinError(7,207.9038);
   Jets_cut_CSV__7494->SetBinError(8,195.9849);
   Jets_cut_CSV__7494->SetBinError(9,156.4772);
   Jets_cut_CSV__7494->SetBinError(10,143.8395);
   Jets_cut_CSV__7494->SetBinError(11,127.7553);
   Jets_cut_CSV__7494->SetBinError(12,114.1605);
   Jets_cut_CSV__7494->SetBinError(13,108.5865);
   Jets_cut_CSV__7494->SetBinError(14,93.33596);
   Jets_cut_CSV__7494->SetBinError(15,84.98891);
   Jets_cut_CSV__7494->SetBinError(16,82.11285);
   Jets_cut_CSV__7494->SetBinError(17,75.58318);
   Jets_cut_CSV__7494->SetBinError(18,74.85875);
   Jets_cut_CSV__7494->SetBinError(19,80.57764);
   Jets_cut_CSV__7494->SetBinError(20,129.6233);
   Jets_cut_CSV__7494->SetEntries(1.401267e+07);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jets_cut_CSV__7494->SetLineColor(ci);
   Jets_cut_CSV__7494->GetXaxis()->SetTitle("BvL tagging score");
   Jets_cut_CSV__7494->GetXaxis()->SetRange(1,20);
   Jets_cut_CSV__7494->GetXaxis()->SetLabelFont(42);
   Jets_cut_CSV__7494->GetXaxis()->SetTitleOffset(1);
   Jets_cut_CSV__7494->GetXaxis()->SetTitleFont(42);
   Jets_cut_CSV__7494->GetYaxis()->SetTitle("Events/0.05");
   Jets_cut_CSV__7494->GetYaxis()->SetLabelFont(42);
   Jets_cut_CSV__7494->GetYaxis()->SetLabelSize(0.05);
   Jets_cut_CSV__7494->GetYaxis()->SetTitleSize(0.057);
   Jets_cut_CSV__7494->GetYaxis()->SetTitleOffset(1.2);
   Jets_cut_CSV__7494->GetYaxis()->SetTitleFont(42);
   Jets_cut_CSV__7494->GetZaxis()->SetLabelFont(42);
   Jets_cut_CSV__7494->GetZaxis()->SetTitleOffset(1);
   Jets_cut_CSV__7494->GetZaxis()->SetTitleFont(42);
   Jets_cut_CSV__7494->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CSV_WW_tagOnly_2b1c_18->Modified();
   CSV_WW_tagOnly_2b1c_18->cd();
   CSV_WW_tagOnly_2b1c_18->SetSelected(CSV_WW_tagOnly_2b1c_18);
}
