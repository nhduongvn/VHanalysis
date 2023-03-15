#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CSV_jets_signal_16_logY()
{
//=========Macro generated from canvas: CSV_jets_signal_16/CSV_jets_signal_16
//=========  (Fri Mar 10 14:09:13 2023) by ROOT version 6.26/06
   TCanvas *CSV_jets_signal_16 = new TCanvas("CSV_jets_signal_16", "CSV_jets_signal_16",0,0,600,600);
   CSV_jets_signal_16->SetHighLightColor(2);
   CSV_jets_signal_16->Range(-0.2183529,0.2863625,1.171633,3.612503);
   CSV_jets_signal_16->SetFillColor(0);
   CSV_jets_signal_16->SetFillStyle(4000);
   CSV_jets_signal_16->SetBorderMode(0);
   CSV_jets_signal_16->SetBorderSize(2);
   CSV_jets_signal_16->SetLogy();
   CSV_jets_signal_16->SetLeftMargin(0.15709);
   CSV_jets_signal_16->SetRightMargin(0.1234783);
   CSV_jets_signal_16->SetBottomMargin(0.12);
   CSV_jets_signal_16->SetFrameFillStyle(1000);
   CSV_jets_signal_16->SetFrameBorderMode(0);
   CSV_jets_signal_16->SetFrameFillStyle(1000);
   CSV_jets_signal_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(1336.635);
   
   TH1F *st_stack_7 = new TH1F("st_stack_7","",20,0,1);
   st_stack_7->SetMinimum(4.847295);
   st_stack_7->SetMaximum(1904.975);
   st_stack_7->SetDirectory(0);
   st_stack_7->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_7->SetLineColor(ci);
   st_stack_7->GetXaxis()->SetTitle("BvL tagging score");
   st_stack_7->GetXaxis()->SetRange(1,20);
   st_stack_7->GetXaxis()->SetLabelFont(42);
   st_stack_7->GetXaxis()->SetTitleOffset(1);
   st_stack_7->GetXaxis()->SetTitleFont(42);
   st_stack_7->GetYaxis()->SetTitle("Event/0.05");
   st_stack_7->GetYaxis()->SetLabelFont(42);
   st_stack_7->GetYaxis()->SetTitleSize(0.037);
   st_stack_7->GetYaxis()->SetTitleFont(42);
   st_stack_7->GetZaxis()->SetLabelFont(42);
   st_stack_7->GetZaxis()->SetTitleOffset(1);
   st_stack_7->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_7);
   
   
   TH1D *VbbHcc_jets_CSV_stack_1 = new TH1D("VbbHcc_jets_CSV_stack_1","",20,0,1);
   VbbHcc_jets_CSV_stack_1->SetBinContent(1,913.3868);
   VbbHcc_jets_CSV_stack_1->SetBinContent(2,137.9633);
   VbbHcc_jets_CSV_stack_1->SetBinContent(3,66.22943);
   VbbHcc_jets_CSV_stack_1->SetBinContent(4,43.4305);
   VbbHcc_jets_CSV_stack_1->SetBinContent(5,31.50101);
   VbbHcc_jets_CSV_stack_1->SetBinContent(6,25.3962);
   VbbHcc_jets_CSV_stack_1->SetBinContent(7,19.83073);
   VbbHcc_jets_CSV_stack_1->SetBinContent(8,16.48177);
   VbbHcc_jets_CSV_stack_1->SetBinContent(9,14.04113);
   VbbHcc_jets_CSV_stack_1->SetBinContent(10,12.40546);
   VbbHcc_jets_CSV_stack_1->SetBinContent(11,11.0966);
   VbbHcc_jets_CSV_stack_1->SetBinContent(12,9.940108);
   VbbHcc_jets_CSV_stack_1->SetBinContent(13,8.520191);
   VbbHcc_jets_CSV_stack_1->SetBinContent(14,7.413014);
   VbbHcc_jets_CSV_stack_1->SetBinContent(15,7.194022);
   VbbHcc_jets_CSV_stack_1->SetBinContent(16,7.05001);
   VbbHcc_jets_CSV_stack_1->SetBinContent(17,7.021715);
   VbbHcc_jets_CSV_stack_1->SetBinContent(18,7.457479);
   VbbHcc_jets_CSV_stack_1->SetBinContent(19,9.493935);
   VbbHcc_jets_CSV_stack_1->SetBinContent(20,47.92759);
   VbbHcc_jets_CSV_stack_1->SetBinError(1,1.67137);
   VbbHcc_jets_CSV_stack_1->SetBinError(2,0.6492627);
   VbbHcc_jets_CSV_stack_1->SetBinError(3,0.4511393);
   VbbHcc_jets_CSV_stack_1->SetBinError(4,0.3652399);
   VbbHcc_jets_CSV_stack_1->SetBinError(5,0.3118342);
   VbbHcc_jets_CSV_stack_1->SetBinError(6,0.2790404);
   VbbHcc_jets_CSV_stack_1->SetBinError(7,0.2467396);
   VbbHcc_jets_CSV_stack_1->SetBinError(8,0.2253958);
   VbbHcc_jets_CSV_stack_1->SetBinError(9,0.2076379);
   VbbHcc_jets_CSV_stack_1->SetBinError(10,0.194801);
   VbbHcc_jets_CSV_stack_1->SetBinError(11,0.1844671);
   VbbHcc_jets_CSV_stack_1->SetBinError(12,0.1751974);
   VbbHcc_jets_CSV_stack_1->SetBinError(13,0.1626611);
   VbbHcc_jets_CSV_stack_1->SetBinError(14,0.1512689);
   VbbHcc_jets_CSV_stack_1->SetBinError(15,0.1489927);
   VbbHcc_jets_CSV_stack_1->SetBinError(16,0.1474972);
   VbbHcc_jets_CSV_stack_1->SetBinError(17,0.1463092);
   VbbHcc_jets_CSV_stack_1->SetBinError(18,0.1512675);
   VbbHcc_jets_CSV_stack_1->SetBinError(19,0.1703869);
   VbbHcc_jets_CSV_stack_1->SetBinError(20,0.3837362);
   VbbHcc_jets_CSV_stack_1->SetEntries(508987);

   ci = TColor::GetColor("#cc0000");
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
   VbbHcc_jets_CSV_stack_2->SetBinContent(1,196.0199);
   VbbHcc_jets_CSV_stack_2->SetBinContent(2,27.17077);
   VbbHcc_jets_CSV_stack_2->SetBinContent(3,12.80286);
   VbbHcc_jets_CSV_stack_2->SetBinContent(4,8.303525);
   VbbHcc_jets_CSV_stack_2->SetBinContent(5,6.158949);
   VbbHcc_jets_CSV_stack_2->SetBinContent(6,4.832368);
   VbbHcc_jets_CSV_stack_2->SetBinContent(7,3.923226);
   VbbHcc_jets_CSV_stack_2->SetBinContent(8,3.213473);
   VbbHcc_jets_CSV_stack_2->SetBinContent(9,2.646632);
   VbbHcc_jets_CSV_stack_2->SetBinContent(10,2.39733);
   VbbHcc_jets_CSV_stack_2->SetBinContent(11,2.162309);
   VbbHcc_jets_CSV_stack_2->SetBinContent(12,1.913457);
   VbbHcc_jets_CSV_stack_2->SetBinContent(13,1.696018);
   VbbHcc_jets_CSV_stack_2->SetBinContent(14,1.570864);
   VbbHcc_jets_CSV_stack_2->SetBinContent(15,1.469359);
   VbbHcc_jets_CSV_stack_2->SetBinContent(16,1.497053);
   VbbHcc_jets_CSV_stack_2->SetBinContent(17,1.488457);
   VbbHcc_jets_CSV_stack_2->SetBinContent(18,1.57598);
   VbbHcc_jets_CSV_stack_2->SetBinContent(19,2.220343);
   VbbHcc_jets_CSV_stack_2->SetBinContent(20,11.68921);
   VbbHcc_jets_CSV_stack_2->SetBinError(1,0.2738461);
   VbbHcc_jets_CSV_stack_2->SetBinError(2,0.1017966);
   VbbHcc_jets_CSV_stack_2->SetBinError(3,0.06987294);
   VbbHcc_jets_CSV_stack_2->SetBinError(4,0.05629933);
   VbbHcc_jets_CSV_stack_2->SetBinError(5,0.04851565);
   VbbHcc_jets_CSV_stack_2->SetBinError(6,0.04294104);
   VbbHcc_jets_CSV_stack_2->SetBinError(7,0.03871481);
   VbbHcc_jets_CSV_stack_2->SetBinError(8,0.03503157);
   VbbHcc_jets_CSV_stack_2->SetBinError(9,0.03179531);
   VbbHcc_jets_CSV_stack_2->SetBinError(10,0.03027137);
   VbbHcc_jets_CSV_stack_2->SetBinError(11,0.02875566);
   VbbHcc_jets_CSV_stack_2->SetBinError(12,0.02702838);
   VbbHcc_jets_CSV_stack_2->SetBinError(13,0.02543242);
   VbbHcc_jets_CSV_stack_2->SetBinError(14,0.02451845);
   VbbHcc_jets_CSV_stack_2->SetBinError(15,0.02368926);
   VbbHcc_jets_CSV_stack_2->SetBinError(16,0.02392707);
   VbbHcc_jets_CSV_stack_2->SetBinError(17,0.02385192);
   VbbHcc_jets_CSV_stack_2->SetBinError(18,0.02452496);
   VbbHcc_jets_CSV_stack_2->SetBinError(19,0.0291383);
   VbbHcc_jets_CSV_stack_2->SetBinError(20,0.06698851);
   VbbHcc_jets_CSV_stack_2->SetEntries(785295);

   ci = TColor::GetColor("#00cc00");
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
   TLegendEntry *entry=leg->AddEntry("VbbHcc_jets_CSV_stack_2","ggZHcc","F");

   ci = TColor::GetColor("#00cc00");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("VbbHcc_jets_CSV_stack_1","ZHcc","F");

   ci = TColor::GetColor("#cc0000");
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
   CSV_jets_signal_16->Modified();
   CSV_jets_signal_16->cd();
   CSV_jets_signal_16->SetSelected(CSV_jets_signal_16);
}
