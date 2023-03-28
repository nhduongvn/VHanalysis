#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_both_18()
{
//=========Macro generated from canvas: Aplanarity_both_18/Aplanarity_both_18
//=========  (Mon Mar 27 11:09:53 2023) by ROOT version 6.26/06
   TCanvas *Aplanarity_both_18 = new TCanvas("Aplanarity_both_18", "Aplanarity_both_18",0,0,600,600);
   Aplanarity_both_18->SetHighLightColor(2);
   Aplanarity_both_18->Range(-0.2183529,-0.6750071,1.171633,4.950052);
   Aplanarity_both_18->SetFillColor(0);
   Aplanarity_both_18->SetFillStyle(4000);
   Aplanarity_both_18->SetBorderMode(0);
   Aplanarity_both_18->SetBorderSize(2);
   Aplanarity_both_18->SetLeftMargin(0.15709);
   Aplanarity_both_18->SetRightMargin(0.1234783);
   Aplanarity_both_18->SetBottomMargin(0.12);
   Aplanarity_both_18->SetFrameFillStyle(1000);
   Aplanarity_both_18->SetFrameBorderMode(0);
   Aplanarity_both_18->SetFrameFillStyle(1000);
   Aplanarity_both_18->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMaximum(4.387546);
   
   TH1F *st_stack_255 = new TH1F("st_stack_255","",50,0,1);
   st_stack_255->SetMinimum(0);
   st_stack_255->SetMaximum(4.387546);
   st_stack_255->SetDirectory(0);
   st_stack_255->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_255->SetLineColor(ci);
   st_stack_255->GetXaxis()->SetTitle("Aplanarity");
   st_stack_255->GetXaxis()->SetRange(1,50);
   st_stack_255->GetXaxis()->SetLabelFont(42);
   st_stack_255->GetXaxis()->SetTitleOffset(1);
   st_stack_255->GetXaxis()->SetTitleFont(42);
   st_stack_255->GetYaxis()->SetTitle("Event/0.02");
   st_stack_255->GetYaxis()->SetLabelFont(42);
   st_stack_255->GetYaxis()->SetTitleSize(0.037);
   st_stack_255->GetYaxis()->SetTitleFont(42);
   st_stack_255->GetZaxis()->SetLabelFont(42);
   st_stack_255->GetZaxis()->SetTitleOffset(1);
   st_stack_255->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_255);
   
   
   TH1D *VbbHcc_both_Aplanarity_stack_1 = new TH1D("VbbHcc_both_Aplanarity_stack_1","",50,0,1);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(1,2.639051);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(2,0.8005768);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(3,0.2665736);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(4,0.1185462);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(5,0.06415576);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(6,0.03711765);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(7,0.02282438);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(8,0.0188334);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(9,0.009422781);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(10,0.01117517);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(11,0.002582708);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(13,0.007820977);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(14,0.003606138);
   VbbHcc_both_Aplanarity_stack_1->SetBinContent(19,0.002958322);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(1,0.09903496);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(2,0.04682115);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(3,0.02737735);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(4,0.01775918);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(5,0.01440569);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(6,0.009715217);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(7,0.007756639);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(8,0.007230646);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(9,0.00474974);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(10,0.005629057);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(11,0.002582708);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(13,0.004614536);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(14,0.002817318);
   VbbHcc_both_Aplanarity_stack_1->SetBinError(19,0.002958322);
   VbbHcc_both_Aplanarity_stack_1->SetEntries(1579);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_both_Aplanarity_stack_1->SetFillColor(ci);
   VbbHcc_both_Aplanarity_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Aplanarity_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Aplanarity_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Aplanarity_stack_1,"");
   
   TH1D *VbbHcc_both_Aplanarity_stack_2 = new TH1D("VbbHcc_both_Aplanarity_stack_2","",50,0,1);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(1,1.002612);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(2,0.3223187);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(3,0.139526);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(4,0.05342905);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(5,0.03628183);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(6,0.02310818);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(7,0.01096808);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(8,0.008333346);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(9,0.004900422);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(10,0.003523956);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(11,0.001116288);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(12,0.0006899535);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(13,0.00152708);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(14,0.0005088749);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(15,0.0003186975);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(16,0.0002481348);
   VbbHcc_both_Aplanarity_stack_2->SetBinContent(17,0.0004199154);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(1,0.01975986);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(2,0.0110885);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(3,0.007196111);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(4,0.004352241);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(5,0.00351576);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(6,0.002915883);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(7,0.001909893);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(8,0.001711526);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(9,0.001274948);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(10,0.001069498);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(11,0.0005793333);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(12,0.0004552328);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(13,0.0006838832);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(14,0.0003617664);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(15,0.0003186975);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(16,0.0002481348);
   VbbHcc_both_Aplanarity_stack_2->SetBinError(17,0.0004199154);
   VbbHcc_both_Aplanarity_stack_2->SetEntries(4756);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_both_Aplanarity_stack_2->SetFillColor(ci);
   VbbHcc_both_Aplanarity_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_both_Aplanarity_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_both_Aplanarity_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_both_Aplanarity_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_both_Aplanarity_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_both_Aplanarity_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_both_Aplanarity_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_both_Aplanarity_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_both_Aplanarity_stack_1","ZHcc","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 59.7 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.035);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_both_18->Modified();
   Aplanarity_both_18->cd();
   Aplanarity_both_18->SetSelected(Aplanarity_both_18);
}
