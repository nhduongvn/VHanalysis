#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CSV_SingleTop_tagOnly_17()
{
//=========Macro generated from canvas: CSV_SingleTop_tagOnly_17/CSV_SingleTop_tagOnly_17
//=========  (Fri May 24 12:43:29 2024) by ROOT version 6.28/10
   TCanvas *CSV_SingleTop_tagOnly_17 = new TCanvas("CSV_SingleTop_tagOnly_17", "CSV_SingleTop_tagOnly_17",0,0,600,600);
   gStyle->SetOptStat(0);
   CSV_SingleTop_tagOnly_17->SetHighLightColor(2);
   CSV_SingleTop_tagOnly_17->Range(-0.2,-1174989,1.133333,1.05749e+07);
   CSV_SingleTop_tagOnly_17->SetFillColor(0);
   CSV_SingleTop_tagOnly_17->SetFillStyle(4000);
   CSV_SingleTop_tagOnly_17->SetBorderMode(0);
   CSV_SingleTop_tagOnly_17->SetBorderSize(2);
   CSV_SingleTop_tagOnly_17->SetLeftMargin(0.15);
   CSV_SingleTop_tagOnly_17->SetFrameFillStyle(1000);
   CSV_SingleTop_tagOnly_17->SetFrameBorderMode(0);
   CSV_SingleTop_tagOnly_17->SetFrameFillStyle(1000);
   CSV_SingleTop_tagOnly_17->SetFrameBorderMode(0);
   
   TH1D *Jets_cut_CSV__5150 = new TH1D("Jets_cut_CSV__5150","",20,0,1);
   Jets_cut_CSV__5150->SetBinContent(1,8952297);
   Jets_cut_CSV__5150->SetBinContent(2,1021780);
   Jets_cut_CSV__5150->SetBinContent(3,519657.5);
   Jets_cut_CSV__5150->SetBinContent(4,361528.2);
   Jets_cut_CSV__5150->SetBinContent(5,287974.9);
   Jets_cut_CSV__5150->SetBinContent(6,249374.1);
   Jets_cut_CSV__5150->SetBinContent(7,185450);
   Jets_cut_CSV__5150->SetBinContent(8,165567.9);
   Jets_cut_CSV__5150->SetBinContent(9,150975.9);
   Jets_cut_CSV__5150->SetBinContent(10,147153.6);
   Jets_cut_CSV__5150->SetBinContent(11,149231.3);
   Jets_cut_CSV__5150->SetBinContent(12,151539.7);
   Jets_cut_CSV__5150->SetBinContent(13,150670.8);
   Jets_cut_CSV__5150->SetBinContent(14,165725.2);
   Jets_cut_CSV__5150->SetBinContent(15,179992.3);
   Jets_cut_CSV__5150->SetBinContent(16,209413);
   Jets_cut_CSV__5150->SetBinContent(17,239916.1);
   Jets_cut_CSV__5150->SetBinContent(18,290832.1);
   Jets_cut_CSV__5150->SetBinContent(19,456432);
   Jets_cut_CSV__5150->SetBinContent(20,3316071);
   Jets_cut_CSV__5150->SetBinError(1,1063.731);
   Jets_cut_CSV__5150->SetBinError(2,363.9708);
   Jets_cut_CSV__5150->SetBinError(3,258.2733);
   Jets_cut_CSV__5150->SetBinError(4,214.4249);
   Jets_cut_CSV__5150->SetBinError(5,190.9347);
   Jets_cut_CSV__5150->SetBinError(6,177.8164);
   Jets_cut_CSV__5150->SetBinError(7,142.0611);
   Jets_cut_CSV__5150->SetBinError(8,131.4426);
   Jets_cut_CSV__5150->SetBinError(9,124.0295);
   Jets_cut_CSV__5150->SetBinError(10,121.4396);
   Jets_cut_CSV__5150->SetBinError(11,121.4791);
   Jets_cut_CSV__5150->SetBinError(12,121.8838);
   Jets_cut_CSV__5150->SetBinError(13,122.6544);
   Jets_cut_CSV__5150->SetBinError(14,131.895);
   Jets_cut_CSV__5150->SetBinError(15,137.5455);
   Jets_cut_CSV__5150->SetBinError(16,148.0541);
   Jets_cut_CSV__5150->SetBinError(17,157.6658);
   Jets_cut_CSV__5150->SetBinError(18,173.407);
   Jets_cut_CSV__5150->SetBinError(19,217.0174);
   Jets_cut_CSV__5150->SetBinError(20,584.3517);
   Jets_cut_CSV__5150->SetEntries(3.270068e+08);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Jets_cut_CSV__5150->SetLineColor(ci);
   Jets_cut_CSV__5150->GetXaxis()->SetTitle("BvL tagging score");
   Jets_cut_CSV__5150->GetXaxis()->SetRange(1,20);
   Jets_cut_CSV__5150->GetXaxis()->SetLabelFont(42);
   Jets_cut_CSV__5150->GetXaxis()->SetTitleOffset(1);
   Jets_cut_CSV__5150->GetXaxis()->SetTitleFont(42);
   Jets_cut_CSV__5150->GetYaxis()->SetTitle("Events/0.05");
   Jets_cut_CSV__5150->GetYaxis()->SetLabelFont(42);
   Jets_cut_CSV__5150->GetYaxis()->SetLabelSize(0.05);
   Jets_cut_CSV__5150->GetYaxis()->SetTitleSize(0.057);
   Jets_cut_CSV__5150->GetYaxis()->SetTitleOffset(1.2);
   Jets_cut_CSV__5150->GetYaxis()->SetTitleFont(42);
   Jets_cut_CSV__5150->GetZaxis()->SetLabelFont(42);
   Jets_cut_CSV__5150->GetZaxis()->SetTitleOffset(1);
   Jets_cut_CSV__5150->GetZaxis()->SetTitleFont(42);
   Jets_cut_CSV__5150->Draw("hist");
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 36.8 fb^{-1}");
   tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CSV_SingleTop_tagOnly_17->Modified();
   CSV_SingleTop_tagOnly_17->cd();
   CSV_SingleTop_tagOnly_17->SetSelected(CSV_SingleTop_tagOnly_17);
}
