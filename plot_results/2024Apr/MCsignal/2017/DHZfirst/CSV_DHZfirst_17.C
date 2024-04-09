#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CSV_DHZfirst_17()
{
//=========Macro generated from canvas: CSV_DHZfirst_17/CSV_DHZfirst_17
//=========  (Mon Apr  8 11:27:55 2024) by ROOT version 6.28/10
   TCanvas *CSV_DHZfirst_17 = new TCanvas("CSV_DHZfirst_17", "CSV_DHZfirst_17",0,0,600,600);
   gStyle->SetOptStat(0);
   CSV_DHZfirst_17->SetHighLightColor(2);
   CSV_DHZfirst_17->Range(-0.2,-92.53249,1.133333,832.7924);
   CSV_DHZfirst_17->SetFillColor(0);
   CSV_DHZfirst_17->SetFillStyle(4000);
   CSV_DHZfirst_17->SetBorderMode(0);
   CSV_DHZfirst_17->SetBorderSize(2);
   CSV_DHZfirst_17->SetLeftMargin(0.15);
   CSV_DHZfirst_17->SetFrameFillStyle(1000);
   CSV_DHZfirst_17->SetFrameBorderMode(0);
   CSV_DHZfirst_17->SetFrameFillStyle(1000);
   CSV_DHZfirst_17->SetFrameBorderMode(0);
   
   TH1D *Jets_cut_CSV__377 = new TH1D("Jets_cut_CSV__377","",20,0,1);
   Jets_cut_CSV__377->SetBinContent(1,705.0094);
   Jets_cut_CSV__377->SetBinContent(2,116.6734);
   Jets_cut_CSV__377->SetBinContent(3,59.64179);
   Jets_cut_CSV__377->SetBinContent(4,40.12402);
   Jets_cut_CSV__377->SetBinContent(5,29.92465);
   Jets_cut_CSV__377->SetBinContent(6,23.92782);
   Jets_cut_CSV__377->SetBinContent(7,18.15502);
   Jets_cut_CSV__377->SetBinContent(8,14.96935);
   Jets_cut_CSV__377->SetBinContent(9,12.23162);
   Jets_cut_CSV__377->SetBinContent(10,10.68493);
   Jets_cut_CSV__377->SetBinContent(11,9.81143);
   Jets_cut_CSV__377->SetBinContent(12,8.635431);
   Jets_cut_CSV__377->SetBinContent(13,7.430914);
   Jets_cut_CSV__377->SetBinContent(14,7.274707);
   Jets_cut_CSV__377->SetBinContent(15,6.682042);
   Jets_cut_CSV__377->SetBinContent(16,6.781292);
   Jets_cut_CSV__377->SetBinContent(17,6.488568);
   Jets_cut_CSV__377->SetBinContent(18,6.710988);
   Jets_cut_CSV__377->SetBinContent(19,8.664804);
   Jets_cut_CSV__377->SetBinContent(20,47.94111);
   Jets_cut_CSV__377->SetBinError(1,0.9505449);
   Jets_cut_CSV__377->SetBinError(2,0.3892741);
   Jets_cut_CSV__377->SetBinError(3,0.2793795);
   Jets_cut_CSV__377->SetBinError(4,0.228884);
   Jets_cut_CSV__377->SetBinError(5,0.1984905);
   Jets_cut_CSV__377->SetBinError(6,0.1782662);
   Jets_cut_CSV__377->SetBinError(7,0.1489958);
   Jets_cut_CSV__377->SetBinError(8,0.1347377);
   Jets_cut_CSV__377->SetBinError(9,0.1218269);
   Jets_cut_CSV__377->SetBinError(10,0.1136973);
   Jets_cut_CSV__377->SetBinError(11,0.1090583);
   Jets_cut_CSV__377->SetBinError(12,0.1025822);
   Jets_cut_CSV__377->SetBinError(13,0.09529913);
   Jets_cut_CSV__377->SetBinError(14,0.09612601);
   Jets_cut_CSV__377->SetBinError(15,0.09213998);
   Jets_cut_CSV__377->SetBinError(16,0.09344136);
   Jets_cut_CSV__377->SetBinError(17,0.09210288);
   Jets_cut_CSV__377->SetBinError(18,0.09400919);
   Jets_cut_CSV__377->SetBinError(19,0.1071261);
   Jets_cut_CSV__377->SetBinError(20,0.2565408);
   Jets_cut_CSV__377->SetEntries(1023696);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jets_cut_CSV__377->SetLineColor(ci);
   Jets_cut_CSV__377->GetXaxis()->SetTitle("BvL tagging score");
   Jets_cut_CSV__377->GetXaxis()->SetRange(1,20);
   Jets_cut_CSV__377->GetXaxis()->SetLabelFont(42);
   Jets_cut_CSV__377->GetXaxis()->SetTitleOffset(1);
   Jets_cut_CSV__377->GetXaxis()->SetTitleFont(42);
   Jets_cut_CSV__377->GetYaxis()->SetTitle("Events/0.05");
   Jets_cut_CSV__377->GetYaxis()->SetLabelFont(42);
   Jets_cut_CSV__377->GetYaxis()->SetLabelSize(0.05);
   Jets_cut_CSV__377->GetYaxis()->SetTitleSize(0.057);
   Jets_cut_CSV__377->GetYaxis()->SetTitleOffset(1.2);
   Jets_cut_CSV__377->GetYaxis()->SetTitleFont(42);
   Jets_cut_CSV__377->GetZaxis()->SetLabelFont(42);
   Jets_cut_CSV__377->GetZaxis()->SetTitleOffset(1);
   Jets_cut_CSV__377->GetZaxis()->SetTitleFont(42);
   Jets_cut_CSV__377->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CSV_DHZfirst_17->Modified();
   CSV_DHZfirst_17->cd();
   CSV_DHZfirst_17->SetSelected(CSV_DHZfirst_17);
}
