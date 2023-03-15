#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_alljet_17()
{
//=========Macro generated from canvas: Aplanarity_alljet_17/Aplanarity_alljet_17
//=========  (Tue Feb 14 15:57:12 2023) by ROOT version 6.26/06
   TCanvas *Aplanarity_alljet_17 = new TCanvas("Aplanarity_alljet_17", "Aplanarity_alljet_17",0,0,600,600);
   Aplanarity_alljet_17->SetHighLightColor(2);
   Aplanarity_alljet_17->Range(-0.2183529,-116.2282,1.171633,852.3404);
   Aplanarity_alljet_17->SetFillColor(0);
   Aplanarity_alljet_17->SetFillStyle(4000);
   Aplanarity_alljet_17->SetBorderMode(0);
   Aplanarity_alljet_17->SetBorderSize(2);
   Aplanarity_alljet_17->SetLeftMargin(0.15709);
   Aplanarity_alljet_17->SetRightMargin(0.1234783);
   Aplanarity_alljet_17->SetBottomMargin(0.12);
   Aplanarity_alljet_17->SetFrameFillStyle(1000);
   Aplanarity_alljet_17->SetFrameBorderMode(0);
   Aplanarity_alljet_17->SetFrameFillStyle(1000);
   Aplanarity_alljet_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(755.4835);
   
   TH1F *st_stack_254 = new TH1F("st_stack_254","",50,0,1);
   st_stack_254->SetMinimum(0);
   st_stack_254->SetMaximum(755.4835);
   st_stack_254->SetDirectory(0);
   st_stack_254->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_254->SetLineColor(ci);
   st_stack_254->GetXaxis()->SetTitle("Aplanarity");
   st_stack_254->GetXaxis()->SetRange(1,50);
   st_stack_254->GetXaxis()->SetLabelFont(42);
   st_stack_254->GetXaxis()->SetTitleOffset(1);
   st_stack_254->GetXaxis()->SetTitleFont(42);
   st_stack_254->GetYaxis()->SetTitle("Events/0.02");
   st_stack_254->GetYaxis()->SetLabelFont(42);
   st_stack_254->GetYaxis()->SetTitleSize(0.037);
   st_stack_254->GetYaxis()->SetTitleFont(42);
   st_stack_254->GetZaxis()->SetLabelFont(42);
   st_stack_254->GetZaxis()->SetTitleOffset(1);
   st_stack_254->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_254);
   
   
   TH1D *VbbHcc_alljet_Aplanarity_stack_1 = new TH1D("VbbHcc_alljet_Aplanarity_stack_1","",50,0,1);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(1,448.415);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(2,124.9163);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(3,68.95148);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(4,43.77852);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(5,30.04538);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(6,21.33804);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(7,14.98429);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(8,10.71563);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(9,7.871751);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(10,5.47688);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(11,3.965291);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(12,2.896955);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(13,1.892555);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(14,1.462926);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(15,0.9128905);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(16,0.6090681);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(17,0.3752099);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(18,0.2014307);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(19,0.1386561);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(20,0.06580495);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(21,0.02320163);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(22,0.01322024);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinContent(23,0.003850765);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(1,0.9340482);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(2,0.4909671);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(3,0.3649671);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(4,0.2914994);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(5,0.2407498);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(6,0.2025381);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(7,0.1699398);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(8,0.1438803);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(9,0.1232817);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(10,0.1025971);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(11,0.08794365);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(12,0.07462162);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(13,0.06034261);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(14,0.05289396);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(15,0.04221885);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(16,0.0343455);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(17,0.02654679);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(18,0.01986957);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(19,0.01671003);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(20,0.01105219);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(21,0.006463968);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(22,0.005073876);
   VbbHcc_alljet_Aplanarity_stack_1->SetBinError(23,0.002725419);
   VbbHcc_alljet_Aplanarity_stack_1->SetEntries(479854);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_alljet_Aplanarity_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_alljet_Aplanarity_stack_1->SetLineColor(ci);
   VbbHcc_alljet_Aplanarity_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_alljet_Aplanarity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_alljet_Aplanarity_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_alljet_Aplanarity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_alljet_Aplanarity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_alljet_Aplanarity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_alljet_Aplanarity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_alljet_Aplanarity_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_alljet_Aplanarity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_alljet_Aplanarity_stack_1,"");
   
   TH1D *VbbHcc_alljet_Aplanarity_stack_2 = new TH1D("VbbHcc_alljet_Aplanarity_stack_2","",50,0,1);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(1,55.24068);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(2,21.75587);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(3,12.33218);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(4,7.79105);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(5,4.996965);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(6,3.40851);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(7,2.292097);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(8,1.57095);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(9,1.064906);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(10,0.7180841);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(11,0.4979616);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(12,0.3356102);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(13,0.2168221);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(14,0.1348612);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(15,0.09238172);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(16,0.04454353);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(17,0.03235895);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(18,0.01721092);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(19,0.0124308);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(20,0.004283781);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(21,0.001759738);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(23,0.0001893235);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinContent(24,0.0001574125);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(1,0.114308);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(2,0.07257653);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(3,0.05483453);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(4,0.04367459);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(5,0.03499325);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(6,0.02891411);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(7,0.02366691);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(8,0.01962065);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(9,0.01615137);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(10,0.01326592);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(11,0.01107906);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(12,0.00905595);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(13,0.007310272);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(14,0.005772049);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(15,0.004731516);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(16,0.003328984);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(17,0.002849597);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(18,0.002040859);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(19,0.001738252);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(20,0.001026132);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(21,0.0006689244);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(23,0.0001893235);
   VbbHcc_alljet_Aplanarity_stack_2->SetBinError(24,0.0001574125);
   VbbHcc_alljet_Aplanarity_stack_2->SetEntries(490312);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_alljet_Aplanarity_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_alljet_Aplanarity_stack_2->SetLineColor(ci);
   VbbHcc_alljet_Aplanarity_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_alljet_Aplanarity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_alljet_Aplanarity_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_alljet_Aplanarity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_alljet_Aplanarity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_alljet_Aplanarity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_alljet_Aplanarity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_alljet_Aplanarity_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_alljet_Aplanarity_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_alljet_Aplanarity_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_alljet_Aplanarity_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_alljet_Aplanarity_stack_1","ZHcc","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 41.5 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_alljet_17->Modified();
   Aplanarity_alljet_17->cd();
   Aplanarity_alljet_17->SetSelected(Aplanarity_alljet_17);
}
