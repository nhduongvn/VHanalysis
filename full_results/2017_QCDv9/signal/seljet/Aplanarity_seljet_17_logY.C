#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_seljet_17_logY()
{
//=========Macro generated from canvas: Aplanarity_seljet_17/Aplanarity_seljet_17
//=========  (Tue Feb 14 10:43:11 2023) by ROOT version 6.26/06
   TCanvas *Aplanarity_seljet_17 = new TCanvas("Aplanarity_seljet_17", "Aplanarity_seljet_17",0,0,600,600);
   Aplanarity_seljet_17->SetHighLightColor(2);
   Aplanarity_seljet_17->Range(-0.2183529,0.04851658,1.171633,4.663088);
   Aplanarity_seljet_17->SetFillColor(0);
   Aplanarity_seljet_17->SetFillStyle(4000);
   Aplanarity_seljet_17->SetBorderMode(0);
   Aplanarity_seljet_17->SetBorderSize(2);
   Aplanarity_seljet_17->SetLogy();
   Aplanarity_seljet_17->SetLeftMargin(0.15709);
   Aplanarity_seljet_17->SetRightMargin(0.1234783);
   Aplanarity_seljet_17->SetBottomMargin(0.12);
   Aplanarity_seljet_17->SetFrameFillStyle(1000);
   Aplanarity_seljet_17->SetFrameBorderMode(0);
   Aplanarity_seljet_17->SetFrameFillStyle(1000);
   Aplanarity_seljet_17->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(9945.78);
   
   TH1F *st_stack_318 = new TH1F("st_stack_318","",50,0,1);
   st_stack_318->SetMinimum(4.00189);
   st_stack_318->SetMaximum(15908.55);
   st_stack_318->SetDirectory(0);
   st_stack_318->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_318->SetLineColor(ci);
   st_stack_318->GetXaxis()->SetTitle("Aplanarity");
   st_stack_318->GetXaxis()->SetRange(1,50);
   st_stack_318->GetXaxis()->SetLabelFont(42);
   st_stack_318->GetXaxis()->SetTitleOffset(1);
   st_stack_318->GetXaxis()->SetTitleFont(42);
   st_stack_318->GetYaxis()->SetTitle("Events/0.02");
   st_stack_318->GetYaxis()->SetLabelFont(42);
   st_stack_318->GetYaxis()->SetTitleSize(0.037);
   st_stack_318->GetYaxis()->SetTitleFont(42);
   st_stack_318->GetZaxis()->SetLabelFont(42);
   st_stack_318->GetZaxis()->SetTitleOffset(1);
   st_stack_318->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_318);
   
   
   TH1D *VbbHcc_seljet_Aplanarity_stack_1 = new TH1D("VbbHcc_seljet_Aplanarity_stack_1","",50,0,1);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(1,76.95243);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(2,59.14684);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(3,40.27883);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(4,27.43952);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(5,19.44895);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(6,13.9676);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(7,10.04858);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(8,7.387242);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(9,5.597778);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(10,3.866476);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(11,2.860427);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(12,2.067456);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(13,1.374968);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(14,1.100724);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(15,0.6761286);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(16,0.4563488);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(17,0.2856216);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(18,0.1309994);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(19,0.1110905);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(20,0.04366958);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(21,0.02167524);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(22,0.01124101);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(23,0.003850765);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(1,0.3784077);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(2,0.3344783);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(3,0.2765491);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(4,0.2289737);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(5,0.1924481);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(6,0.1628335);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(7,0.1386529);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(8,0.118569);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(9,0.1032441);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(10,0.08588012);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(11,0.0742566);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(12,0.06246275);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(13,0.05103978);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(14,0.04578281);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(15,0.03616791);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(16,0.02948771);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(17,0.02302214);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(18,0.01594919);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(19,0.01467507);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(20,0.009001212);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(21,0.006384885);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(22,0.004671924);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(23,0.002725419);
   VbbHcc_seljet_Aplanarity_stack_1->SetEntries(158880);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_seljet_Aplanarity_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_seljet_Aplanarity_stack_1->SetLineColor(ci);
   VbbHcc_seljet_Aplanarity_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_seljet_Aplanarity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_seljet_Aplanarity_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_seljet_Aplanarity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_seljet_Aplanarity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_seljet_Aplanarity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_seljet_Aplanarity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_seljet_Aplanarity_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_seljet_Aplanarity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_seljet_Aplanarity_stack_1,"");
   
   TH1D *VbbHcc_seljet_Aplanarity_stack_2 = new TH1D("VbbHcc_seljet_Aplanarity_stack_2","",50,0,1);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(1,22.50537);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(2,16.53167);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(3,10.71987);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(4,7.152522);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(5,4.740722);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(6,3.301632);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(7,2.23049);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(8,1.539818);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(9,1.054595);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(10,0.7177223);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(11,0.4915714);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(12,0.3315229);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(13,0.2242111);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(14,0.1339594);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(15,0.09176564);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(16,0.04667828);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(17,0.03203248);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(18,0.01782927);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(19,0.01152143);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(20,0.004691644);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(21,0.002206627);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(22,0.0002466138);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(23,0.0001893235);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(24,0.0001574125);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(1,0.07321469);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(2,0.0631159);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(3,0.05096108);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(4,0.0417117);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(5,0.03395744);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(6,0.02837073);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(7,0.02327518);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(8,0.01935415);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(9,0.01601469);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(10,0.01324147);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(11,0.01096126);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(12,0.008965129);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(13,0.007430084);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(14,0.005743986);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(15,0.004720071);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(16,0.003367399);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(17,0.002825436);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(18,0.002072161);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(19,0.001658474);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(20,0.001064437);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(21,0.0007399266);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(22,0.0002466138);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(23,0.0001893235);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(24,0.0001574125);
   VbbHcc_seljet_Aplanarity_stack_2->SetEntries(311458);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_seljet_Aplanarity_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_seljet_Aplanarity_stack_2->SetLineColor(ci);
   VbbHcc_seljet_Aplanarity_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_seljet_Aplanarity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_seljet_Aplanarity_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_seljet_Aplanarity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_seljet_Aplanarity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_seljet_Aplanarity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_seljet_Aplanarity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_seljet_Aplanarity_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_seljet_Aplanarity_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_seljet_Aplanarity_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_seljet_Aplanarity_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_seljet_Aplanarity_stack_1","ZHcc","F");

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
   Aplanarity_seljet_17->Modified();
   Aplanarity_seljet_17->cd();
   Aplanarity_seljet_17->SetSelected(Aplanarity_seljet_17);
}
