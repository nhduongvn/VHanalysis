#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CSV_jets_bckg_16()
{
//=========Macro generated from canvas: CSV_jets_bckg_16/CSV_jets_bckg_16
//=========  (Fri Mar 10 12:13:58 2023) by ROOT version 6.26/06
   TCanvas *CSV_jets_bckg_16 = new TCanvas("CSV_jets_bckg_16", "CSV_jets_bckg_16",0,0,600,600);
   CSV_jets_bckg_16->SetHighLightColor(2);
   CSV_jets_bckg_16->Range(-0.2183529,-1.239934e+11,1.171633,9.092851e+11);
   CSV_jets_bckg_16->SetFillColor(0);
   CSV_jets_bckg_16->SetFillStyle(4000);
   CSV_jets_bckg_16->SetBorderMode(0);
   CSV_jets_bckg_16->SetBorderSize(2);
   CSV_jets_bckg_16->SetLeftMargin(0.15709);
   CSV_jets_bckg_16->SetRightMargin(0.1234783);
   CSV_jets_bckg_16->SetBottomMargin(0.12);
   CSV_jets_bckg_16->SetFrameFillStyle(1000);
   CSV_jets_bckg_16->SetFrameBorderMode(0);
   CSV_jets_bckg_16->SetFrameFillStyle(1000);
   CSV_jets_bckg_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(8.059573e+11);
   
   TH1F *st_stack_8 = new TH1F("st_stack_8","",20,0,1);
   st_stack_8->SetMinimum(0);
   st_stack_8->SetMaximum(8.059573e+11);
   st_stack_8->SetDirectory(0);
   st_stack_8->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_8->SetLineColor(ci);
   st_stack_8->GetXaxis()->SetTitle("BvL tagging score");
   st_stack_8->GetXaxis()->SetRange(1,20);
   st_stack_8->GetXaxis()->SetLabelFont(42);
   st_stack_8->GetXaxis()->SetTitleOffset(1);
   st_stack_8->GetXaxis()->SetTitleFont(42);
   st_stack_8->GetYaxis()->SetTitle("Event/0.05");
   st_stack_8->GetYaxis()->SetLabelFont(42);
   st_stack_8->GetYaxis()->SetTitleSize(0.037);
   st_stack_8->GetYaxis()->SetTitleFont(42);
   st_stack_8->GetZaxis()->SetLabelFont(42);
   st_stack_8->GetZaxis()->SetTitleOffset(1);
   st_stack_8->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_8);
   
   
   TH1D *VbbHcc_jets_CSV_stack_1 = new TH1D("VbbHcc_jets_CSV_stack_1","",20,0,1);
   VbbHcc_jets_CSV_stack_1->SetBinContent(1,6.688982e+11);
   VbbHcc_jets_CSV_stack_1->SetBinContent(2,4.110028e+10);
   VbbHcc_jets_CSV_stack_1->SetBinContent(3,1.476056e+10);
   VbbHcc_jets_CSV_stack_1->SetBinContent(4,7.834651e+09);
   VbbHcc_jets_CSV_stack_1->SetBinContent(5,4.996364e+09);
   VbbHcc_jets_CSV_stack_1->SetBinContent(6,3.542598e+09);
   VbbHcc_jets_CSV_stack_1->SetBinContent(7,2.682739e+09);
   VbbHcc_jets_CSV_stack_1->SetBinContent(8,2.133331e+09);
   VbbHcc_jets_CSV_stack_1->SetBinContent(9,1.731885e+09);
   VbbHcc_jets_CSV_stack_1->SetBinContent(10,1.476411e+09);
   VbbHcc_jets_CSV_stack_1->SetBinContent(11,1.31354e+09);
   VbbHcc_jets_CSV_stack_1->SetBinContent(12,1.158505e+09);
   VbbHcc_jets_CSV_stack_1->SetBinContent(13,1.041441e+09);
   VbbHcc_jets_CSV_stack_1->SetBinContent(14,9.850577e+08);
   VbbHcc_jets_CSV_stack_1->SetBinContent(15,9.526345e+08);
   VbbHcc_jets_CSV_stack_1->SetBinContent(16,9.944565e+08);
   VbbHcc_jets_CSV_stack_1->SetBinContent(17,1.016659e+09);
   VbbHcc_jets_CSV_stack_1->SetBinContent(18,1.147281e+09);
   VbbHcc_jets_CSV_stack_1->SetBinContent(19,1.629009e+09);
   VbbHcc_jets_CSV_stack_1->SetBinContent(20,9.16244e+09);
   VbbHcc_jets_CSV_stack_1->SetBinError(1,1.106546e+08);
   VbbHcc_jets_CSV_stack_1->SetBinError(2,2.718536e+07);
   VbbHcc_jets_CSV_stack_1->SetBinError(3,1.626453e+07);
   VbbHcc_jets_CSV_stack_1->SetBinError(4,1.183741e+07);
   VbbHcc_jets_CSV_stack_1->SetBinError(5,9454677);
   VbbHcc_jets_CSV_stack_1->SetBinError(6,7960085);
   VbbHcc_jets_CSV_stack_1->SetBinError(7,6911331);
   VbbHcc_jets_CSV_stack_1->SetBinError(8,6156843);
   VbbHcc_jets_CSV_stack_1->SetBinError(9,5543382);
   VbbHcc_jets_CSV_stack_1->SetBinError(10,5108639);
   VbbHcc_jets_CSV_stack_1->SetBinError(11,4814859);
   VbbHcc_jets_CSV_stack_1->SetBinError(12,4513707);
   VbbHcc_jets_CSV_stack_1->SetBinError(13,4271098);
   VbbHcc_jets_CSV_stack_1->SetBinError(14,4150457);
   VbbHcc_jets_CSV_stack_1->SetBinError(15,4070480);
   VbbHcc_jets_CSV_stack_1->SetBinError(16,4156292);
   VbbHcc_jets_CSV_stack_1->SetBinError(17,4199210);
   VbbHcc_jets_CSV_stack_1->SetBinError(18,4447358);
   VbbHcc_jets_CSV_stack_1->SetBinError(19,5292648);
   VbbHcc_jets_CSV_stack_1->SetBinError(20,1.260242e+07);
   VbbHcc_jets_CSV_stack_1->SetEntries(5.432231e+08);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_jets_CSV_stack_1->SetFillColor(ci);
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
   VbbHcc_jets_CSV_stack_2->SetBinContent(1,4.627931e+07);
   VbbHcc_jets_CSV_stack_2->SetBinContent(2,5400583);
   VbbHcc_jets_CSV_stack_2->SetBinContent(3,2621610);
   VbbHcc_jets_CSV_stack_2->SetBinContent(4,1762756);
   VbbHcc_jets_CSV_stack_2->SetBinContent(5,1373449);
   VbbHcc_jets_CSV_stack_2->SetBinContent(6,1155832);
   VbbHcc_jets_CSV_stack_2->SetBinContent(7,1021032);
   VbbHcc_jets_CSV_stack_2->SetBinContent(8,928713.7);
   VbbHcc_jets_CSV_stack_2->SetBinContent(9,855189.1);
   VbbHcc_jets_CSV_stack_2->SetBinContent(10,828481.3);
   VbbHcc_jets_CSV_stack_2->SetBinContent(11,829303.4);
   VbbHcc_jets_CSV_stack_2->SetBinContent(12,827008.3);
   VbbHcc_jets_CSV_stack_2->SetBinContent(13,823340.7);
   VbbHcc_jets_CSV_stack_2->SetBinContent(14,859639.2);
   VbbHcc_jets_CSV_stack_2->SetBinContent(15,923222.1);
   VbbHcc_jets_CSV_stack_2->SetBinContent(16,1059959);
   VbbHcc_jets_CSV_stack_2->SetBinContent(17,1194526);
   VbbHcc_jets_CSV_stack_2->SetBinContent(18,1476693);
   VbbHcc_jets_CSV_stack_2->SetBinContent(19,2308403);
   VbbHcc_jets_CSV_stack_2->SetBinContent(20,1.457395e+07);
   VbbHcc_jets_CSV_stack_2->SetBinError(1,1741.644);
   VbbHcc_jets_CSV_stack_2->SetBinError(2,589.0457);
   VbbHcc_jets_CSV_stack_2->SetBinError(3,409.3841);
   VbbHcc_jets_CSV_stack_2->SetBinError(4,335.2938);
   VbbHcc_jets_CSV_stack_2->SetBinError(5,295.6275);
   VbbHcc_jets_CSV_stack_2->SetBinError(6,270.916);
   VbbHcc_jets_CSV_stack_2->SetBinError(7,254.3532);
   VbbHcc_jets_CSV_stack_2->SetBinError(8,242.3268);
   VbbHcc_jets_CSV_stack_2->SetBinError(9,232.264);
   VbbHcc_jets_CSV_stack_2->SetBinError(10,228.3939);
   VbbHcc_jets_CSV_stack_2->SetBinError(11,228.3279);
   VbbHcc_jets_CSV_stack_2->SetBinError(12,227.7934);
   VbbHcc_jets_CSV_stack_2->SetBinError(13,227.092);
   VbbHcc_jets_CSV_stack_2->SetBinError(14,231.874);
   VbbHcc_jets_CSV_stack_2->SetBinError(15,240.1306);
   VbbHcc_jets_CSV_stack_2->SetBinError(16,257.1606);
   VbbHcc_jets_CSV_stack_2->SetBinError(17,272.8233);
   VbbHcc_jets_CSV_stack_2->SetBinError(18,303.1743);
   VbbHcc_jets_CSV_stack_2->SetBinError(19,378.9571);
   VbbHcc_jets_CSV_stack_2->SetBinError(20,952.9513);
   VbbHcc_jets_CSV_stack_2->SetEntries(1.453098e+09);

   ci = TColor::GetColor("#990099");
   VbbHcc_jets_CSV_stack_2->SetFillColor(ci);
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
   entry->SetLineColor(1);
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
   entry->SetLineColor(1);
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
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   CSV_jets_bckg_16->Modified();
   CSV_jets_bckg_16->cd();
   CSV_jets_bckg_16->SetSelected(CSV_jets_bckg_16);
}
