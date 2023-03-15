#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_seljet_all_logY()
{
//=========Macro generated from canvas: Aplanarity_seljet_all/Aplanarity_seljet_all
//=========  (Tue Feb 14 16:07:59 2023) by ROOT version 6.26/06
   TCanvas *Aplanarity_seljet_all = new TCanvas("Aplanarity_seljet_all", "Aplanarity_seljet_all",0,0,600,600);
   Aplanarity_seljet_all->SetHighLightColor(2);
   Aplanarity_seljet_all->Range(-0.2183529,-0.08520264,1.171633,5.285697);
   Aplanarity_seljet_all->SetFillColor(0);
   Aplanarity_seljet_all->SetFillStyle(4000);
   Aplanarity_seljet_all->SetBorderMode(0);
   Aplanarity_seljet_all->SetBorderSize(2);
   Aplanarity_seljet_all->SetLogy();
   Aplanarity_seljet_all->SetLeftMargin(0.15709);
   Aplanarity_seljet_all->SetRightMargin(0.1234783);
   Aplanarity_seljet_all->SetBottomMargin(0.12);
   Aplanarity_seljet_all->SetFrameFillStyle(1000);
   Aplanarity_seljet_all->SetFrameBorderMode(0);
   Aplanarity_seljet_all->SetFrameFillStyle(1000);
   Aplanarity_seljet_all->SetFrameBorderMode(0);
   
   THStack *st = new THStack();
   st->SetName("st");
   st->SetTitle("");
   st->SetMinimum(10);
   st->SetMaximum(32906.07);
   
   TH1F *st_stack_320 = new TH1F("st_stack_320","",50,0,1);
   st_stack_320->SetMinimum(3.624977);
   st_stack_320->SetMaximum(56054.02);
   st_stack_320->SetDirectory(0);
   st_stack_320->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   st_stack_320->SetLineColor(ci);
   st_stack_320->GetXaxis()->SetTitle("Aplanarity");
   st_stack_320->GetXaxis()->SetRange(1,50);
   st_stack_320->GetXaxis()->SetLabelFont(42);
   st_stack_320->GetXaxis()->SetTitleOffset(1);
   st_stack_320->GetXaxis()->SetTitleFont(42);
   st_stack_320->GetYaxis()->SetTitle("Events/0.02");
   st_stack_320->GetYaxis()->SetLabelFont(42);
   st_stack_320->GetYaxis()->SetTitleSize(0.037);
   st_stack_320->GetYaxis()->SetTitleFont(42);
   st_stack_320->GetZaxis()->SetLabelFont(42);
   st_stack_320->GetZaxis()->SetTitleOffset(1);
   st_stack_320->GetZaxis()->SetTitleFont(42);
   st->SetHistogram(st_stack_320);
   
   
   TH1D *VbbHcc_seljet_Aplanarity_all_stack_1 = new TH1D("VbbHcc_seljet_Aplanarity_all_stack_1","",50,0,1);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinContent(1,254.3937);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinContent(2,193.4299);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinContent(3,130.8963);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinContent(4,88.27698);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinContent(5,63.24783);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinContent(6,45.02622);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinContent(7,32.83439);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinContent(8,23.85887);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinContent(9,17.86313);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinContent(10,12.68396);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinContent(11,9.173218);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinContent(12,6.470329);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinContent(13,4.564918);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinContent(14,3.190215);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinContent(15,2.056554);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinContent(16,1.493622);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinContent(17,0.7988608);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinContent(18,0.4949158);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinContent(19,0.3060317);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinContent(20,0.1864486);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinContent(21,0.06873279);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinContent(22,0.02378012);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinContent(23,0.003850765);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinError(1,0.8286704);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinError(2,0.7238213);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinError(3,0.5996691);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinError(4,0.4866144);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinError(5,0.4195438);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinError(6,0.3445903);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinError(7,0.3044607);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinError(8,0.251722);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinError(9,0.2438292);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinError(10,0.1811997);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinError(11,0.1569091);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinError(12,0.1291167);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinError(13,0.1153637);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinError(14,0.09140385);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinError(15,0.07350845);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinError(16,0.06223774);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinError(17,0.04420714);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinError(18,0.0362778);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinError(19,0.02833687);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinError(20,0.03419769);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinError(21,0.01289093);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinError(22,0.007107533);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetBinError(23,0.002725419);
   VbbHcc_seljet_Aplanarity_all_stack_1->SetEntries(394834);

   ci = TColor::GetColor("#cc0000");
   VbbHcc_seljet_Aplanarity_all_stack_1->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_seljet_Aplanarity_all_stack_1->SetLineColor(ci);
   VbbHcc_seljet_Aplanarity_all_stack_1->GetXaxis()->SetRange(1,100);
   VbbHcc_seljet_Aplanarity_all_stack_1->GetXaxis()->SetLabelFont(42);
   VbbHcc_seljet_Aplanarity_all_stack_1->GetXaxis()->SetTitleOffset(1);
   VbbHcc_seljet_Aplanarity_all_stack_1->GetXaxis()->SetTitleFont(42);
   VbbHcc_seljet_Aplanarity_all_stack_1->GetYaxis()->SetLabelFont(42);
   VbbHcc_seljet_Aplanarity_all_stack_1->GetYaxis()->SetTitleFont(42);
   VbbHcc_seljet_Aplanarity_all_stack_1->GetZaxis()->SetLabelFont(42);
   VbbHcc_seljet_Aplanarity_all_stack_1->GetZaxis()->SetTitleOffset(1);
   VbbHcc_seljet_Aplanarity_all_stack_1->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_seljet_Aplanarity_all_stack_1,"");
   
   TH1D *VbbHcc_seljet_Aplanarity_all_stack_2 = new TH1D("VbbHcc_seljet_Aplanarity_all_stack_2","",50,0,1);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinContent(1,74.66702);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinContent(2,54.07642);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinContent(3,35.0125);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinContent(4,23.25718);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinContent(5,15.54417);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinContent(6,10.61177);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinContent(7,7.271156);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinContent(8,4.985943);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinContent(9,3.478329);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinContent(10,2.324078);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinContent(11,1.621243);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinContent(12,1.100094);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinContent(13,0.710147);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinContent(14,0.4327109);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinContent(15,0.2917223);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinContent(16,0.1673731);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinContent(17,0.09869903);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinContent(18,0.05647747);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinContent(19,0.02976961);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinContent(20,0.01493543);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinContent(21,0.005152163);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinContent(22,0.002758745);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinContent(23,0.0001893235);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinContent(24,0.0001574125);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinError(1,0.1602464);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinError(2,0.1368232);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinError(3,0.1106705);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinError(4,0.08912176);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinError(5,0.07284939);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinError(6,0.05965209);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinError(7,0.04945841);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinError(8,0.04138176);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinError(9,0.03528965);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinError(10,0.0279987);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinError(11,0.02445641);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinError(12,0.02445519);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinError(13,0.01539645);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinError(14,0.01190135);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinError(15,0.009847704);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinError(16,0.007445106);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinError(17,0.006298817);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinError(18,0.004288344);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinError(19,0.00304758);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinError(20,0.002194271);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinError(21,0.00125286);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinError(22,0.0009912348);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinError(23,0.0001893235);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetBinError(24,0.0001574125);
   VbbHcc_seljet_Aplanarity_all_stack_2->SetEntries(776112);

   ci = TColor::GetColor("#00cc00");
   VbbHcc_seljet_Aplanarity_all_stack_2->SetFillColor(ci);

   ci = TColor::GetColor("#000099");
   VbbHcc_seljet_Aplanarity_all_stack_2->SetLineColor(ci);
   VbbHcc_seljet_Aplanarity_all_stack_2->GetXaxis()->SetRange(1,100);
   VbbHcc_seljet_Aplanarity_all_stack_2->GetXaxis()->SetLabelFont(42);
   VbbHcc_seljet_Aplanarity_all_stack_2->GetXaxis()->SetTitleOffset(1);
   VbbHcc_seljet_Aplanarity_all_stack_2->GetXaxis()->SetTitleFont(42);
   VbbHcc_seljet_Aplanarity_all_stack_2->GetYaxis()->SetLabelFont(42);
   VbbHcc_seljet_Aplanarity_all_stack_2->GetYaxis()->SetTitleFont(42);
   VbbHcc_seljet_Aplanarity_all_stack_2->GetZaxis()->SetLabelFont(42);
   VbbHcc_seljet_Aplanarity_all_stack_2->GetZaxis()->SetTitleOffset(1);
   VbbHcc_seljet_Aplanarity_all_stack_2->GetZaxis()->SetTitleFont(42);
   st->Add(VbbHcc_seljet_Aplanarity_all_stack_2,"");
   st->Draw("hist");
   
   TLegend *leg = new TLegend(0.48,0.8,0.85,0.87,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.035);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("VbbHcc_seljet_Aplanarity_all_stack_2","ggZHcc","F");

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
   entry=leg->AddEntry("VbbHcc_seljet_Aplanarity_all_stack_1","ZHcc","F");

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
   TLatex *   tex = new TLatex(0.25,0.937775,"CMS Work in Progress #sqrt{s} = 13 TeV, 138 fb^{-1}");
tex->SetNDC();
   tex->SetTextFont(42);
   tex->SetTextSize(0.04);
   tex->SetLineWidth(2);
   tex->Draw();
   Aplanarity_seljet_all->Modified();
   Aplanarity_seljet_all->cd();
   Aplanarity_seljet_all->SetSelected(Aplanarity_seljet_all);
}
