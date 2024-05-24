#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CSV_ZHbb_tagFirst_2b1c_17()
{
//=========Macro generated from canvas: CSV_ZHbb_tagFirst_2b1c_17/CSV_ZHbb_tagFirst_2b1c_17
//=========  (Fri May 24 12:44:00 2024) by ROOT version 6.28/10
   TCanvas *CSV_ZHbb_tagFirst_2b1c_17 = new TCanvas("CSV_ZHbb_tagFirst_2b1c_17", "CSV_ZHbb_tagFirst_2b1c_17",0,0,600,600);
   gStyle->SetOptStat(0);
   CSV_ZHbb_tagFirst_2b1c_17->SetHighLightColor(2);
   CSV_ZHbb_tagFirst_2b1c_17->Range(-0.2,-1713.299,1.133333,15419.69);
   CSV_ZHbb_tagFirst_2b1c_17->SetFillColor(0);
   CSV_ZHbb_tagFirst_2b1c_17->SetFillStyle(4000);
   CSV_ZHbb_tagFirst_2b1c_17->SetBorderMode(0);
   CSV_ZHbb_tagFirst_2b1c_17->SetBorderSize(2);
   CSV_ZHbb_tagFirst_2b1c_17->SetLeftMargin(0.15);
   CSV_ZHbb_tagFirst_2b1c_17->SetFrameFillStyle(1000);
   CSV_ZHbb_tagFirst_2b1c_17->SetFrameBorderMode(0);
   CSV_ZHbb_tagFirst_2b1c_17->SetFrameFillStyle(1000);
   CSV_ZHbb_tagFirst_2b1c_17->SetFrameBorderMode(0);
   
   TH1D *Jets_cut_CSV__6695 = new TH1D("Jets_cut_CSV__6695","",20,0,1);
   Jets_cut_CSV__6695->SetBinContent(1,13053.71);
   Jets_cut_CSV__6695->SetBinContent(2,1577.633);
   Jets_cut_CSV__6695->SetBinContent(3,840.2615);
   Jets_cut_CSV__6695->SetBinContent(4,610.3101);
   Jets_cut_CSV__6695->SetBinContent(5,505.3714);
   Jets_cut_CSV__6695->SetBinContent(6,452.2828);
   Jets_cut_CSV__6695->SetBinContent(7,346.33);
   Jets_cut_CSV__6695->SetBinContent(8,320.301);
   Jets_cut_CSV__6695->SetBinContent(9,301.3474);
   Jets_cut_CSV__6695->SetBinContent(10,299.5832);
   Jets_cut_CSV__6695->SetBinContent(11,312.2257);
   Jets_cut_CSV__6695->SetBinContent(12,322.872);
   Jets_cut_CSV__6695->SetBinContent(13,329.7202);
   Jets_cut_CSV__6695->SetBinContent(14,367.4443);
   Jets_cut_CSV__6695->SetBinContent(15,404.5901);
   Jets_cut_CSV__6695->SetBinContent(16,474.4222);
   Jets_cut_CSV__6695->SetBinContent(17,547.4083);
   Jets_cut_CSV__6695->SetBinContent(18,671.1286);
   Jets_cut_CSV__6695->SetBinContent(19,1064.096);
   Jets_cut_CSV__6695->SetBinContent(20,7470.576);
   Jets_cut_CSV__6695->SetBinError(1,4.332737);
   Jets_cut_CSV__6695->SetBinError(2,1.555491);
   Jets_cut_CSV__6695->SetBinError(3,1.147917);
   Jets_cut_CSV__6695->SetBinError(4,0.9859208);
   Jets_cut_CSV__6695->SetBinError(5,0.9026983);
   Jets_cut_CSV__6695->SetBinError(6,0.8625845);
   Jets_cut_CSV__6695->SetBinError(7,0.6770703);
   Jets_cut_CSV__6695->SetBinError(8,0.6423527);
   Jets_cut_CSV__6695->SetBinError(9,0.6238199);
   Jets_cut_CSV__6695->SetBinError(10,0.6224545);
   Jets_cut_CSV__6695->SetBinError(11,0.6392554);
   Jets_cut_CSV__6695->SetBinError(12,0.6558834);
   Jets_cut_CSV__6695->SetBinError(13,0.6752624);
   Jets_cut_CSV__6695->SetBinError(14,0.7441977);
   Jets_cut_CSV__6695->SetBinError(15,0.7851078);
   Jets_cut_CSV__6695->SetBinError(16,0.8519675);
   Jets_cut_CSV__6695->SetBinError(17,0.9178178);
   Jets_cut_CSV__6695->SetBinError(18,1.014716);
   Jets_cut_CSV__6695->SetBinError(19,1.279775);
   Jets_cut_CSV__6695->SetBinError(20,3.427536);
   Jets_cut_CSV__6695->SetEntries(3.46496e+07);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jets_cut_CSV__6695->SetLineColor(ci);
   Jets_cut_CSV__6695->GetXaxis()->SetTitle("BvL tagging score");
   Jets_cut_CSV__6695->GetXaxis()->SetRange(1,20);
   Jets_cut_CSV__6695->GetXaxis()->SetLabelFont(42);
   Jets_cut_CSV__6695->GetXaxis()->SetTitleOffset(1);
   Jets_cut_CSV__6695->GetXaxis()->SetTitleFont(42);
   Jets_cut_CSV__6695->GetYaxis()->SetTitle("Events/0.05");
   Jets_cut_CSV__6695->GetYaxis()->SetLabelFont(42);
   Jets_cut_CSV__6695->GetYaxis()->SetLabelSize(0.05);
   Jets_cut_CSV__6695->GetYaxis()->SetTitleSize(0.057);
   Jets_cut_CSV__6695->GetYaxis()->SetTitleOffset(1.2);
   Jets_cut_CSV__6695->GetYaxis()->SetTitleFont(42);
   Jets_cut_CSV__6695->GetZaxis()->SetLabelFont(42);
   Jets_cut_CSV__6695->GetZaxis()->SetTitleOffset(1);
   Jets_cut_CSV__6695->GetZaxis()->SetTitleFont(42);
   Jets_cut_CSV__6695->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CSV_ZHbb_tagFirst_2b1c_17->Modified();
   CSV_ZHbb_tagFirst_2b1c_17->cd();
   CSV_ZHbb_tagFirst_2b1c_17->SetSelected(CSV_ZHbb_tagFirst_2b1c_17);
}
