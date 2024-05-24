#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CSV_TT_tagOnly_17()
{
//=========Macro generated from canvas: CSV_TT_tagOnly_17/CSV_TT_tagOnly_17
//=========  (Fri May 24 12:43:29 2024) by ROOT version 6.28/10
   TCanvas *CSV_TT_tagOnly_17 = new TCanvas("CSV_TT_tagOnly_17", "CSV_TT_tagOnly_17",0,0,600,600);
   gStyle->SetOptStat(0);
   CSV_TT_tagOnly_17->SetHighLightColor(2);
   CSV_TT_tagOnly_17->Range(-0.2,-5874031,1.133333,5.286627e+07);
   CSV_TT_tagOnly_17->SetFillColor(0);
   CSV_TT_tagOnly_17->SetFillStyle(4000);
   CSV_TT_tagOnly_17->SetBorderMode(0);
   CSV_TT_tagOnly_17->SetBorderSize(2);
   CSV_TT_tagOnly_17->SetLeftMargin(0.15);
   CSV_TT_tagOnly_17->SetFrameFillStyle(1000);
   CSV_TT_tagOnly_17->SetFrameBorderMode(0);
   CSV_TT_tagOnly_17->SetFrameFillStyle(1000);
   CSV_TT_tagOnly_17->SetFrameBorderMode(0);
   
   TH1D *Jets_cut_CSV__5147 = new TH1D("Jets_cut_CSV__5147","",20,0,1);
   Jets_cut_CSV__5147->SetBinContent(1,4.475452e+07);
   Jets_cut_CSV__5147->SetBinContent(2,5153288);
   Jets_cut_CSV__5147->SetBinContent(3,2603200);
   Jets_cut_CSV__5147->SetBinContent(4,1808330);
   Jets_cut_CSV__5147->SetBinContent(5,1436162);
   Jets_cut_CSV__5147->SetBinContent(6,1238135);
   Jets_cut_CSV__5147->SetBinContent(7,921639.2);
   Jets_cut_CSV__5147->SetBinContent(8,819777.4);
   Jets_cut_CSV__5147->SetBinContent(9,745951.9);
   Jets_cut_CSV__5147->SetBinContent(10,725794);
   Jets_cut_CSV__5147->SetBinContent(11,735076.2);
   Jets_cut_CSV__5147->SetBinContent(12,743079.1);
   Jets_cut_CSV__5147->SetBinContent(13,739965.3);
   Jets_cut_CSV__5147->SetBinContent(14,809401.8);
   Jets_cut_CSV__5147->SetBinContent(15,877670.2);
   Jets_cut_CSV__5147->SetBinContent(16,1017633);
   Jets_cut_CSV__5147->SetBinContent(17,1164102);
   Jets_cut_CSV__5147->SetBinContent(18,1409956);
   Jets_cut_CSV__5147->SetBinContent(19,2207380);
   Jets_cut_CSV__5147->SetBinContent(20,1.598888e+07);
   Jets_cut_CSV__5147->SetBinError(1,1803.645);
   Jets_cut_CSV__5147->SetBinError(2,619.1542);
   Jets_cut_CSV__5147->SetBinError(3,438.7612);
   Jets_cut_CSV__5147->SetBinError(4,365.6581);
   Jets_cut_CSV__5147->SetBinError(5,326.2335);
   Jets_cut_CSV__5147->SetBinError(6,303.7516);
   Jets_cut_CSV__5147->SetBinError(7,241.4288);
   Jets_cut_CSV__5147->SetBinError(8,223.4467);
   Jets_cut_CSV__5147->SetBinError(9,211.5799);
   Jets_cut_CSV__5147->SetBinError(10,207.5004);
   Jets_cut_CSV__5147->SetBinError(11,208.1606);
   Jets_cut_CSV__5147->SetBinError(12,209.4465);
   Jets_cut_CSV__5147->SetBinError(13,211.164);
   Jets_cut_CSV__5147->SetBinError(14,227.6566);
   Jets_cut_CSV__5147->SetBinError(15,237.697);
   Jets_cut_CSV__5147->SetBinError(16,255.4933);
   Jets_cut_CSV__5147->SetBinError(17,273.1414);
   Jets_cut_CSV__5147->SetBinError(18,300.3643);
   Jets_cut_CSV__5147->SetBinError(19,375.7177);
   Jets_cut_CSV__5147->SetBinError(20,1012.716);
   Jets_cut_CSV__5147->SetEntries(1.690701e+09);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jets_cut_CSV__5147->SetLineColor(ci);
   Jets_cut_CSV__5147->GetXaxis()->SetTitle("BvL tagging score");
   Jets_cut_CSV__5147->GetXaxis()->SetRange(1,20);
   Jets_cut_CSV__5147->GetXaxis()->SetLabelFont(42);
   Jets_cut_CSV__5147->GetXaxis()->SetTitleOffset(1);
   Jets_cut_CSV__5147->GetXaxis()->SetTitleFont(42);
   Jets_cut_CSV__5147->GetYaxis()->SetTitle("Events/0.05");
   Jets_cut_CSV__5147->GetYaxis()->SetLabelFont(42);
   Jets_cut_CSV__5147->GetYaxis()->SetLabelSize(0.05);
   Jets_cut_CSV__5147->GetYaxis()->SetTitleSize(0.057);
   Jets_cut_CSV__5147->GetYaxis()->SetTitleOffset(1.2);
   Jets_cut_CSV__5147->GetYaxis()->SetTitleFont(42);
   Jets_cut_CSV__5147->GetZaxis()->SetLabelFont(42);
   Jets_cut_CSV__5147->GetZaxis()->SetTitleOffset(1);
   Jets_cut_CSV__5147->GetZaxis()->SetTitleFont(42);
   Jets_cut_CSV__5147->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CSV_TT_tagOnly_17->Modified();
   CSV_TT_tagOnly_17->cd();
   CSV_TT_tagOnly_17->SetSelected(CSV_TT_tagOnly_17);
}
