#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Z_pt_tags_16()
{
//=========Macro generated from canvas: Z_pt_tags_16/Z_pt_tags_16
//=========  (Mon Dec 19 11:11:21 2022) by ROOT version 6.26/06
   TCanvas *Z_pt_tags_16 = new TCanvas("Z_pt_tags_16", "Z_pt_tags_16",0,0,600,600);
   Z_pt_tags_16->SetHighLightColor(2);
   Z_pt_tags_16->Range(37.97653,-0.5308506,1705.96,3.892904);
   Z_pt_tags_16->SetFillColor(0);
   Z_pt_tags_16->SetFillStyle(4000);
   Z_pt_tags_16->SetBorderMode(0);
   Z_pt_tags_16->SetBorderSize(2);
   Z_pt_tags_16->SetLeftMargin(0.15709);
   Z_pt_tags_16->SetRightMargin(0.1234783);
   Z_pt_tags_16->SetBottomMargin(0.12);
   Z_pt_tags_16->SetFrameFillStyle(1000);
   Z_pt_tags_16->SetFrameBorderMode(0);
   Z_pt_tags_16->SetFrameFillStyle(1000);
   Z_pt_tags_16->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(3.450529);
   
   TH1F *st_stack_9 = new TH1F("st_stack_9","",40,0,2000);
   st_stack_9->SetMinimum(0);
   st_stack_9->SetMaximum(3.450529);
   st_stack_9->SetDirectory(0);
   st_stack_9->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_9->SetLineColor(ci);
   st_stack_9->GetXaxis()->SetTitle("Z p_{T} [GeV]");
   st_stack_9->GetXaxis()->SetRange(7,30);
   st_stack_9->GetXaxis()->SetLabelFont(42);
   st_stack_9->GetXaxis()->SetTitleOffset(1);
   st_stack_9->GetXaxis()->SetTitleFont(42);
   st_stack_9->GetYaxis()->SetTitle("Events/50.0");
   st_stack_9->GetYaxis()->SetLabelFont(42);
   st_stack_9->GetYaxis()->SetTitleSize(0.037);
   st_stack_9->GetYaxis()->SetTitleFont(42);
   st_stack_9->GetZaxis()->SetLabelFont(42);
   st_stack_9->GetZaxis()->SetTitleOffset(1);
   st_stack_9->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_9);
   
   
   TH1D *VbbHcc_tags_Z_pt_stack_1 = new TH1D("VbbHcc_tags_Z_pt_stack_1","",40,0,2000);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(1,1.290642);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(2,2.300353);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(3,1.46512);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(4,0.6449271);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(5,0.3330077);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(6,0.160847);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(7,0.1135867);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(8,0.06343964);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(9,0.02943784);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(10,0.01077273);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(11,0.004701217);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(12,0.006372452);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(13,0.003272536);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(14,0.00152612);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(16,0.001514166);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(17,0.001546166);
   VbbHcc_tags_Z_pt_stack_1->SetBinContent(18,0.001545187);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(1,0.0449021);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(2,0.06018844);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(3,0.04755474);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(4,0.03185814);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(5,0.02275394);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(6,0.01561888);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(7,0.01312894);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(8,0.009865999);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(9,0.006636318);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(10,0.004074768);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(11,0.002653482);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(12,0.003190543);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(13,0.001970781);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(14,0.00152612);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(16,0.001514166);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(17,0.001545188);
   VbbHcc_tags_Z_pt_stack_1->SetBinError(18,0.001545187);
   VbbHcc_tags_Z_pt_stack_1->SetEntries(4703);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_tags_Z_pt_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_pt_stack_1->SetLineColor(ci);
   VbbHcc_tags_Z_pt_stack_1->GetXaxis()->SetRange(1,2000);
   VbbHcc_tags_Z_pt_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_pt_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_pt_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_pt_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_pt_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_pt_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_pt_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_pt_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_pt_stack_1,"");
   
   TH1D *VbbHcc_tags_Z_pt_stack_2 = new TH1D("VbbHcc_tags_Z_pt_stack_2","",40,0,2000);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(1,0.2204848);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(2,0.5619933);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(3,0.6350004);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(4,0.4197876);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(5,0.2109577);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(6,0.1134228);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(7,0.06571949);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(8,0.03868364);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(9,0.02069583);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(10,0.01250429);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(11,0.007995777);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(12,0.005416791);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(13,0.00498986);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(14,0.003536717);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(15,0.002333577);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(16,0.0006532273);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(17,0.001713636);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(18,0.001399533);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(19,0.001073219);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(20,0.0001707797);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(21,0.0001890315);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(22,0.0002012167);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(23,0.0007681547);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(24,2.01541e-05);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(25,0.0006739022);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(26,7.170977e-05);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(27,0.0001275402);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(33,0.0001931004);
   VbbHcc_tags_Z_pt_stack_2->SetBinContent(35,0.0001892237);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(1,0.006452751);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(2,0.010316);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(3,0.01098026);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(4,0.008924061);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(5,0.006306278);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(6,0.004632952);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(7,0.003522459);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(8,0.002696351);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(9,0.001986548);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(10,0.001544317);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(11,0.00123987);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(12,0.001003971);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(13,0.0009712052);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(14,0.000817265);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(15,0.0006745957);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(16,0.0003511646);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(17,0.0005734018);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(18,0.0005294926);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(19,0.0004453624);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(20,0.0001707797);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(21,0.0001890315);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(22,0.0002012167);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(23,0.0003849474);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(24,2.01541e-05);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(25,0.0003467175);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(26,7.170977e-05);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(27,0.0001275402);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(33,0.0001931004);
   VbbHcc_tags_Z_pt_stack_2->SetBinError(35,0.0001892237);
   VbbHcc_tags_Z_pt_stack_2->SetEntries(13340);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_tags_Z_pt_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_tags_Z_pt_stack_2->SetLineColor(ci);
   VbbHcc_tags_Z_pt_stack_2->GetXaxis()->SetRange(1,2000);
   VbbHcc_tags_Z_pt_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_pt_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_pt_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_pt_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_pt_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_tags_Z_pt_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_tags_Z_pt_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_tags_Z_pt_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_tags_Z_pt_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_tags_Z_pt_stack_2","ggZHcc","F");

   ci = TColor::GetColor("#00cc00");
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
   entry=leg->AddEntry("VbbHcc_tags_Z_pt_stack_1","ZHcc","F");

   ci = TColor::GetColor("#cc0000");
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
   Z_pt_tags_16->Modified();
   Z_pt_tags_16->cd();
   Z_pt_tags_16->SetSelected(Z_pt_tags_16);
}
