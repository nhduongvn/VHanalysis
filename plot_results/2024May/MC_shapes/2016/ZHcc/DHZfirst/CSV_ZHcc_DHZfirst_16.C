#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CSV_ZHcc_DHZfirst_16()
{
//=========Macro generated from canvas: CSV_ZHcc_DHZfirst_16/CSV_ZHcc_DHZfirst_16
//=========  (Fri May 24 12:43:44 2024) by ROOT version 6.28/10
   TCanvas *CSV_ZHcc_DHZfirst_16 = new TCanvas("CSV_ZHcc_DHZfirst_16", "CSV_ZHcc_DHZfirst_16",0,0,600,600);
   gStyle->SetOptStat(0);
   CSV_ZHcc_DHZfirst_16->SetHighLightColor(2);
   CSV_ZHcc_DHZfirst_16->Range(-0.2,-141.8149,1.133333,1276.334);
   CSV_ZHcc_DHZfirst_16->SetFillColor(0);
   CSV_ZHcc_DHZfirst_16->SetFillStyle(4000);
   CSV_ZHcc_DHZfirst_16->SetBorderMode(0);
   CSV_ZHcc_DHZfirst_16->SetBorderSize(2);
   CSV_ZHcc_DHZfirst_16->SetLeftMargin(0.15);
   CSV_ZHcc_DHZfirst_16->SetFrameFillStyle(1000);
   CSV_ZHcc_DHZfirst_16->SetFrameBorderMode(0);
   CSV_ZHcc_DHZfirst_16->SetFrameFillStyle(1000);
   CSV_ZHcc_DHZfirst_16->SetFrameBorderMode(0);
   
   TH1D *Jets_cut_CSV__5911 = new TH1D("Jets_cut_CSV__5911","",20,0,1);
   Jets_cut_CSV__5911->SetBinContent(1,1080.495);
   Jets_cut_CSV__5911->SetBinContent(2,168.4879);
   Jets_cut_CSV__5911->SetBinContent(3,83.01468);
   Jets_cut_CSV__5911->SetBinContent(4,55.3942);
   Jets_cut_CSV__5911->SetBinContent(5,40.45157);
   Jets_cut_CSV__5911->SetBinContent(6,31.66624);
   Jets_cut_CSV__5911->SetBinContent(7,24.67438);
   Jets_cut_CSV__5911->SetBinContent(8,20.14885);
   Jets_cut_CSV__5911->SetBinContent(9,16.85856);
   Jets_cut_CSV__5911->SetBinContent(10,15.40329);
   Jets_cut_CSV__5911->SetBinContent(11,13.45486);
   Jets_cut_CSV__5911->SetBinContent(12,12.33926);
   Jets_cut_CSV__5911->SetBinContent(13,10.68317);
   Jets_cut_CSV__5911->SetBinContent(14,8.969956);
   Jets_cut_CSV__5911->SetBinContent(15,8.871431);
   Jets_cut_CSV__5911->SetBinContent(16,8.858951);
   Jets_cut_CSV__5911->SetBinContent(17,8.21662);
   Jets_cut_CSV__5911->SetBinContent(18,9.037644);
   Jets_cut_CSV__5911->SetBinContent(19,11.79726);
   Jets_cut_CSV__5911->SetBinContent(20,60.0359);
   Jets_cut_CSV__5911->SetBinError(1,2.531521);
   Jets_cut_CSV__5911->SetBinError(2,1.03118);
   Jets_cut_CSV__5911->SetBinError(3,0.7380496);
   Jets_cut_CSV__5911->SetBinError(4,0.6113036);
   Jets_cut_CSV__5911->SetBinError(5,0.5217898);
   Jets_cut_CSV__5911->SetBinError(6,0.4559815);
   Jets_cut_CSV__5911->SetBinError(7,0.4001565);
   Jets_cut_CSV__5911->SetBinError(8,0.3571145);
   Jets_cut_CSV__5911->SetBinError(9,0.3259713);
   Jets_cut_CSV__5911->SetBinError(10,0.3172714);
   Jets_cut_CSV__5911->SetBinError(11,0.2918328);
   Jets_cut_CSV__5911->SetBinError(12,0.2837194);
   Jets_cut_CSV__5911->SetBinError(13,0.2645545);
   Jets_cut_CSV__5911->SetBinError(14,0.2331221);
   Jets_cut_CSV__5911->SetBinError(15,0.2380083);
   Jets_cut_CSV__5911->SetBinError(16,0.2386671);
   Jets_cut_CSV__5911->SetBinError(17,0.2189618);
   Jets_cut_CSV__5911->SetBinError(18,0.2366522);
   Jets_cut_CSV__5911->SetBinError(19,0.2684136);
   Jets_cut_CSV__5911->SetBinError(20,0.6079552);
   Jets_cut_CSV__5911->SetEntries(1296561);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jets_cut_CSV__5911->SetLineColor(ci);
   Jets_cut_CSV__5911->GetXaxis()->SetTitle("BvL tagging score");
   Jets_cut_CSV__5911->GetXaxis()->SetRange(1,20);
   Jets_cut_CSV__5911->GetXaxis()->SetLabelFont(42);
   Jets_cut_CSV__5911->GetXaxis()->SetTitleOffset(1);
   Jets_cut_CSV__5911->GetXaxis()->SetTitleFont(42);
   Jets_cut_CSV__5911->GetYaxis()->SetTitle("Events/0.05");
   Jets_cut_CSV__5911->GetYaxis()->SetLabelFont(42);
   Jets_cut_CSV__5911->GetYaxis()->SetLabelSize(0.05);
   Jets_cut_CSV__5911->GetYaxis()->SetTitleSize(0.057);
   Jets_cut_CSV__5911->GetYaxis()->SetTitleOffset(1.2);
   Jets_cut_CSV__5911->GetYaxis()->SetTitleFont(42);
   Jets_cut_CSV__5911->GetZaxis()->SetLabelFont(42);
   Jets_cut_CSV__5911->GetZaxis()->SetTitleOffset(1);
   Jets_cut_CSV__5911->GetZaxis()->SetTitleFont(42);
   Jets_cut_CSV__5911->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CSV_ZHcc_DHZfirst_16->Modified();
   CSV_ZHcc_DHZfirst_16->cd();
   CSV_ZHcc_DHZfirst_16->SetSelected(CSV_ZHcc_DHZfirst_16);
}
