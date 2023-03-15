#ifdef __CLING__
#pragma cling optimize(0)
#endif
void Aplanarity_seljet_17()
{
//=========Macro generated from canvas: Aplanarity_seljet_17/Aplanarity_seljet_17
//=========  (Thu Feb 16 10:35:23 2023) by ROOT version 6.26/06
   TCanvas *Aplanarity_seljet_17 = new TCanvas("Aplanarity_seljet_17", "Aplanarity_seljet_17",0,0,600,600);
   Aplanarity_seljet_17->SetHighLightColor(2);
   Aplanarity_seljet_17->Range(-0.2183529,-10.60959,1.171633,77.80364);
   Aplanarity_seljet_17->SetFillColor(0);
   Aplanarity_seljet_17->SetFillStyle(4000);
   Aplanarity_seljet_17->SetBorderMode(0);
   Aplanarity_seljet_17->SetBorderSize(2);
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
   st->SetMaximum(68.96232);
   
   TH1F *st_stack_318 = new TH1F("st_stack_318","",50,0,1);
   st_stack_318->SetMinimum(0);
   st_stack_318->SetMaximum(68.96232);
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
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(1,33.22666);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(2,24.91697);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(3,16.51422);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(4,11.09608);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(5,7.741372);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(6,5.495329);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(7,4.040505);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(8,2.928282);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(9,2.141642);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(10,1.559);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(11,1.059597);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(12,0.7698461);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(13,0.552872);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(14,0.4214062);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(15,0.2775445);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(16,0.1885349);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(17,0.1253236);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(18,0.04700466);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(19,0.03956308);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(20,0.01805019);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(21,0.004276449);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinContent(22,0.004045616);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(1,0.2480563);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(2,0.2156684);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(3,0.1764604);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(4,0.1451477);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(5,0.120713);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(6,0.1015332);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(7,0.0873035);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(8,0.07458502);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(9,0.06355975);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(10,0.05458417);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(11,0.04491497);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(12,0.03827214);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(13,0.03245337);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(14,0.02842077);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(15,0.02335144);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(16,0.01874386);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(17,0.01540636);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(18,0.009903006);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(19,0.008820665);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(20,0.006035329);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(21,0.00256099);
   VbbHcc_seljet_Aplanarity_stack_1->SetBinError(22,0.002863598);
   VbbHcc_seljet_Aplanarity_stack_1->SetEntries(65683);

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
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(1,12.74822);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(2,9.918356);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(3,6.560494);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(4,4.418723);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(5,2.930981);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(6,2.102508);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(7,1.436385);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(8,1.007393);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(9,0.6931022);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(10,0.4676729);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(11,0.3220083);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(12,0.217904);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(13,0.1486514);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(14,0.08801492);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(15,0.06407159);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(16,0.02973174);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(17,0.02049453);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(18,0.01265079);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(19,0.008684382);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(20,0.002765485);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(21,0.001239621);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(22,0.0002466138);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(23,0.0001893235);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinContent(24,0.0001574125);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(1,0.05502252);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(2,0.04882344);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(3,0.0398424);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(4,0.03279393);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(5,0.02669998);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(6,0.02262813);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(7,0.01868255);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(8,0.01564195);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(9,0.01298269);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(10,0.01068323);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(11,0.008879306);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(12,0.007256977);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(13,0.006003755);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(14,0.004644326);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(15,0.003935905);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(16,0.00269246);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(17,0.002226036);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(18,0.001737248);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(19,0.001451951);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(20,0.0008118477);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(21,0.0005594556);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(22,0.0002466138);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(23,0.0001893235);
   VbbHcc_seljet_Aplanarity_stack_2->SetBinError(24,0.0001574125);
   VbbHcc_seljet_Aplanarity_stack_2->SetEntries(187491);

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
