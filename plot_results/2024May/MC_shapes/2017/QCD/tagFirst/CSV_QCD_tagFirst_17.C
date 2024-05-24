#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CSV_QCD_tagFirst_17()
{
//=========Macro generated from canvas: CSV_QCD_tagFirst_17/CSV_QCD_tagFirst_17
//=========  (Fri May 24 12:43:13 2024) by ROOT version 6.28/10
   TCanvas *CSV_QCD_tagFirst_17 = new TCanvas("CSV_QCD_tagFirst_17", "CSV_QCD_tagFirst_17",0,0,600,600);
   gStyle->SetOptStat(0);
   CSV_QCD_tagFirst_17->SetHighLightColor(2);
   CSV_QCD_tagFirst_17->Range(-0.2,-8.838576e+10,1.133333,7.954718e+11);
   CSV_QCD_tagFirst_17->SetFillColor(0);
   CSV_QCD_tagFirst_17->SetFillStyle(4000);
   CSV_QCD_tagFirst_17->SetBorderMode(0);
   CSV_QCD_tagFirst_17->SetBorderSize(2);
   CSV_QCD_tagFirst_17->SetLeftMargin(0.15);
   CSV_QCD_tagFirst_17->SetFrameFillStyle(1000);
   CSV_QCD_tagFirst_17->SetFrameBorderMode(0);
   CSV_QCD_tagFirst_17->SetFrameFillStyle(1000);
   CSV_QCD_tagFirst_17->SetFrameBorderMode(0);
   
   TH1D *Jets_cut_CSV__4358 = new TH1D("Jets_cut_CSV__4358","",20,0,1);
   Jets_cut_CSV__4358->SetBinContent(1,6.734152e+11);
   Jets_cut_CSV__4358->SetBinContent(2,4.106708e+10);
   Jets_cut_CSV__4358->SetBinContent(3,1.573837e+10);
   Jets_cut_CSV__4358->SetBinContent(4,8.768235e+09);
   Jets_cut_CSV__4358->SetBinContent(5,5.706367e+09);
   Jets_cut_CSV__4358->SetBinContent(6,4.14727e+09);
   Jets_cut_CSV__4358->SetBinContent(7,3.349575e+09);
   Jets_cut_CSV__4358->SetBinContent(8,2.652463e+09);
   Jets_cut_CSV__4358->SetBinContent(9,2.123171e+09);
   Jets_cut_CSV__4358->SetBinContent(10,1.788238e+09);
   Jets_cut_CSV__4358->SetBinContent(11,1.572873e+09);
   Jets_cut_CSV__4358->SetBinContent(12,1.384018e+09);
   Jets_cut_CSV__4358->SetBinContent(13,1.230541e+09);
   Jets_cut_CSV__4358->SetBinContent(14,1.16811e+09);
   Jets_cut_CSV__4358->SetBinContent(15,1.133979e+09);
   Jets_cut_CSV__4358->SetBinContent(16,1.16461e+09);
   Jets_cut_CSV__4358->SetBinContent(17,1.201788e+09);
   Jets_cut_CSV__4358->SetBinContent(18,1.303415e+09);
   Jets_cut_CSV__4358->SetBinContent(19,1.826542e+09);
   Jets_cut_CSV__4358->SetBinContent(20,1.148874e+10);
   Jets_cut_CSV__4358->SetBinError(1,9.653077e+07);
   Jets_cut_CSV__4358->SetBinError(2,2.439192e+07);
   Jets_cut_CSV__4358->SetBinError(3,1.506442e+07);
   Jets_cut_CSV__4358->SetBinError(4,1.122687e+07);
   Jets_cut_CSV__4358->SetBinError(5,9042034);
   Jets_cut_CSV__4358->SetBinError(6,7702711);
   Jets_cut_CSV__4358->SetBinError(7,7164219);
   Jets_cut_CSV__4358->SetBinError(8,6316339);
   Jets_cut_CSV__4358->SetBinError(9,5581190);
   Jets_cut_CSV__4358->SetBinError(10,5062081);
   Jets_cut_CSV__4358->SetBinError(11,4688670);
   Jets_cut_CSV__4358->SetBinError(12,4356760);
   Jets_cut_CSV__4358->SetBinError(13,4097173);
   Jets_cut_CSV__4358->SetBinError(14,4013342);
   Jets_cut_CSV__4358->SetBinError(15,3961085);
   Jets_cut_CSV__4358->SetBinError(16,4005894);
   Jets_cut_CSV__4358->SetBinError(17,4073131);
   Jets_cut_CSV__4358->SetBinError(18,4240631);
   Jets_cut_CSV__4358->SetBinError(19,5028013);
   Jets_cut_CSV__4358->SetBinError(20,1.278412e+07);
   Jets_cut_CSV__4358->SetEntries(6.773086e+08);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jets_cut_CSV__4358->SetLineColor(ci);
   Jets_cut_CSV__4358->GetXaxis()->SetTitle("BvL tagging score");
   Jets_cut_CSV__4358->GetXaxis()->SetRange(1,20);
   Jets_cut_CSV__4358->GetXaxis()->SetLabelFont(42);
   Jets_cut_CSV__4358->GetXaxis()->SetTitleOffset(1);
   Jets_cut_CSV__4358->GetXaxis()->SetTitleFont(42);
   Jets_cut_CSV__4358->GetYaxis()->SetTitle("Events/0.05");
   Jets_cut_CSV__4358->GetYaxis()->SetLabelFont(42);
   Jets_cut_CSV__4358->GetYaxis()->SetLabelSize(0.05);
   Jets_cut_CSV__4358->GetYaxis()->SetTitleSize(0.057);
   Jets_cut_CSV__4358->GetYaxis()->SetTitleOffset(1.2);
   Jets_cut_CSV__4358->GetYaxis()->SetTitleFont(42);
   Jets_cut_CSV__4358->GetZaxis()->SetLabelFont(42);
   Jets_cut_CSV__4358->GetZaxis()->SetTitleOffset(1);
   Jets_cut_CSV__4358->GetZaxis()->SetTitleFont(42);
   Jets_cut_CSV__4358->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CSV_QCD_tagFirst_17->Modified();
   CSV_QCD_tagFirst_17->cd();
   CSV_QCD_tagFirst_17->SetSelected(CSV_QCD_tagFirst_17);
}
