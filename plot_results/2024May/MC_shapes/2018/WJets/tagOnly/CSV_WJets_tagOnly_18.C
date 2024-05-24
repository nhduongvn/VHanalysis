#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CSV_WJets_tagOnly_18()
{
//=========Macro generated from canvas: CSV_WJets_tagOnly_18/CSV_WJets_tagOnly_18
//=========  (Fri May 24 12:43:29 2024) by ROOT version 6.28/10
   TCanvas *CSV_WJets_tagOnly_18 = new TCanvas("CSV_WJets_tagOnly_18", "CSV_WJets_tagOnly_18",0,0,600,600);
   gStyle->SetOptStat(0);
   CSV_WJets_tagOnly_18->SetHighLightColor(2);
   CSV_WJets_tagOnly_18->Range(-0.2,-5.518152e+07,1.133333,4.966337e+08);
   CSV_WJets_tagOnly_18->SetFillColor(0);
   CSV_WJets_tagOnly_18->SetFillStyle(4000);
   CSV_WJets_tagOnly_18->SetBorderMode(0);
   CSV_WJets_tagOnly_18->SetBorderSize(2);
   CSV_WJets_tagOnly_18->SetLeftMargin(0.15);
   CSV_WJets_tagOnly_18->SetFrameFillStyle(1000);
   CSV_WJets_tagOnly_18->SetFrameBorderMode(0);
   CSV_WJets_tagOnly_18->SetFrameFillStyle(1000);
   CSV_WJets_tagOnly_18->SetFrameBorderMode(0);
   
   TH1D *Jets_cut_CSV__5142 = new TH1D("Jets_cut_CSV__5142","",20,0,1);
   Jets_cut_CSV__5142->SetBinContent(1,4.204306e+08);
   Jets_cut_CSV__5142->SetBinContent(2,3.379959e+07);
   Jets_cut_CSV__5142->SetBinContent(3,1.35747e+07);
   Jets_cut_CSV__5142->SetBinContent(4,7767265);
   Jets_cut_CSV__5142->SetBinContent(5,5194187);
   Jets_cut_CSV__5142->SetBinContent(6,4041497);
   Jets_cut_CSV__5142->SetBinContent(7,3305623);
   Jets_cut_CSV__5142->SetBinContent(8,2548965);
   Jets_cut_CSV__5142->SetBinContent(9,1987992);
   Jets_cut_CSV__5142->SetBinContent(10,1645691);
   Jets_cut_CSV__5142->SetBinContent(11,1403437);
   Jets_cut_CSV__5142->SetBinContent(12,1183118);
   Jets_cut_CSV__5142->SetBinContent(13,982833.5);
   Jets_cut_CSV__5142->SetBinContent(14,866456.1);
   Jets_cut_CSV__5142->SetBinContent(15,780491.2);
   Jets_cut_CSV__5142->SetBinContent(16,741355.9);
   Jets_cut_CSV__5142->SetBinContent(17,671127.4);
   Jets_cut_CSV__5142->SetBinContent(18,645247.7);
   Jets_cut_CSV__5142->SetBinContent(19,753936.4);
   Jets_cut_CSV__5142->SetBinContent(20,3054391);
   Jets_cut_CSV__5142->SetBinError(1,58334.97);
   Jets_cut_CSV__5142->SetBinError(2,17473.04);
   Jets_cut_CSV__5142->SetBinError(3,11038.87);
   Jets_cut_CSV__5142->SetBinError(4,8178.969);
   Jets_cut_CSV__5142->SetBinError(5,6606.635);
   Jets_cut_CSV__5142->SetBinError(6,6073.364);
   Jets_cut_CSV__5142->SetBinError(7,5856.684);
   Jets_cut_CSV__5142->SetBinError(8,5017.262);
   Jets_cut_CSV__5142->SetBinError(9,4313.2);
   Jets_cut_CSV__5142->SetBinError(10,3965.554);
   Jets_cut_CSV__5142->SetBinError(11,3501.714);
   Jets_cut_CSV__5142->SetBinError(12,3243.249);
   Jets_cut_CSV__5142->SetBinError(13,2847.588);
   Jets_cut_CSV__5142->SetBinError(14,2790.84);
   Jets_cut_CSV__5142->SetBinError(15,2519.577);
   Jets_cut_CSV__5142->SetBinError(16,2441.508);
   Jets_cut_CSV__5142->SetBinError(17,2274.542);
   Jets_cut_CSV__5142->SetBinError(18,2175.307);
   Jets_cut_CSV__5142->SetBinError(19,2385.125);
   Jets_cut_CSV__5142->SetBinError(20,4583.014);
   Jets_cut_CSV__5142->SetEntries(4.144857e+08);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jets_cut_CSV__5142->SetLineColor(ci);
   Jets_cut_CSV__5142->GetXaxis()->SetTitle("BvL tagging score");
   Jets_cut_CSV__5142->GetXaxis()->SetRange(1,20);
   Jets_cut_CSV__5142->GetXaxis()->SetLabelFont(42);
   Jets_cut_CSV__5142->GetXaxis()->SetTitleOffset(1);
   Jets_cut_CSV__5142->GetXaxis()->SetTitleFont(42);
   Jets_cut_CSV__5142->GetYaxis()->SetTitle("Events/0.05");
   Jets_cut_CSV__5142->GetYaxis()->SetLabelFont(42);
   Jets_cut_CSV__5142->GetYaxis()->SetLabelSize(0.05);
   Jets_cut_CSV__5142->GetYaxis()->SetTitleSize(0.057);
   Jets_cut_CSV__5142->GetYaxis()->SetTitleOffset(1.2);
   Jets_cut_CSV__5142->GetYaxis()->SetTitleFont(42);
   Jets_cut_CSV__5142->GetZaxis()->SetLabelFont(42);
   Jets_cut_CSV__5142->GetZaxis()->SetTitleOffset(1);
   Jets_cut_CSV__5142->GetZaxis()->SetTitleFont(42);
   Jets_cut_CSV__5142->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CSV_WJets_tagOnly_18->Modified();
   CSV_WJets_tagOnly_18->cd();
   CSV_WJets_tagOnly_18->SetSelected(CSV_WJets_tagOnly_18);
}
