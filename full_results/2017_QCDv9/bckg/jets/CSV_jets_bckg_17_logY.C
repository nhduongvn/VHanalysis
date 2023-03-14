#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CSV_jets_bckg_17_logY()
{
//=========Macro generated from canvas: CSV_jets_bckg_17/CSV_jets_bckg_17
//=========  (Thu Mar  9 13:30:10 2023) by ROOT version 6.26/06
   TCanvas *CSV_jets_bckg_17 = new TCanvas("CSV_jets_bckg_17", "CSV_jets_bckg_17",0,0,600,600);
   CSV_jets_bckg_17->SetHighLightColor(2);
   CSV_jets_bckg_17->Range(-0.2183529,-1.706692,1.171633,14.07665);
   CSV_jets_bckg_17->SetFillColor(0);
   CSV_jets_bckg_17->SetFillStyle(4000);
   CSV_jets_bckg_17->SetBorderMode(0);
   CSV_jets_bckg_17->SetBorderSize(2);
   CSV_jets_bckg_17->SetLogy();
   CSV_jets_bckg_17->SetLeftMargin(0.15709);
   CSV_jets_bckg_17->SetRightMargin(0.1234783);
   CSV_jets_bckg_17->SetBottomMargin(0.12);
   CSV_jets_bckg_17->SetFrameFillStyle(1000);
   CSV_jets_bckg_17->SetFrameBorderMode(0);
   CSV_jets_bckg_17->SetFrameFillStyle(1000);
   CSV_jets_bckg_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(9.847995e+11);
   
   TH1F *st_stack_10 = new TH1F("st_stack_10","",20,0,1);
   st_stack_10->SetMinimum(1.539249);
   st_stack_10->SetMaximum(3.150048e+12);
   st_stack_10->SetDirectory(0);
   st_stack_10->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_10->SetLineColor(ci);
   st_stack_10->GetXaxis()->SetTitle("BvL tagging score");
   st_stack_10->GetXaxis()->SetRange(1,20);
   st_stack_10->GetXaxis()->SetLabelFont(42);
   st_stack_10->GetXaxis()->SetTitleOffset(1);
   st_stack_10->GetXaxis()->SetTitleFont(42);
   st_stack_10->GetYaxis()->SetTitle("Event/0.05");
   st_stack_10->GetYaxis()->SetLabelFont(42);
   st_stack_10->GetYaxis()->SetTitleSize(0.037);
   st_stack_10->GetYaxis()->SetTitleFont(42);
   st_stack_10->GetZaxis()->SetLabelFont(42);
   st_stack_10->GetZaxis()->SetTitleOffset(1);
   st_stack_10->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_10);
   
   
   TH1D *VbbHcc_jets_CSV_stack_1 = new TH1D("VbbHcc_jets_CSV_stack_1","",20,0,1);
   VbbHcc_jets_CSV_stack_1->SetBinContent(1,8.173294e+11);
   VbbHcc_jets_CSV_stack_1->SetBinContent(2,4.804225e+10);
   VbbHcc_jets_CSV_stack_1->SetBinContent(3,1.842866e+10);
   VbbHcc_jets_CSV_stack_1->SetBinContent(4,1.027606e+10);
   VbbHcc_jets_CSV_stack_1->SetBinContent(5,6.693667e+09);
   VbbHcc_jets_CSV_stack_1->SetBinContent(6,4.859178e+09);
   VbbHcc_jets_CSV_stack_1->SetBinContent(7,3.7792e+09);
   VbbHcc_jets_CSV_stack_1->SetBinContent(8,3.040284e+09);
   VbbHcc_jets_CSV_stack_1->SetBinContent(9,2.477297e+09);
   VbbHcc_jets_CSV_stack_1->SetBinContent(10,2.123655e+09);
   VbbHcc_jets_CSV_stack_1->SetBinContent(11,1.903118e+09);
   VbbHcc_jets_CSV_stack_1->SetBinContent(12,1.693559e+09);
   VbbHcc_jets_CSV_stack_1->SetBinContent(13,1.50469e+09);
   VbbHcc_jets_CSV_stack_1->SetBinContent(14,1.410366e+09);
   VbbHcc_jets_CSV_stack_1->SetBinContent(15,1.365278e+09);
   VbbHcc_jets_CSV_stack_1->SetBinContent(16,1.403242e+09);
   VbbHcc_jets_CSV_stack_1->SetBinContent(17,1.447389e+09);
   VbbHcc_jets_CSV_stack_1->SetBinContent(18,1.565337e+09);
   VbbHcc_jets_CSV_stack_1->SetBinContent(19,2.187551e+09);
   VbbHcc_jets_CSV_stack_1->SetBinContent(20,1.351499e+10);
   VbbHcc_jets_CSV_stack_1->SetBinError(1,1.076591e+08);
   VbbHcc_jets_CSV_stack_1->SetBinError(2,2.596809e+07);
   VbbHcc_jets_CSV_stack_1->SetBinError(3,1.605831e+07);
   VbbHcc_jets_CSV_stack_1->SetBinError(4,1.198578e+07);
   VbbHcc_jets_CSV_stack_1->SetBinError(5,9663525);
   VbbHcc_jets_CSV_stack_1->SetBinError(6,8228790);
   VbbHcc_jets_CSV_stack_1->SetBinError(7,7247291);
   VbbHcc_jets_CSV_stack_1->SetBinError(8,6494538);
   VbbHcc_jets_CSV_stack_1->SetBinError(9,5853944);
   VbbHcc_jets_CSV_stack_1->SetBinError(10,5411075);
   VbbHcc_jets_CSV_stack_1->SetBinError(11,5116672);
   VbbHcc_jets_CSV_stack_1->SetBinError(12,4819983);
   VbbHcc_jets_CSV_stack_1->SetBinError(13,4536053);
   VbbHcc_jets_CSV_stack_1->SetBinError(14,4382893);
   VbbHcc_jets_CSV_stack_1->SetBinError(15,4310917);
   VbbHcc_jets_CSV_stack_1->SetBinError(16,4365794);
   VbbHcc_jets_CSV_stack_1->SetBinError(17,4430846);
   VbbHcc_jets_CSV_stack_1->SetBinError(18,4593888);
   VbbHcc_jets_CSV_stack_1->SetBinError(19,5422549);
   VbbHcc_jets_CSV_stack_1->SetBinError(20,1.352938e+07);
   VbbHcc_jets_CSV_stack_1->SetEntries(6.351199e+08);

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
   VbbHcc_jets_CSV_stack_2->SetBinContent(1,5.413145e+07);
   VbbHcc_jets_CSV_stack_2->SetBinContent(2,5977334);
   VbbHcc_jets_CSV_stack_2->SetBinContent(3,2983904);
   VbbHcc_jets_CSV_stack_2->SetBinContent(4,2050777);
   VbbHcc_jets_CSV_stack_2->SetBinContent(5,1612043);
   VbbHcc_jets_CSV_stack_2->SetBinContent(6,1374288);
   VbbHcc_jets_CSV_stack_2->SetBinContent(7,1220038);
   VbbHcc_jets_CSV_stack_2->SetBinContent(8,1113838);
   VbbHcc_jets_CSV_stack_2->SetBinContent(9,1019537);
   VbbHcc_jets_CSV_stack_2->SetBinContent(10,996432.1);
   VbbHcc_jets_CSV_stack_2->SetBinContent(11,1011132);
   VbbHcc_jets_CSV_stack_2->SetBinContent(12,1020596);
   VbbHcc_jets_CSV_stack_2->SetBinContent(13,1002937);
   VbbHcc_jets_CSV_stack_2->SetBinContent(14,1057041);
   VbbHcc_jets_CSV_stack_2->SetBinContent(15,1141800);
   VbbHcc_jets_CSV_stack_2->SetBinContent(16,1325023);
   VbbHcc_jets_CSV_stack_2->SetBinContent(17,1515878);
   VbbHcc_jets_CSV_stack_2->SetBinContent(18,1835714);
   VbbHcc_jets_CSV_stack_2->SetBinContent(19,2872244);
   VbbHcc_jets_CSV_stack_2->SetBinContent(20,2.079099e+07);
   VbbHcc_jets_CSV_stack_2->SetBinError(1,1959.425);
   VbbHcc_jets_CSV_stack_2->SetBinError(2,645.9656);
   VbbHcc_jets_CSV_stack_2->SetBinError(3,455.1686);
   VbbHcc_jets_CSV_stack_2->SetBinError(4,376.7191);
   VbbHcc_jets_CSV_stack_2->SetBinError(5,333.4145);
   VbbHcc_jets_CSV_stack_2->SetBinError(6,307.371);
   VbbHcc_jets_CSV_stack_2->SetBinError(7,289.153);
   VbbHcc_jets_CSV_stack_2->SetBinError(8,275.8311);
   VbbHcc_jets_CSV_stack_2->SetBinError(9,263.4609);
   VbbHcc_jets_CSV_stack_2->SetBinError(10,260.0576);
   VbbHcc_jets_CSV_stack_2->SetBinError(11,261.6172);
   VbbHcc_jets_CSV_stack_2->SetBinError(12,262.4657);
   VbbHcc_jets_CSV_stack_2->SetBinError(13,259.8091);
   VbbHcc_jets_CSV_stack_2->SetBinError(14,266.4078);
   VbbHcc_jets_CSV_stack_2->SetBinError(15,276.5678);
   VbbHcc_jets_CSV_stack_2->SetBinError(16,297.6008);
   VbbHcc_jets_CSV_stack_2->SetBinError(17,317.9537);
   VbbHcc_jets_CSV_stack_2->SetBinError(18,349.5906);
   VbbHcc_jets_CSV_stack_2->SetBinError(19,436.943);
   VbbHcc_jets_CSV_stack_2->SetBinError(20,1174.675);
   VbbHcc_jets_CSV_stack_2->SetEntries(1.727621e+09);

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   CSV_jets_bckg_17->Modified();
   CSV_jets_bckg_17->cd();
   CSV_jets_bckg_17->SetSelected(CSV_jets_bckg_17);
}
