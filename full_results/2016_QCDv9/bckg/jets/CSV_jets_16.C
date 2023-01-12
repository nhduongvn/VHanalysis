#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CSV_jets_16()
{
//=========Macro generated from canvas: CSV_jets_16/CSV_jets_16
//=========  (Mon Dec 19 11:02:46 2022) by ROOT version 6.26/06
   TCanvas *CSV_jets_16 = new TCanvas("CSV_jets_16", "CSV_jets_16",0,0,600,600);
   CSV_jets_16->SetHighLightColor(2);
   CSV_jets_16->Range(-0.2183529,-3.143051e+11,1.171633,2.304904e+12);
   CSV_jets_16->SetFillColor(0);
   CSV_jets_16->SetFillStyle(4000);
   CSV_jets_16->SetBorderMode(0);
   CSV_jets_16->SetBorderSize(2);
   CSV_jets_16->SetLeftMargin(0.15709);
   CSV_jets_16->SetRightMargin(0.1234783);
   CSV_jets_16->SetBottomMargin(0.12);
   CSV_jets_16->SetFrameFillStyle(1000);
   CSV_jets_16->SetFrameBorderMode(0);
   CSV_jets_16->SetFrameFillStyle(1000);
   CSV_jets_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(2.042983e+12);
   
   TH1F *st_stack_5 = new TH1F("st_stack_5","",20,0,1);
   st_stack_5->SetMinimum(0);
   st_stack_5->SetMaximum(2.042983e+12);
   st_stack_5->SetDirectory(0);
   st_stack_5->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_5->SetLineColor(ci);
   st_stack_5->GetXaxis()->SetTitle("BvL tagging score");
   st_stack_5->GetXaxis()->SetRange(1,20);
   st_stack_5->GetXaxis()->SetLabelFont(42);
   st_stack_5->GetXaxis()->SetTitleOffset(1);
   st_stack_5->GetXaxis()->SetTitleFont(42);
   st_stack_5->GetYaxis()->SetTitle("Events/0.05");
   st_stack_5->GetYaxis()->SetLabelFont(42);
   st_stack_5->GetYaxis()->SetTitleSize(0.037);
   st_stack_5->GetYaxis()->SetTitleFont(42);
   st_stack_5->GetZaxis()->SetLabelFont(42);
   st_stack_5->GetZaxis()->SetTitleOffset(1);
   st_stack_5->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_5);
   
   
   TH1D *VbbHcc_jets_CSV_stack_1 = new TH1D("VbbHcc_jets_CSV_stack_1","",20,0,1);
   VbbHcc_jets_CSV_stack_1->SetBinContent(1,1.361923e+12);
   VbbHcc_jets_CSV_stack_1->SetBinContent(2,1.114341e+11);
   VbbHcc_jets_CSV_stack_1->SetBinContent(3,3.821205e+10);
   VbbHcc_jets_CSV_stack_1->SetBinContent(4,1.974e+10);
   VbbHcc_jets_CSV_stack_1->SetBinContent(5,1.249231e+10);
   VbbHcc_jets_CSV_stack_1->SetBinContent(6,8.725101e+09);
   VbbHcc_jets_CSV_stack_1->SetBinContent(7,6.617544e+09);
   VbbHcc_jets_CSV_stack_1->SetBinContent(8,5.191623e+09);
   VbbHcc_jets_CSV_stack_1->SetBinContent(9,4.163522e+09);
   VbbHcc_jets_CSV_stack_1->SetBinContent(10,3.503876e+09);
   VbbHcc_jets_CSV_stack_1->SetBinContent(11,3.088942e+09);
   VbbHcc_jets_CSV_stack_1->SetBinContent(12,2.715188e+09);
   VbbHcc_jets_CSV_stack_1->SetBinContent(13,2.438338e+09);
   VbbHcc_jets_CSV_stack_1->SetBinContent(14,2.273773e+09);
   VbbHcc_jets_CSV_stack_1->SetBinContent(15,2.182092e+09);
   VbbHcc_jets_CSV_stack_1->SetBinContent(16,2.258184e+09);
   VbbHcc_jets_CSV_stack_1->SetBinContent(17,2.275613e+09);
   VbbHcc_jets_CSV_stack_1->SetBinContent(18,2.560555e+09);
   VbbHcc_jets_CSV_stack_1->SetBinContent(19,3.549699e+09);
   VbbHcc_jets_CSV_stack_1->SetBinContent(20,1.748902e+10);
   VbbHcc_jets_CSV_stack_1->SetBinError(1,1.512981e+08);
   VbbHcc_jets_CSV_stack_1->SetBinError(2,4.332751e+07);
   VbbHcc_jets_CSV_stack_1->SetBinError(3,2.532223e+07);
   VbbHcc_jets_CSV_stack_1->SetBinError(4,1.818118e+07);
   VbbHcc_jets_CSV_stack_1->SetBinError(5,1.446265e+07);
   VbbHcc_jets_CSV_stack_1->SetBinError(6,1.208139e+07);
   VbbHcc_jets_CSV_stack_1->SetBinError(7,1.05164e+07);
   VbbHcc_jets_CSV_stack_1->SetBinError(8,9308398);
   VbbHcc_jets_CSV_stack_1->SetBinError(9,8331686);
   VbbHcc_jets_CSV_stack_1->SetBinError(10,7635669);
   VbbHcc_jets_CSV_stack_1->SetBinError(11,7166202);
   VbbHcc_jets_CSV_stack_1->SetBinError(12,6713340);
   VbbHcc_jets_CSV_stack_1->SetBinError(13,6358044);
   VbbHcc_jets_CSV_stack_1->SetBinError(14,6135217);
   VbbHcc_jets_CSV_stack_1->SetBinError(15,6002988);
   VbbHcc_jets_CSV_stack_1->SetBinError(16,6103152);
   VbbHcc_jets_CSV_stack_1->SetBinError(17,6122564);
   VbbHcc_jets_CSV_stack_1->SetBinError(18,6484720);
   VbbHcc_jets_CSV_stack_1->SetBinError(19,7630068);
   VbbHcc_jets_CSV_stack_1->SetBinError(20,1.687395e+07);
   VbbHcc_jets_CSV_stack_1->SetEntries(6.712362e+08);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_jets_CSV_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_CSV_stack_1->SetLineColor(ci);
   VbbHcc_jets_CSV_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_jets_CSV_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_CSV_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_CSV_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_CSV_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_CSV_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_CSV_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_CSV_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_CSV_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_CSV_stack_1,"");
   
   TH1D *VbbHcc_jets_CSV_stack_2 = new TH1D("VbbHcc_jets_CSV_stack_2","",20,0,1);
   VbbHcc_jets_CSV_stack_2->SetBinContent(1,6.598025e+07);
   VbbHcc_jets_CSV_stack_2->SetBinContent(2,8315867);
   VbbHcc_jets_CSV_stack_2->SetBinContent(3,3882505);
   VbbHcc_jets_CSV_stack_2->SetBinContent(4,2533346);
   VbbHcc_jets_CSV_stack_2->SetBinContent(5,1947291);
   VbbHcc_jets_CSV_stack_2->SetBinContent(6,1620480);
   VbbHcc_jets_CSV_stack_2->SetBinContent(7,1418488);
   VbbHcc_jets_CSV_stack_2->SetBinContent(8,1278350);
   VbbHcc_jets_CSV_stack_2->SetBinContent(9,1166217);
   VbbHcc_jets_CSV_stack_2->SetBinContent(10,1117868);
   VbbHcc_jets_CSV_stack_2->SetBinContent(11,1111127);
   VbbHcc_jets_CSV_stack_2->SetBinContent(12,1099128);
   VbbHcc_jets_CSV_stack_2->SetBinContent(13,1090049);
   VbbHcc_jets_CSV_stack_2->SetBinContent(14,1131656);
   VbbHcc_jets_CSV_stack_2->SetBinContent(15,1207376);
   VbbHcc_jets_CSV_stack_2->SetBinContent(16,1378026);
   VbbHcc_jets_CSV_stack_2->SetBinContent(17,1535589);
   VbbHcc_jets_CSV_stack_2->SetBinContent(18,1889341);
   VbbHcc_jets_CSV_stack_2->SetBinContent(19,2915279);
   VbbHcc_jets_CSV_stack_2->SetBinContent(20,1.741997e+07);
   VbbHcc_jets_CSV_stack_2->SetBinError(1,2255.712);
   VbbHcc_jets_CSV_stack_2->SetBinError(2,789.7165);
   VbbHcc_jets_CSV_stack_2->SetBinError(3,537.2286);
   VbbHcc_jets_CSV_stack_2->SetBinError(4,433.6521);
   VbbHcc_jets_CSV_stack_2->SetBinError(5,379.6481);
   VbbHcc_jets_CSV_stack_2->SetBinError(6,345.9154);
   VbbHcc_jets_CSV_stack_2->SetBinError(7,323.3224);
   VbbHcc_jets_CSV_stack_2->SetBinError(8,306.6023);
   VbbHcc_jets_CSV_stack_2->SetBinError(9,292.505);
   VbbHcc_jets_CSV_stack_2->SetBinError(10,286.0969);
   VbbHcc_jets_CSV_stack_2->SetBinError(11,284.9624);
   VbbHcc_jets_CSV_stack_2->SetBinError(12,283.1012);
   VbbHcc_jets_CSV_stack_2->SetBinError(13,281.6094);
   VbbHcc_jets_CSV_stack_2->SetBinError(14,286.6715);
   VbbHcc_jets_CSV_stack_2->SetBinError(15,295.8399);
   VbbHcc_jets_CSV_stack_2->SetBinError(16,315.79);
   VbbHcc_jets_CSV_stack_2->SetBinError(17,333.0591);
   VbbHcc_jets_CSV_stack_2->SetBinError(18,369.1633);
   VbbHcc_jets_CSV_stack_2->SetBinError(19,458.3915);
   VbbHcc_jets_CSV_stack_2->SetBinError(20,1121.651);
   VbbHcc_jets_CSV_stack_2->SetEntries(1.778388e+09);

   ci = TColor::GetColor("#990099");
   VbbHcc_jets_CSV_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_CSV_stack_2->SetLineColor(ci);
   VbbHcc_jets_CSV_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_jets_CSV_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_CSV_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_CSV_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_CSV_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_CSV_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_CSV_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_CSV_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_CSV_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_CSV_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_jets_CSV_stack_2","t#bar{t}","F");

   ci = TColor::GetColor("#990099");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_jets_CSV_stack_1","QCD","F");

   ci = TColor::GetColor("#ff6600");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 35.9 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CSV_jets_16->Modified();
   CSV_jets_16->cd();
   CSV_jets_16->SetSelected(CSV_jets_16);
}
