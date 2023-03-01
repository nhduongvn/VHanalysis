#ifdef __CLING__
#pragma cling optimize(0)
#endif
void CSV_jets_all_bckg_17_logY()
{
//=========Macro generated from canvas: CSV_jets_all_bckg_17/CSV_jets_all_bckg_17
//=========  (Wed Mar  1 14:06:43 2023) by ROOT version 6.26/06
   TCanvas *CSV_jets_all_bckg_17 = new TCanvas("CSV_jets_all_bckg_17", "CSV_jets_all_bckg_17",0,0,600,600);
   CSV_jets_all_bckg_17->SetHighLightColor(2);
   CSV_jets_all_bckg_17->Range(-0.2183529,4.77016,1.171633,16.19934);
   CSV_jets_all_bckg_17->SetFillColor(0);
   CSV_jets_all_bckg_17->SetFillStyle(4000);
   CSV_jets_all_bckg_17->SetBorderMode(0);
   CSV_jets_all_bckg_17->SetBorderSize(2);
   CSV_jets_all_bckg_17->SetLogy();
   CSV_jets_all_bckg_17->SetLeftMargin(0.15709);
   CSV_jets_all_bckg_17->SetRightMargin(0.1234783);
   CSV_jets_all_bckg_17->SetBottomMargin(0.12);
   CSV_jets_all_bckg_17->SetFrameFillStyle(1000);
   CSV_jets_all_bckg_17->SetFrameBorderMode(0);
   CSV_jets_all_bckg_17->SetFrameFillStyle(1000);
   CSV_jets_all_bckg_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(6800305);
   st->SetMaximum(4.442926e+14);
   
   TH1F *st_stack_166 = new TH1F("st_stack_166","",20,0,1);
   st_stack_166->SetMinimum(1385676);
   st_stack_166->SetMaximum(1.138735e+15);
   st_stack_166->SetDirectory(0);
   st_stack_166->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_166->SetLineColor(ci);
   st_stack_166->GetXaxis()->SetTitle("BvL tagging score");
   st_stack_166->GetXaxis()->SetRange(1,20);
   st_stack_166->GetXaxis()->SetLabelFont(42);
   st_stack_166->GetXaxis()->SetTitleOffset(1);
   st_stack_166->GetXaxis()->SetTitleFont(42);
   st_stack_166->GetYaxis()->SetTitle("Events/0.05");
   st_stack_166->GetYaxis()->SetLabelFont(42);
   st_stack_166->GetYaxis()->SetTitleSize(0.037);
   st_stack_166->GetYaxis()->SetTitleFont(42);
   st_stack_166->GetZaxis()->SetLabelFont(42);
   st_stack_166->GetZaxis()->SetTitleOffset(1);
   st_stack_166->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_166);
   
   
   TH1D *VbbHcc_jets_all_CSV_stack_1 = new TH1D("VbbHcc_jets_all_CSV_stack_1","",20,0,1);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(1,4.442767e+12);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(2,2.150013e+12);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(3,2.939768e+11);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(4,1.247093e+11);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(5,7.490661e+10);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(6,4.723665e+10);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(7,3.457323e+10);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(8,2.623774e+10);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(9,1.998235e+10);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(10,1.621356e+10);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(11,1.376095e+10);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(12,1.152328e+10);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(13,9.778419e+09);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(14,8.455673e+09);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(15,7.624129e+09);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(16,7.269803e+09);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(17,6.797796e+09);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(18,7.003987e+09);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(19,8.758063e+09);
   VbbHcc_jets_all_CSV_stack_1->SetBinContent(20,3.488913e+10);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(1,2.642733e+08);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(2,1.852494e+08);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(3,6.832034e+07);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(4,4.446568e+07);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(5,3.444819e+07);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(6,2.733632e+07);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(7,2.337801e+07);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(8,2.035771e+07);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(9,1.77553e+07);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(10,1.59822e+07);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(11,1.471533e+07);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(12,1.345688e+07);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(13,1.238924e+07);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(14,1.150315e+07);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(15,1.091528e+07);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(16,1.064314e+07);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(17,1.027752e+07);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(18,1.041717e+07);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(19,1.162156e+07);
   VbbHcc_jets_all_CSV_stack_1->SetBinError(20,2.297586e+07);
   VbbHcc_jets_all_CSV_stack_1->SetEntries(1.917007e+09);

   ci = TColor::GetColor("#ff6600");
   VbbHcc_jets_all_CSV_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_all_CSV_stack_1->SetLineColor(ci);
   VbbHcc_jets_all_CSV_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_jets_all_CSV_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CSV_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_CSV_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_all_CSV_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CSV_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_all_CSV_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CSV_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_CSV_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_all_CSV_stack_1,"");
   
   TH1D *VbbHcc_jets_all_CSV_stack_2 = new TH1D("VbbHcc_jets_all_CSV_stack_2","",20,0,1);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(1,1.593623e+08);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(2,6.163617e+07);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(3,1.222645e+07);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(4,6410488);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(5,4520779);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(6,3491441);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(7,2957125);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(8,2608124);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(9,2303559);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(10,2146172);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(11,2073905);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(12,2004148);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(13,1926668);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(14,1959642);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(15,2047657);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(16,2291832);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(17,2508864);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(18,2968104);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(19,4449926);
   VbbHcc_jets_all_CSV_stack_2->SetBinContent(20,2.728078e+07);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(1,3265.465);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(2,2003.43);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(3,894.9111);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(4,650.8513);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(5,546.9669);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(6,480.4574);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(7,441.8705);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(8,414.2316);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(9,388.7616);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(10,375.1802);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(11,369.2302);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(12,363.0411);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(13,355.8599);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(14,358.8226);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(15,366.6529);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(16,387.7212);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(17,405.4463);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(18,440.6944);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(19,539.2673);
   VbbHcc_jets_all_CSV_stack_2->SetBinError(20,1334.846);
   VbbHcc_jets_all_CSV_stack_2->SetEntries(5.284264e+09);

   ci = TColor::GetColor("#990099");
   VbbHcc_jets_all_CSV_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_jets_all_CSV_stack_2->SetLineColor(ci);
   VbbHcc_jets_all_CSV_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_jets_all_CSV_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CSV_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_CSV_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_jets_all_CSV_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CSV_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_jets_all_CSV_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_jets_all_CSV_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_jets_all_CSV_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_jets_all_CSV_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_jets_all_CSV_stack_2","t#bar{t}","F");

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
   entry=leg->AddEntry("VbbHcc_jets_all_CSV_stack_1","QCD","F");

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
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   CSV_jets_all_bckg_17->Modified();
   CSV_jets_all_bckg_17->cd();
   CSV_jets_all_bckg_17->SetSelected(CSV_jets_all_bckg_17);
}
