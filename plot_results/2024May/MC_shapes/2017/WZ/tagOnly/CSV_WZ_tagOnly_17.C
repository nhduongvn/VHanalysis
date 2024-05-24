#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CSV_WZ_tagOnly_17()
{
//=========Macro generated from canvas: CSV_WZ_tagOnly_17/CSV_WZ_tagOnly_17
//=========  (Fri May 24 12:43:29 2024) by ROOT version 6.28/10
   TCanvas *CSV_WZ_tagOnly_17 = new TCanvas("CSV_WZ_tagOnly_17", "CSV_WZ_tagOnly_17",0,0,600,600);
   gStyle->SetOptStat(0);
   CSV_WZ_tagOnly_17->SetHighLightColor(2);
   CSV_WZ_tagOnly_17->Range(-0.2,-159718.3,1.133333,1437464);
   CSV_WZ_tagOnly_17->SetFillColor(0);
   CSV_WZ_tagOnly_17->SetFillStyle(4000);
   CSV_WZ_tagOnly_17->SetBorderMode(0);
   CSV_WZ_tagOnly_17->SetBorderSize(2);
   CSV_WZ_tagOnly_17->SetLeftMargin(0.15);
   CSV_WZ_tagOnly_17->SetFrameFillStyle(1000);
   CSV_WZ_tagOnly_17->SetFrameBorderMode(0);
   CSV_WZ_tagOnly_17->SetFrameFillStyle(1000);
   CSV_WZ_tagOnly_17->SetFrameBorderMode(0);
   
   TH1D *Jets_cut_CSV__5156 = new TH1D("Jets_cut_CSV__5156","",20,0,1);
   Jets_cut_CSV__5156->SetBinContent(1,1216901);
   Jets_cut_CSV__5156->SetBinContent(2,109505.4);
   Jets_cut_CSV__5156->SetBinContent(3,47929.91);
   Jets_cut_CSV__5156->SetBinContent(4,29487.51);
   Jets_cut_CSV__5156->SetBinContent(5,21189.16);
   Jets_cut_CSV__5156->SetBinContent(6,16306.42);
   Jets_cut_CSV__5156->SetBinContent(7,12714.79);
   Jets_cut_CSV__5156->SetBinContent(8,10355.21);
   Jets_cut_CSV__5156->SetBinContent(9,8518.843);
   Jets_cut_CSV__5156->SetBinContent(10,7488.605);
   Jets_cut_CSV__5156->SetBinContent(11,6846.914);
   Jets_cut_CSV__5156->SetBinContent(12,6285.455);
   Jets_cut_CSV__5156->SetBinContent(13,5569.123);
   Jets_cut_CSV__5156->SetBinContent(14,5498.734);
   Jets_cut_CSV__5156->SetBinContent(15,5457.62);
   Jets_cut_CSV__5156->SetBinContent(16,5777.027);
   Jets_cut_CSV__5156->SetBinContent(17,6068.338);
   Jets_cut_CSV__5156->SetBinContent(18,6790.875);
   Jets_cut_CSV__5156->SetBinContent(19,9843.151);
   Jets_cut_CSV__5156->SetBinContent(20,64886.8);
   Jets_cut_CSV__5156->SetBinError(1,534.4664);
   Jets_cut_CSV__5156->SetBinError(2,163.3756);
   Jets_cut_CSV__5156->SetBinError(3,108.0906);
   Jets_cut_CSV__5156->SetBinError(4,84.86191);
   Jets_cut_CSV__5156->SetBinError(5,72.21451);
   Jets_cut_CSV__5156->SetBinError(6,63.4178);
   Jets_cut_CSV__5156->SetBinError(7,55.58841);
   Jets_cut_CSV__5156->SetBinError(8,49.69884);
   Jets_cut_CSV__5156->SetBinError(9,44.94733);
   Jets_cut_CSV__5156->SetBinError(10,41.74188);
   Jets_cut_CSV__5156->SetBinError(11,39.86324);
   Jets_cut_CSV__5156->SetBinError(12,38.13629);
   Jets_cut_CSV__5156->SetBinError(13,36.0472);
   Jets_cut_CSV__5156->SetBinError(14,36.63244);
   Jets_cut_CSV__5156->SetBinError(15,36.76092);
   Jets_cut_CSV__5156->SetBinError(16,37.96532);
   Jets_cut_CSV__5156->SetBinError(17,38.92536);
   Jets_cut_CSV__5156->SetBinError(18,41.51672);
   Jets_cut_CSV__5156->SetBinError(19,50.23394);
   Jets_cut_CSV__5156->SetBinError(20,130.5034);
   Jets_cut_CSV__5156->SetEntries(7822457);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jets_cut_CSV__5156->SetLineColor(ci);
   Jets_cut_CSV__5156->GetXaxis()->SetTitle("BvL tagging score");
   Jets_cut_CSV__5156->GetXaxis()->SetRange(1,20);
   Jets_cut_CSV__5156->GetXaxis()->SetLabelFont(42);
   Jets_cut_CSV__5156->GetXaxis()->SetTitleOffset(1);
   Jets_cut_CSV__5156->GetXaxis()->SetTitleFont(42);
   Jets_cut_CSV__5156->GetYaxis()->SetTitle("Events/0.05");
   Jets_cut_CSV__5156->GetYaxis()->SetLabelFont(42);
   Jets_cut_CSV__5156->GetYaxis()->SetLabelSize(0.05);
   Jets_cut_CSV__5156->GetYaxis()->SetTitleSize(0.057);
   Jets_cut_CSV__5156->GetYaxis()->SetTitleOffset(1.2);
   Jets_cut_CSV__5156->GetYaxis()->SetTitleFont(42);
   Jets_cut_CSV__5156->GetZaxis()->SetLabelFont(42);
   Jets_cut_CSV__5156->GetZaxis()->SetTitleOffset(1);
   Jets_cut_CSV__5156->GetZaxis()->SetTitleFont(42);
   Jets_cut_CSV__5156->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CSV_WZ_tagOnly_17->Modified();
   CSV_WZ_tagOnly_17->cd();
   CSV_WZ_tagOnly_17->SetSelected(CSV_WZ_tagOnly_17);
}
