#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CSV_ZHbb_tagOnly_2b1c_16()
{
//=========Macro generated from canvas: CSV_ZHbb_tagOnly_2b1c_16/CSV_ZHbb_tagOnly_2b1c_16
//=========  (Fri May 24 12:44:17 2024) by ROOT version 6.28/10
   TCanvas *CSV_ZHbb_tagOnly_2b1c_16 = new TCanvas("CSV_ZHbb_tagOnly_2b1c_16", "CSV_ZHbb_tagOnly_2b1c_16",0,0,600,600);
   gStyle->SetOptStat(0);
   CSV_ZHbb_tagOnly_2b1c_16->SetHighLightColor(2);
   CSV_ZHbb_tagOnly_2b1c_16->Range(-0.2,-2012.976,1.133333,18116.79);
   CSV_ZHbb_tagOnly_2b1c_16->SetFillColor(0);
   CSV_ZHbb_tagOnly_2b1c_16->SetFillStyle(4000);
   CSV_ZHbb_tagOnly_2b1c_16->SetBorderMode(0);
   CSV_ZHbb_tagOnly_2b1c_16->SetBorderSize(2);
   CSV_ZHbb_tagOnly_2b1c_16->SetLeftMargin(0.15);
   CSV_ZHbb_tagOnly_2b1c_16->SetFrameFillStyle(1000);
   CSV_ZHbb_tagOnly_2b1c_16->SetFrameBorderMode(0);
   CSV_ZHbb_tagOnly_2b1c_16->SetFrameFillStyle(1000);
   CSV_ZHbb_tagOnly_2b1c_16->SetFrameBorderMode(0);
   
   TH1D *Jets_cut_CSV__7474 = new TH1D("Jets_cut_CSV__7474","",20,0,1);
   Jets_cut_CSV__7474->SetBinContent(1,15336.96);
   Jets_cut_CSV__7474->SetBinContent(2,2114.547);
   Jets_cut_CSV__7474->SetBinContent(3,1123.829);
   Jets_cut_CSV__7474->SetBinContent(4,805.0818);
   Jets_cut_CSV__7474->SetBinContent(5,662.4134);
   Jets_cut_CSV__7474->SetBinContent(6,582.2238);
   Jets_cut_CSV__7474->SetBinContent(7,502.8972);
   Jets_cut_CSV__7474->SetBinContent(8,466.2173);
   Jets_cut_CSV__7474->SetBinContent(9,441.8654);
   Jets_cut_CSV__7474->SetBinContent(10,438.5445);
   Jets_cut_CSV__7474->SetBinContent(11,445.4329);
   Jets_cut_CSV__7474->SetBinContent(12,454.4452);
   Jets_cut_CSV__7474->SetBinContent(13,466.094);
   Jets_cut_CSV__7474->SetBinContent(14,498.6273);
   Jets_cut_CSV__7474->SetBinContent(15,541.8007);
   Jets_cut_CSV__7474->SetBinContent(16,625.771);
   Jets_cut_CSV__7474->SetBinContent(17,713.247);
   Jets_cut_CSV__7474->SetBinContent(18,884.7679);
   Jets_cut_CSV__7474->SetBinContent(19,1386.254);
   Jets_cut_CSV__7474->SetBinContent(20,8404.557);
   Jets_cut_CSV__7474->SetBinError(1,6.91413);
   Jets_cut_CSV__7474->SetBinError(2,2.74222);
   Jets_cut_CSV__7474->SetBinError(3,2.043608);
   Jets_cut_CSV__7474->SetBinError(4,1.750925);
   Jets_cut_CSV__7474->SetBinError(5,1.604441);
   Jets_cut_CSV__7474->SetBinError(6,1.516282);
   Jets_cut_CSV__7474->SetBinError(7,1.36683);
   Jets_cut_CSV__7474->SetBinError(8,1.31123);
   Jets_cut_CSV__7474->SetBinError(9,1.283981);
   Jets_cut_CSV__7474->SetBinError(10,1.287262);
   Jets_cut_CSV__7474->SetBinError(11,1.30028);
   Jets_cut_CSV__7474->SetBinError(12,1.319174);
   Jets_cut_CSV__7474->SetBinError(13,1.351961);
   Jets_cut_CSV__7474->SetBinError(14,1.411838);
   Jets_cut_CSV__7474->SetBinError(15,1.472065);
   Jets_cut_CSV__7474->SetBinError(16,1.583003);
   Jets_cut_CSV__7474->SetBinError(17,1.692674);
   Jets_cut_CSV__7474->SetBinError(18,1.884458);
   Jets_cut_CSV__7474->SetBinError(19,2.357746);
   Jets_cut_CSV__7474->SetBinError(20,5.759322);
   Jets_cut_CSV__7474->SetEntries(3.486917e+07);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jets_cut_CSV__7474->SetLineColor(ci);
   Jets_cut_CSV__7474->GetXaxis()->SetTitle("BvL tagging score");
   Jets_cut_CSV__7474->GetXaxis()->SetRange(1,20);
   Jets_cut_CSV__7474->GetXaxis()->SetLabelFont(42);
   Jets_cut_CSV__7474->GetXaxis()->SetTitleOffset(1);
   Jets_cut_CSV__7474->GetXaxis()->SetTitleFont(42);
   Jets_cut_CSV__7474->GetYaxis()->SetTitle("Events/0.05");
   Jets_cut_CSV__7474->GetYaxis()->SetLabelFont(42);
   Jets_cut_CSV__7474->GetYaxis()->SetLabelSize(0.05);
   Jets_cut_CSV__7474->GetYaxis()->SetTitleSize(0.057);
   Jets_cut_CSV__7474->GetYaxis()->SetTitleOffset(1.2);
   Jets_cut_CSV__7474->GetYaxis()->SetTitleFont(42);
   Jets_cut_CSV__7474->GetZaxis()->SetLabelFont(42);
   Jets_cut_CSV__7474->GetZaxis()->SetTitleOffset(1);
   Jets_cut_CSV__7474->GetZaxis()->SetTitleFont(42);
   Jets_cut_CSV__7474->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CSV_ZHbb_tagOnly_2b1c_16->Modified();
   CSV_ZHbb_tagOnly_2b1c_16->cd();
   CSV_ZHbb_tagOnly_2b1c_16->SetSelected(CSV_ZHbb_tagOnly_2b1c_16);
}
